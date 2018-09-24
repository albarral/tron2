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
    id = -1;
    //name = "?";
}

Theme::Theme(int category, int id)
{
    this->category = category;
    this->id = id;
}

//Theme::~Theme()
//{
//}


std::string Theme::toString()
{
    return "Theme [category= " + std::to_string(category) + ", id= " + std::to_string(id) + "] codes: \n" + tron::CodeMap::toString();
}

}