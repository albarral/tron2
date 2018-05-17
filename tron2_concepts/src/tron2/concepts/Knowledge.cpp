/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/Knowledge.h"

namespace tron2
{
Knowledge::Knowledge()
{          
    type = tron::Element::eTYPE_SUPERGROUP;
}

Knowledge::Knowledge(int id, std::string name) : Concept(id, name)
{          
    type = tron::Element::eTYPE_SUPERGROUP;
}

Knowledge::~Knowledge()
{
    clear();
}

void Knowledge::clear()
{
    listCategories.clear();    
}

void Knowledge::addCategory(Category& oCategory)
{
    // when adding a category to a knowledge, transfer the knowledge id to the category
    oCategory.setGroup(id);
    listCategories.push_back(oCategory);
}

std::string Knowledge::toString()
{
    std::string text = "Knowledge [" + Concept::toString() + "]\n";
    for (Category& oCategory : listCategories)
    {
        text += oCategory.toString() + "\n";        
    }
    
    return text;    
}

}




