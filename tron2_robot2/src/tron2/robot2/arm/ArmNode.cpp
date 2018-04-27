/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/arm/ArmNode.h"
#include "tron2/robot2/RobotSystem.h"

namespace tron2
{    
const std::string ArmNode::ARM_JOINT = "joint";
const std::string ArmNode::ARM_AXIS = "axis";
const std::string ArmNode::ARM_CYCLER = "cycler";
const std::string ArmNode::ARM_EXTRA = "extra";    

ArmNode::ArmNode() : Node(RobotSystem::eNODE_ARM, RobotSystem::ARM_NODE)
{
    fillTopics();
}

void ArmNode::fillTopics()
{
    // build topics map
    addCode(eARM_JOINT, ARM_JOINT);
    addCode(eARM_AXIS, ARM_AXIS);
    addCode(eARM_CYCLER, ARM_CYCLER);
    addCode(eARM_EXTRA, ARM_EXTRA);
}

}