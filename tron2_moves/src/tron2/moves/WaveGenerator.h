#ifndef __TRON2_MOVES_WAVE_GENERATOR_H
#define __TRON2_MOVES_WAVE_GENERATOR_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/CyclicMovement.h"
 
namespace tron2
{
// Class used to generate wave cyclic movements.
class WaveGenerator
{  
public:  
    //WaveGenerator();
    //~WaveGenerator();
    
    // create linear movement
    static void createLine(CyclicMovement& oCyclicMovement, float freq, float amplitude, float angle); 
    // create wave movement
    static void createWave(CyclicMovement& oCyclicMovement, float freq, float amplitude, float relFactor, float relFreq, float angle); 
};
}
#endif
