/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/MoveFactory.h"
#include "tron2/moves/CircularGenerator.h"
#include "tron2/moves/WaveGenerator.h"

namespace tron2
{
MoveFactory::MoveFactory()
{
}

MoveFactory::~MoveFactory()
{
}

bool MoveFactory::generateMovement(CyclicMovement& oCyclicMovement, int figure)
{
    bool bok = true;
    switch (figure)
    {
        case eMOVEMENT_LINE:
            WaveGenerator::createLine(oCyclicMovement, freq, size, angle);
            break;            
        case eMOVEMENT_WAVE:
            WaveGenerator::createWave(oCyclicMovement, freq, size, relFactor, relFreq, angle);
            break;            
        case eMOVEMENT_CIRCLE:
            CircularGenerator::createCircle(oCyclicMovement, freq, size, angle, brotation);
            break;
        case eMOVEMENT_ELLIPSE:
            CircularGenerator::createEllipse(oCyclicMovement, freq, size, relFactor, angle, brotation);
            break;            
        default: 
            bok = false;
            break;
    }
    return bok;
}

}