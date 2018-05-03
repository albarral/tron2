/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/vision/VisionNode.h"
#include "tron2/robot/RobotSystem.h"

namespace tron2
{    
const std::string VisionNode::VISION_FOCUS = "focus";

VisionNode::VisionNode() : Node(RobotSystem::eNODE_VISION, RobotSystem::VISION_NODE)
{
    fillTopics();
}

void VisionNode::fillTopics()
{
    // build topics map
    addCode(eVISION_FOCUS, VISION_FOCUS);
    addCode(Node::eEXTRA_TOPIC, Node::EXTRA_TOPIC);
}

}