#ifndef __TRON2_MOVES_SEQUENTIAL_FACTORY_H
#define __TRON2_MOVES_SEQUENTIAL_FACTORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/SequentialMovement.h"

namespace tron2
{
// Class used to compute sequential movements.
// TO DO ... extend available movements
class SequentialFactory
{
public:
    /*! movement codes  */
    enum eCodes
    {
         eMOVEMENT_JOY,                       
         eMOVEMENT_DIM
    };

public:
//    SequentialFactory();
//    ~SequentialFactory();

    // generate sequential movement of specified type, returns false if unavailable type
    static bool generateMovement(SequentialMovement& oSequentialMovement, int type);        
    
private:
    static void createJoyMovement(SequentialMovement& oSequentialMovement);
};
}
#endif
