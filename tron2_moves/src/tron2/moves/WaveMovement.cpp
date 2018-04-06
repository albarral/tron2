/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/WaveMovement.h"
#include "tron/math/Angle.h"

namespace tron2
{
WaveMovement::WaveMovement()
{
}

//WaveMovement::~WaveMovement()
//{
//}

void WaveMovement::createLine(float freq, float amplitude, float angle)
{
    bdual = false;
    oCyclicComponent1.setFreq(freq);
    oCyclicComponent1.setAmp(amplitude);
    // orthogonal orientation
    angle = tron::Angle::inLimits(angle);
    oCyclicComponent1.setAngle(angle);
}

void WaveMovement::createWave(float freq, float amplitude, float relFactor, float relFreq, float angle)
{
    bdual = true;
    // relative freq
    oCyclicComponent1.setFreq(freq);
    oCyclicComponent2.setFreq(freq * relFreq);
    // relative factor
    oCyclicComponent1.setAmp(amplitude);
    oCyclicComponent2.setAmp(amplitude * relFactor);
    // keep inside limits [0, 360)    
    angle = tron::Angle::inLimits(angle);
    // orthogonal orientation
    float angle2 = tron::Angle::inLimits(angle + 90.0);
    oCyclicComponent1.setAngle(angle);
    oCyclicComponent2.setAngle(angle2);
    
    // no phase difference
}

}