/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/WaveGenerator.h"
#include "tron/math/Angle.h"

namespace tron2
{
//WaveGenerator::WaveGenerator()
//{
//}

//WaveGenerator::~WaveGenerator()
//{
//}

CyclicMovement WaveGenerator::createLine(float freq, float amplitude, float angle)
{
    CyclicMovement oCyclicMovement;
    oCyclicMovement.setDual(false);
    tron::CyclicComponent& oCyclicComponent1 =  oCyclicMovement.getPrimaryComponent();
    
    oCyclicComponent1.setFreq(freq);
    oCyclicComponent1.setAmp(amplitude);
    // keep angle inside limits [0, 360)    
    angle = tron::Angle::inLimits(angle);
    oCyclicComponent1.setAngle(angle);

    return oCyclicMovement;
}

CyclicMovement WaveGenerator::createWave(float freq, float amplitude, float relFactor, float relFreq, float angle)
{    
    CyclicMovement oCyclicMovement;
    oCyclicMovement.setDual(true);
    tron::CyclicComponent& oCyclicComponent1 =  oCyclicMovement.getPrimaryComponent();
    tron::CyclicComponent& oCyclicComponent2 =  oCyclicMovement.getSecondaryComponent();

    oCyclicComponent1.setFreq(freq);
    oCyclicComponent1.setAmp(amplitude);
    // keep angle inside limits [0, 360)    
    angle = tron::Angle::inLimits(angle);
    oCyclicComponent1.setAngle(angle);

    // relative freq
    oCyclicComponent2.setFreq(freq * relFreq);
    // relative factor
    oCyclicComponent2.setAmp(amplitude * relFactor);
    // orthogonal orientation
    float angle2 = tron::Angle::inLimits(angle + 90.0);
    oCyclicComponent2.setAngle(angle2);    
    // no phase difference
    
    return oCyclicMovement;    
}

}
