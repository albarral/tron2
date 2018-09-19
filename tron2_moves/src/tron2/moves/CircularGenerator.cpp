/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/CircularGenerator.h"
#include "tron/math/Angle.h"

namespace tron2
{
//CircularGenerator::CircularGenerator()
//{
//}

//CircularGenerator::~CircularGenerator()
//{
//}

CyclicMovement CircularGenerator::createCircle(float freq, float amplitude, float angle, bool brotation)
{
    // a circle is an ellipse with relative factor 1.0  ... 
    return createEllipse(freq, amplitude, 1.0, angle, brotation);
}

CyclicMovement CircularGenerator::createEllipse(float freq, float amplitude, float relFactor, float angle, bool brotation)
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

    // same freq
    oCyclicComponent2.setFreq(freq);
    // relative factor
    oCyclicComponent2.setAmp(amplitude * relFactor);
    // orthogonal orientation
    float angle2 = tron::Angle::inLimits(angle + 90.0);
    oCyclicComponent2.setAngle(angle2);
  
    float xphase, yphase;
    computePhases(brotation, angle, xphase, yphase);
    oCyclicComponent1.setPhase(xphase);
    oCyclicComponent2.setPhase(yphase);
    
    return oCyclicMovement;
}

void CircularGenerator::computePhases(bool brotation, float orientation, float& xphase, float& yphase)
{    
    // if positive rotation (anticlockwise)
    if (brotation)
    {
        xphase = orientation;
        // keep inside limits [0, 360)    
        yphase = xphase - 90.0;
        yphase = tron::Angle::inLimits(yphase);        
    }
    // if negative rotation (clockwise)
    else
    {
        // keep inside limits [0, 360)    
        xphase = tron::Angle::inLimits(-orientation);                
        // keep inside limits [0, 360)    
        yphase = tron::Angle::inLimits(xphase + 90.0);                
    }
}
}
