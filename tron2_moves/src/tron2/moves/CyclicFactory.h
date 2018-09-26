#ifndef __TRON2_MOVES_CYCLIC_FACTORY_H
#define __TRON2_MOVES_CYCLIC_FACTORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/moves/CyclicMovement.h"

namespace tron2
{
// Class used to compute complex cyclic movements.
class CyclicFactory
{
public:
    /*! movement codes  */
    enum eCodes
    {
         eMOVEMENT_CIRCLE,                       
         eMOVEMENT_ELLIPSE,                       
         eMOVEMENT_SQUARE,                       
         eMOVEMENT_RECTANGLE,                    
         eMOVEMENT_TRIANGLE,                    
         eMOVEMENT_LINE,                    
         eMOVEMENT_WAVE,                    
         eMOVEMENT_DIM
    };

private:    
    float freq;         // frequency of cyclic movement
    float size;         // size of cyclic movement 
    float angle;        // orientation of cyclic movement (degrees)
    float relFactor;   // relative xy factor of cyclic movement
    float relFreq;      // relative frequency of wave movements
    bool brotation;     // rotation sign of circular movements (positive is anticlockwise)

public:
    CyclicFactory();
    ~CyclicFactory();

    void setFreq(float value) {freq = value;}
    void setSize(float value) {size = value;}
    void setAngle(float value) {angle = value;}
    void setRelativeFactor(float value) {relFactor = value;}
    void setRelativeFreq(float value) {relFreq = value;}
    void setRotation(bool value) {brotation = value;}
    
    float getFreq() {return freq;}; 
    float getSize() {return size;}; 
    float getAngle() {return angle;}; 
    float getRelativeFactor() {return relFactor;};
    float getRelativeFreq() {return relFreq;};
    float getRotation() {return brotation;};

    // generate cyclic movement for specified figure, returns false if unsupported figure
    bool generateMovement(CyclicMovement& oCyclicMovement, int figure);        
};
}
#endif
