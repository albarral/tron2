/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/MoveFactory.h"
#include "tron2/moves/CircularMovement.h"
#include "tron2/moves/WaveMovement.h"
#include "tron2/language/objects/FiguresTheme.h"

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
        case FiguresTheme::eFIGURE_LINE:
        {
            WaveMovement* pWaveMovement = new WaveMovement();
            pWaveMovement->createLine(freq, size, angle);
            pCyclicMovement = pWaveMovement;
        }
            break;            
        case FiguresTheme::eFIGURE_WAVE:
        {
            WaveMovement* pWaveMovement = new WaveMovement();
            pWaveMovement->createWave(freq, size, relFactor, relFreq, angle);
            pCyclicMovement = pWaveMovement;
        }
            break;            
        case FiguresTheme::eFIGURE_CIRCLE:
        {
            CircularMovement* pCircularMovement = new CircularMovement();
            pCircularMovement->createCircle(freq, size, angle, brotation);
            pCyclicMovement = pCircularMovement;
        }
            break;
        case FiguresTheme::eFIGURE_ELLIPSE:
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