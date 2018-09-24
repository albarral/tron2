/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/features/DirectionsTheme.h"
#include "tron2/language/Language.h"
#include "tron2/language/categories/FeaturesCategory.h"

namespace tron2
{

DirectionsTheme::DirectionsTheme() : Theme(Language::eLANGUAGE_FEATURE, FeaturesCategory::eFEATURE_DIRECTION)
{
    // build theme
    build();    
}

void DirectionsTheme::build()
{
    addCode(eDIRECTION_UP, DIRECTION_UP);
    addCode(eDIRECTION_DOWN, DIRECTION_DOWN);                         
    addCode(eDIRECTION_LEFT, DIRECTION_LEFT);                      
    addCode(eDIRECTION_RIGHT, DIRECTION_RIGHT);                   
    addCode(eDIRECTION_FRONT, DIRECTION_FRONT);                        
    addCode(eDIRECTION_BACK, DIRECTION_BACK);                        
}
}