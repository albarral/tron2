/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/BasicMovement.h"

namespace tron2
{
BasicMovement::BasicMovement(int type)
{
    this->type = type;
    pan = 0.0;
    tilt = 0.0;
    radius = 0.0;
    millis = 0;
}

void BasicMovement::set(float pan, float tilt, float rad)
{
    this->pan = pan;
    this->tilt = tilt;
    this->radius = rad;
}

void BasicMovement::setTime(int value)
{
    if (value >= 0)
        millis = value;
    // negative values kept to -1
    else
        millis = -1;
}
}
