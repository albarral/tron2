/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/MoveFactory.h"
#include "tron2/moves/CircularMovement.h"
#include "tron2/moves/WaveMovement.h"

namespace tron2
{
MoveFactory::MoveFactory()
{
    pCyclicMovement = 0;
}

MoveFactory::~MoveFactory()
{
    if (pCyclicMovement != 0)
        delete(pCyclicMovement);
}

bool MoveFactory::generateMovement(int figure)
{
    if (pCyclicMovement != 0)
        delete(pCyclicMovement);
    
    bool bok = true;
    switch (figure)
    {
        case eMOVEMENT_LINE:
        {
            WaveMovement* pWaveMovement = new WaveMovement();
            pWaveMovement->createLine(freq, size, angle);
            pCyclicMovement = pWaveMovement;
        }
            break;            
        case eMOVEMENT_WAVE:
        {
            WaveMovement* pWaveMovement = new WaveMovement();
            pWaveMovement->createWave(freq, size, relFactor, relFreq, angle);
            pCyclicMovement = pWaveMovement;
        }
            break;            
        case eMOVEMENT_CIRCLE:
        {
            CircularMovement* pCircularMovement = new CircularMovement();
            pCircularMovement->createCircle(freq, size, angle, brotation);
            pCyclicMovement = pCircularMovement;
        }
            break;
        case eMOVEMENT_ELLIPSE:
        {
            CircularMovement* pCircularMovement = new CircularMovement();
            pCircularMovement->createEllipse(freq, size, relFactor, angle, brotation);
            pCyclicMovement = pCircularMovement;
        }
            break;            
        default: 
            pCyclicMovement = 0;
            bok = false;
            break;
    }
    return bok;
}

}