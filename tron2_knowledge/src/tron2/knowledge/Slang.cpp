/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <stdexcept>      // std::out_of_range

#include "tron2/knowledge/Slang.h"

namespace tron2
{
Slang::Slang(char letter)
{          
    this->letter = letter;
}

Slang::~Slang()
{
    clear();
}

void Slang::clear()
{
    mapConcepts.clear();    
}

bool Slang::addConcept(Concept& oConcept)
{
    // if concept name begins with proper letter
    if (oConcept.getName().front() == letter)
    {
        // add concept
        mapConcepts.emplace(oConcept.getName(), oConcept);
        return true;
    }
    else
        return false;
}

Concept* Slang::findConcept(std::string word)
{
    try 
    {
        return &(mapConcepts.at(word));
    }
    // return null if not found
    catch (const std::out_of_range& oor) 
    {                
        return nullptr;
    }                
}

std::string Slang::toString()
{
    std::string text = "Slang [letter = " + std::string(1, letter) + "]\n";
    for (auto& x: mapConcepts) 
    {
        text += x.second.toString() + "\n";        
    }
    
    return text;    
}

}




