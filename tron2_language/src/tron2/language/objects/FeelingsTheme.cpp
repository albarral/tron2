/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/objects/FeelingsTheme.h"
#include "tron2/language/Language.h"
#include "tron2/language/categories/ObjectsCategory.h"

namespace tron2
{

FeelingsTheme::FeelingsTheme() : Theme(Language::eLANGUAGE_OBJECT, ObjectsCategory::eOBJECT_FEELING)
{
    // build theme
    build();    
}

void FeelingsTheme::build()
{
    addCode(eFEELING_ACCEPT, FEELING_ACCEPT);
    addCode(eFEELING_DENY, FEELING_DENY);                         
    addCode(eFEELING_JOY, FEELING_JOY);                      
    addCode(eFEELING_ANGER, FEELING_ANGER);                   
    addCode(eFEELING_SURPRISE, FEELING_SURPRISE);                        
}
}