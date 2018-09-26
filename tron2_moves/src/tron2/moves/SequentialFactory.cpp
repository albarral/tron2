/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/SequentialFactory.h"

namespace tron2
{
//SequentialFactory::SequentialFactory()
//{
//}

//SequentialFactory::~SequentialFactory()
//{
//}

bool SequentialFactory::generateMovement(SequentialMovement& oSequentialMovement, int type)
{
    bool bok = true;
    switch (type)
    {
        case eMOVEMENT_JOY:
            createJoyMovement(oSequentialMovement);
            break;            
        default: 
            bok = false;
            break;
    }
    return bok;
}

// TO DO ... configurable positions and time
void SequentialFactory::createJoyMovement(SequentialMovement& oSequentialMovement)
{
    int millis = 200;
    float pos1[3] = {60.0, 60.0, 80.0}; 
    float pos2[3] = {60.0, 60.0, 40.0}; 

    oSequentialMovement.clear();
    oSequentialMovement.setTime(millis);
    // four steps: 
    // pos1
    oSequentialMovement.addPosture(pos1[0], pos1[1], pos1[2]);
    // pos2
    oSequentialMovement.addPosture(pos2[0], pos2[1], pos2[2]);
    // pos1
    oSequentialMovement.addPosture(pos1[0], pos1[1], pos1[2]);
    // pos2
    oSequentialMovement.addPosture(pos2[0], pos2[1], pos2[2]);
}
}