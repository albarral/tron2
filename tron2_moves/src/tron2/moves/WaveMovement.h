#ifndef __TRON2_MOVES_WAVE_MOVEMENT_H
#define __TRON2_MOVES_WAVE_MOVEMENT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/CyclicMovement.h"
 
namespace tron2
{
// Class used to generate wave cyclic movements.
// It extends from CyclicMovement.    
class WaveMovement : public CyclicMovement
{  
public:  
    WaveMovement();
    //~WaveMovement();
    
    // create linear movement
    void createLine(float freq, float amplitude, float angle); 
    // create wave movement
    void createWave(float freq, float amplitude, float relFactor, float relFreq, float angle); 
};
}
#endif
