/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/SequentialMovement.h"
#include "tron2/moves/Move.h"
#include "tron2/moves/Posture.h"

namespace tron2
{
SequentialMovement::SequentialMovement()
{
    millis = 0;
}

SequentialMovement::~SequentialMovement()
{
    clear();
}

void SequentialMovement::setTime(int value)
{
    if (value >= 0)
        millis = value;
    // negative values kept to -1
    else
        millis = -1;
}

void SequentialMovement::addPosture(float pan, float tilt, float rad)
{
    // create specified posture and add to movements list
    Posture oPosture;
    oPosture.setPosition(pan, tilt, rad);
    oPosture.setTime(millis);
    listMovements.push_back(oPosture);
}
  

void SequentialMovement::addMove(float vpan, float vtilt, float vrad)
{
    // create specified move and add to movements list
    Move oMove;
    oMove.setSpeed(vpan, vtilt, vrad);
    oMove.setTime(millis);
    listMovements.push_back(oMove);
}
  
void SequentialMovement::clear()
{
    listMovements.clear();
}
}
