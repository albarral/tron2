/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/categories/ObjectsCategory.h"
#include "tron2/language/Language.h"

namespace tron2
{

ObjectsCategory::ObjectsCategory() : Theme(Language::eLANGUAGE_CATEGORY, Language::eLANGUAGE_OBJECT)
{
    // build theme
    build();    
}

void ObjectsCategory::build()
{
    addCode(eOBJECT_FIGURE, OBJECT_FIGURE);
    addCode(eOBJECT_FEELING, OBJECT_FEELING);
}
}