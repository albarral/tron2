/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/knowledge/Concept.h"
#include "tron2/language/Language.h"

namespace tron2
{
Concept::Concept(int category, int theme, int code, std::string name) 
{          
    this->category = category;
    this->theme = theme;
    this->code = code;
    this->name = name;
}

//Concept::~Concept()
//{
//}

void Concept::setCategory(int category, int theme)
{
    this->category = category;
    this->theme = theme;    
}

void Concept::setCode(int code, std::string name)
{
    this->code = code;
    this->name = name;    
}

std::string Concept::toString()
{
    std::string text = "Concept: category=" + tron2::Language::getName4Category(category)  + ", theme=" + std::to_string(theme) + 
            ", code=" + std::to_string(code) + ", name=" + name;    
    return text;    
}

}




