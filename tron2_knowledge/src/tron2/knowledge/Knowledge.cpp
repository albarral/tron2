/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <stdexcept>      // std::out_of_range

#include "tron2/knowledge/Knowledge.h"
#include "tron2/language/Language.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr Knowledge::logger(Logger::getLogger("tron2"));
    
Knowledge::Knowledge()
{          
}

Knowledge::~Knowledge()
{
    clear();
}

void Knowledge::clear()
{
    mapSlangs.clear();
}

Slang* Knowledge::getSlang(char letter)
{
    try 
    {
        return &(mapSlangs.at(letter));
    }
    // return null if not found
    catch (const std::out_of_range& oor) 
    {                
        return nullptr;
    }                    
}

void Knowledge::addTheme(Theme& oTheme)
{          
    LOG4CXX_INFO(logger, "Knowledge: adding theme " + oTheme.getName());
    
    // create generic concept for the theme
    Concept oConcept(oTheme.getCategory(), oTheme.getID(), 0, "");
    
    std::map<int, std::string>& mapTheme = oTheme.getMapCodes();
    // for each theme code, add concept to knowledge
    int num = 0;
    for (auto& x: mapTheme)         
    {
        oConcept.setCode(x.first, x.second);
        if (addConcept(oConcept))
            num++;
    }    
    
    LOG4CXX_DEBUG(logger, "Knowledge: added " + std::to_string(num) + " concepts");        
}

bool Knowledge::addConcept(Concept& oConcept)
{
    LOG4CXX_DEBUG(logger, "Knowledge: adding concept " + oConcept.getName());

    bool bok = false;    
    // get concept's initial letter
    char letter = oConcept.getName().front();    
    // find slang for that letter 
    Slang* pSlang = getSlang(letter);
    // if found, add concept to it
    if (pSlang != nullptr) 
        bok = pSlang->addConcept(oConcept);
    // otherwise
    else
    {
        // create new slang and add the concept
        Slang oNewSlang(letter);
        bok = oNewSlang.addConcept(oConcept);
        //  and add it to the language area
        mapSlangs.emplace(letter, oNewSlang);
        LOG4CXX_DEBUG(logger, "Knowledge: added slang for letter " + std::string(1, letter));        
    }
    
    return bok;
}

Concept* Knowledge::interpret(std::string word)
{
    // get slang for word's initial letter 
    Slang* pSlang = getSlang(word.front());
    // if found, search word in slang
    if (pSlang != nullptr)
        return pSlang->findConcept(word);
    // return null if not found
    else
        return nullptr;
}

std::string Knowledge::toString()
{
    std::string text = "Knowledge\n";
    for (auto& x: mapSlangs) 
    {
        text += x.second.toString() + "\n";        
    }    
    return text;    
}

}




