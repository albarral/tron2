/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/vision/VisionNode.h"
#include "tron2/robot2/RobotSystem.h"

namespace tron2
{    
const std::string VisionNode::VISION_FOCUS = "focus";
const std::string VisionNode::VISION_EXTRA = "extra";    

VisionNode::VisionNode() : Node(RobotSystem::eNODE_VISION, RobotSystem::VISION_NODE)
{
    fillTopics();
}

void VisionNode::fillTopics()
{
    // build topics map
    addCode(eVISION_FOCUS, VISION_FOCUS);
    addCode(eVISION_EXTRA, VISION_EXTRA);
}

}