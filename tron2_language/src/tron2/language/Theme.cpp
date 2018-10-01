/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/Theme.h"
#include "tron2/language/Language.h"
#include "tron2/language/categories/FeaturesCategory.h"
#include "tron2/language/categories/ObjectsCategory.h"

namespace tron2
{
Theme::Theme(int category, int id)
{
    this->category = category;
    this->id = id;
    buildName();
}

//Theme::~Theme()
//{
//}

void Theme::buildName()
{
    switch (category)
    {
        case Language::eLANGUAGE_ACTION:
        {
            // TO DO ...
//            ActionsCategory oActionsCategory;
//            oActionsCategory.getName4Code(id, name);
        }
            break;;
            
        case Language::eLANGUAGE_FEATURE:
        {
            FeaturesCategory oFeaturesCategory;
            oFeaturesCategory.getName4Code(id, name);
        }
            break;

        case Language::eLANGUAGE_OBJECT:
        {
            ObjectsCategory oObjectsCategory;
            oObjectsCategory.getName4Code(id, name);
        }
            break;
            
         // undefined categories
        default:
            name = "";
    }
}

std::string Theme::toString()
{
    return "Theme [category= " + std::to_string(category) + ", id= " + std::to_string(id) + ", name= " + name + "] codes: \n" + tron::CodeMap::toString();
}

}