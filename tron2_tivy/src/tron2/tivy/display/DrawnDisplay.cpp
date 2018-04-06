/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/tivy/display/DrawnDisplay.h"

namespace tron2 
{
DrawnDisplay::DrawnDisplay()
{
}
    
void DrawnDisplay::init(std::string name, int w, int h)
{
    Display::setName(name);
    Draw::setSize(w, h);
}

void DrawnDisplay::update()
{  
    // show drawn image
    Display::show(image);
}
}