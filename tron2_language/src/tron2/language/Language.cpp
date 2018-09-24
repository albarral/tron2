/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/Language.h"

namespace tron2
{
const std::string Language::LANGUAGE_ACTION = "action";       
const std::string Language::LANGUAGE_FEATURE = "feature";      
const std::string Language::LANGUAGE_OBJECT = "object";     
const std::string Language::LANGUAGE_CATEGORY = "category"; 
    

std::string Language::getName4Category(int category)
{
    switch (category)
    {
        case Language::eLANGUAGE_ACTION:
            return Language::LANGUAGE_ACTION;
            
        case Language::eLANGUAGE_FEATURE:
            return Language::LANGUAGE_FEATURE;

        case Language::eLANGUAGE_OBJECT:
            return Language::LANGUAGE_OBJECT;

        case Language::eLANGUAGE_CATEGORY:
            return Language::LANGUAGE_CATEGORY;
            
         // undefined categories
        default:
            return "";
    }
}
}