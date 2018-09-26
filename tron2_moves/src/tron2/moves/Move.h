#ifndef __TRON2_MOVES_MOVE_H
#define __TRON2_MOVES_MOVE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/
 
#include "tron2/moves/BasicMovement.h"

namespace tron2
{
// Class to represent an arm move (3D speed).
// The time property defines the desired move duration (ms).
// Derives from BasicMovement. 
class Move : public BasicMovement
{
public:  
    Move();
    //~Move();

    void setSpeed(float vpan, float vtilt, float vrad);
};
}
#endif
