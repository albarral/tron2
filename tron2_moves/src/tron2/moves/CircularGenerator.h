#ifndef __TRON2_MOVES_CIRCULAR_GENERATOR_H
#define __TRON2_MOVES_CIRCULAR_GENERATOR_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/CyclicMovement.h"
 
namespace tron2
{
// Class used to generate circular (or elliptic) cyclic movements.
// Circular movements can have any orientation and positive or negative rotation (anti clockwise or clockwise respectively).
class CircularGenerator : public CyclicMovement
{  
public:  
    //CircularGenerator();
    //~CircularGenerator();
    
    // create circular movement
    static void createCircle(CyclicMovement& oCyclicMovement, float freq, float amplitude, float angle, bool brotation); 
    // create elliptic movement
    static void createEllipse(CyclicMovement& oCyclicMovement, float freq, float amplitude, float relFactor, float angle, bool brotation); 
    
private:
    static void computePhases(bool brotation, float orientation, float& xphase, float& yphase);
};
}
#endif
