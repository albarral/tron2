/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/vision/FocusTopic.h"
#include "tron2/robot/vision/VisionNode.h"

namespace tron2
{

FocusTopic::FocusTopic() : Topic(VisionNode::eVISION_FOCUS, VisionNode::VISION_FOCUS)
{
    fillConcepts();    
}

void FocusTopic::fillConcepts()
{
    addCode(eFOCUS_SHIFT, FOCUS_SHIFT);
    addCode(eFOCUS_MODE, FOCUS_MODE);                         
}
}