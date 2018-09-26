/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/Move.h"

namespace tron2
{
Move::Move() : BasicMovement(BasicMovement::eTYPE_MOVE)
{
}

void Move::setSpeed(float vpan, float vtilt, float vrad)
{
    BasicMovement::set(vpan, vtilt, vrad);
}
}
