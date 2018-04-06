#ifndef __TRON2_TIVY_DRAWN_DISPLAY_H
#define __TRON2_TIVY_DRAWN_DISPLAY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/tivy/display/Display.h"
#include "tron2/tivy/Draw.h"

namespace tron2 
{
// Utility class used to easy display drawn images.
// Extends from Draw and Display.    
class DrawnDisplay : public Display, public Draw
{
public:
    DrawnDisplay();       
    //~DrawnDisplay();
    
    // init display
    void init(std::string name, int w, int h);
    // update display output
    void update();
};
}    
#endif
