/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/CyclicFactory.h"
#include "tron2/moves/CircularGenerator.h"
#include "tron2/moves/WaveGenerator.h"

namespace tron2
{
CyclicFactory::CyclicFactory()
{
}

CyclicFactory::~CyclicFactory()
{
}

bool CyclicFactory::generateMovement(CyclicMovement& oCyclicMovement, int figure)
{
    bool bok = true;
    switch (figure)
    {
        case eMOVEMENT_LINE:
            oCyclicMovement = WaveGenerator::createLine(freq, size, angle);
            break;            
        case eMOVEMENT_WAVE:
            oCyclicMovement = WaveGenerator::createWave(freq, size, relFactor, relFreq, angle);
            break;            
        case eMOVEMENT_CIRCLE:
            oCyclicMovement = CircularGenerator::createCircle(freq, size, angle, brotation);
            break;
        case eMOVEMENT_ELLIPSE:
            oCyclicMovement = CircularGenerator::createEllipse(freq, size, relFactor, angle, brotation);
            break;            
        default: 
            bok = false;
            break;
    }
    return bok;
}

}