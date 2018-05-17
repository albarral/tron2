/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts//Category.h"

namespace tron2
{
Category::Category()
{          
    type = tron::Element::eTYPE_GROUP;
}

Category::Category(int id, std::string name) : Concept(id, name)
{          
    type = tron::Element::eTYPE_GROUP;
}

Category::~Category()
{
    clear();
}

void Category::clear()
{
    listConcepts.clear();    
}

void Category::addConcept(Concept& oConcept)
{
    // when adding a concept to a category, transfer the category id & nature to the concept
    oConcept.setGroup(id);
    oConcept.setNature(nature);
    listConcepts.push_back(oConcept);
}

std::string Category::toString()
{
    std::string text = "Category [" + Concept::toString() + "]\n";
    for (Concept& oConcept : listConcepts)
    {
        text += oConcept.toString() + "\n";        
    }
    
    return text;    
}

}




