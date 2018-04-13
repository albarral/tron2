/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/topics/VisionTopics.h"

namespace tron2
{    
const std::string VisionTopics::VISION_FOCUS = "focus";
const std::string VisionTopics::VISION_EXTRA = "extra";    

VisionTopics::VisionTopics()
{
    fillMap();
}

void VisionTopics::fillMap()
{
    // build topics map
    oTopicsMap.addCode(eVISION_FOCUS, VISION_FOCUS);
    oTopicsMap.addCode(eVISION_EXTRA, VISION_EXTRA);
}

}