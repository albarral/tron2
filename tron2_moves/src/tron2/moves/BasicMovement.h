#ifndef __TRON2_MOVES_BASIC_MOVEMENT_H
#define __TRON2_MOVES_BASIC_MOVEMENT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/
 
namespace tron2
{
// Base class to represent a basic arm movement.
// It may be a posture or a translational move.
// posture: defines a target position (3D)    
// move: defines a target speed (3D) 
// A time property can be used to hold the posture or to keep the move for a given time.
class BasicMovement
{
public:
    // movement types
    enum eType
    {
         eTYPE_POSTURE,           
         eTYPE_MOVE
    };
    
protected:
    int type;         // movement type (defines meaning of pan/tilt/radius values)
    float pan;      // pan position (degrees) or pan speed (degrees/s)
    float tilt;       // tilt position (degrees) or tilt speed (degrees/s)
    float radius;  // radial position (cm) or radial speed (cm/s)
    int millis;      // posture duration or move duration (ms)
    
public:  
    BasicMovement(int type);
    //~BasicMovement();

    bool isPosture() {return (type == eTYPE_POSTURE);};
    bool isMove() {return (type == eTYPE_MOVE);};
    
    void setTime(int value);
    
    float getPan() {return pan;}; 
    float getTilt() {return tilt;}; 
    float getRadius() {return radius;}; 
    int getTime() {return millis;};
    
protected:        
    void set(float pan, float tilt, float rad);
};
}
#endif
