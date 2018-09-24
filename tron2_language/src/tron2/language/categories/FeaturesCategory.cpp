/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/categories/FeaturesCategory.h"
#include "tron2/language/Language.h"

namespace tron2
{

FeaturesCategory::FeaturesCategory() : Theme(Language::eLANGUAGE_CATEGORY, Language::eLANGUAGE_FEATURE)
{
    // build theme
    build();    
}

void FeaturesCategory::build()
{
    addCode(eFEATURE_DIRECTION, FEATURE_DIRECTION);
    addCode(eFEATURE_LENGTH, FEATURE_LENGTH);                         
    addCode(eFEATURE_QUANTITY, FEATURE_QUANTITY);                      
    addCode(eFEATURE_SIZE, FEATURE_SIZE);                   
    addCode(eFEATURE_SPEED, FEATURE_SPEED);                        
}
}