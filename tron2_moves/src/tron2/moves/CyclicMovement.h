#ifndef __TRON2_MOVES_CYCLIC_MOVEMENT_H
#define __TRON2_MOVES_CYCLIC_MOVEMENT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/math/CyclicComponent.h"
 
namespace tron2
{
// Base class used to represent cyclic movements.
// Cyclic movements may be composed by two cyclic components (each with its own frequency, angle, amplitude and phase). In this case the dual flag is informed.
class CyclicMovement
{  
protected: 
    bool bdual;                                 // both components informed
    tron::CyclicComponent oCyclicComponent1;     // primary cyclic component
    tron::CyclicComponent oCyclicComponent2;     // secondary cyclic component
    // change indicators
    bool bfreqChanged;                    // indicator of frequency changed 
    bool bampChanged;                  // indicator of amplitude changed 
    bool bangleChanged;                  // indicator of angle changed 
    bool bphaseChanged;                  // indicator of phase changed 
    
public:  
    CyclicMovement();
    //~CyclicMovement();

    void setDual(bool value) {bdual = value;};
    bool isDual() {return bdual;}
    tron::CyclicComponent& getPrimaryComponent() {return oCyclicComponent1;}
    tron::CyclicComponent& getSecondaryComponent() {return oCyclicComponent2;};
    
    void updateFreq(float freq);
    void updateAmplitude(float amplitude);
    void updateAngle(float angle);
    void updateRelFactor(float factor);     
    
    void clear();
    
    // change indicators
    bool isFreqChanged() {return bfreqChanged;};
    bool isAmpChanged() {return bampChanged;};
    bool isAngleChanged() {return bangleChanged;};
    bool isPhaseChanged() {return bphaseChanged;};    
    // set all change indicators
    void setFlags();
    // reset all change indicators
    void clearFlags();
    
};
}
#endif
