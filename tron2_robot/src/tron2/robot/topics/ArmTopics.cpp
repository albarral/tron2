/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/topics/ArmTopics.h"

namespace tron2
{    
const std::string ArmTopics::ARM_JOINT = "joint";
const std::string ArmTopics::ARM_AXIS = "axis";
const std::string ArmTopics::ARM_CYCLER1 = "cycler1";
const std::string ArmTopics::ARM_CYCLER2 = "cycler2";
const std::string ArmTopics::ARM_EXTRA = "extra";    

ArmTopics::ArmTopics()
{
    fillMap();
}

void ArmTopics::fillMap()
{
    // build topics map
    oTopicsMap.addCode(eARM_JOINT, ARM_JOINT);
    oTopicsMap.addCode(eARM_AXIS, ARM_AXIS);
    oTopicsMap.addCode(eARM_CYCLER1, ARM_CYCLER1);
    oTopicsMap.addCode(eARM_CYCLER2, ARM_CYCLER2);
    oTopicsMap.addCode(eARM_EXTRA, ARM_EXTRA);
}

}