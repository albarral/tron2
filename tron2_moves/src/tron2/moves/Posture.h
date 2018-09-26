#ifndef __TRON2_MOVES_POSTURE_H
#define __TRON2_MOVES_POSTURE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/
 
#include "tron2/moves/BasicMovement.h"

namespace tron2
{
// Class to represent an arm posture (3D position).
// The time property defines the desired posture duration (ms).
// Derives from BasicMovement. 
class Posture : public BasicMovement
{
public:  
    Posture();
    //~Posture();

    void setPosition(float pan, float tilt, float rad);
};
}
#endif
