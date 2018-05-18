/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/arm/ArmNode.h"
#include "tron2/robot/RobotSystem.h"

namespace tron2
{    
const std::string ArmNode::ARM_JOINT = "joint";
const std::string ArmNode::ARM_AXIS = "axis";
const std::string ArmNode::ARM_CYCLIC = "cyclic";

ArmNode::ArmNode() : Node(RobotSystem::eNODE_ARM, RobotSystem::ARM_NODE)
{
    fillTopics();
}

void ArmNode::fillTopics()
{
    // build topics map
    addCode(eARM_JOINT, ARM_JOINT);
    addCode(eARM_AXIS, ARM_AXIS);
    addCode(eARM_CYCLIC, ARM_CYCLIC);
    addCode(Node::eEXTRA_TOPIC, Node::EXTRA_TOPIC);
}

}