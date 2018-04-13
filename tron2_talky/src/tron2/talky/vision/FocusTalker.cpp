/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/vision/FocusTalker.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/VisionTopics.h"

namespace tron2
{

FocusTalker::FocusTalker() : Talker(RobotNodes::eNODE_VISION, VisionTopics::eVISION_FOCUS)
{
    // complete name with topic word
    completeName();
    
    // build talker knowledge
    buildKnowledge();    
}

void FocusTalker::completeName()
{
    VisionTopics oVisionTopics;
    name += oVisionTopics.getName4Topic(topic);    
}

void FocusTalker::buildKnowledge()
{
    addConcept(eFOCUS_SHIFT, FOCUS_SHIFT);
    addConcept(eFOCUS_MODE, FOCUS_MODE);                         
}
}