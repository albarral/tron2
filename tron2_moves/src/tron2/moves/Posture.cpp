/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/Posture.h"

namespace tron2
{
Posture::Posture() : BasicMovement(BasicMovement::eTYPE_POSTURE)
{
}

void Posture::setPosition(float pan, float tilt, float rad)
{
    BasicMovement::set(pan, tilt, rad);
}
}
