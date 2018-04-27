/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/system/TronRobot.h"

namespace tron2
{
TronRobot::TronRobot() : RobotSystem(1, "TronRobot")
{
    fillNodes();
}

void TronRobot::fillNodes()
{
    // build nodes map
    addCode(eNODE_ARM, ARM_NODE);
    addCode(eNODE_VISION, VISION_NODE);
    addCode(eNODE_BODYROLE, BODYROLE_NODE);
}

}