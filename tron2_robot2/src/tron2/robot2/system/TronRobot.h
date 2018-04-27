#ifndef __TRON2_ROBOT2_TRONROBOT_H
#define __TRON2_ROBOT2_TRONROBOT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include "tron2/robot2/RobotSystem.h"

namespace tron2
{
// Definition of tron robot nodes
class TronRobot : public RobotSystem
{
 public:         
    TronRobot();              	
     
private:
    virtual void fillNodes();
};
}
#endif
