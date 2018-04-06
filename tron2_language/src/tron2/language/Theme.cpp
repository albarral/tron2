/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/Theme.h"

namespace tron2
{
Theme::Theme()
{
    category = -1;
//    id = -1;
    name = "?";
}

Theme::Theme(int category, std::string name)
{
    this->category = category;
//    this->id = id;
    this->name = name;
}

//Theme::~Theme()
//{
//}


std::string Theme::toString()
{
    return "Theme [name = " + name + ", category= " + std::to_string(category) + "] codes: \n" + tron::CodeMap::toString();
}

}