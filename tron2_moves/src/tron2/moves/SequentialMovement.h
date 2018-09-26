#ifndef __TRON2_MOVES_SEQUENTIAL_MOVEMENT_H
#define __TRON2_MOVES_SEQUENTIAL_MOVEMENT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <vector>

#include "tron2/moves/BasicMovement.h"
 
namespace tron2
{
// Class used to represent a sequential movement, a sequence of basic movements either postures or moves.
class SequentialMovement
{  
private: 
    std::vector<BasicMovement> listMovements;
    int millis;      // duration of each basic movement (ms)
    
public:  
    SequentialMovement();
    ~SequentialMovement();

    std::vector<BasicMovement>& getMovementsList() {return listMovements;}
    void setTime(int value);
    int getTime() {return millis;};    
    
    // adds new posture to movements list
    void addPosture(float pan, float tilt, float rad);
    // adds new move to movements list
    void addMove(float vpan, float vtilt, float vrad);    
    int getNumSteps() {return listMovements.size();}; 
    // clear movements list
    void clear();    
};
}
#endif
