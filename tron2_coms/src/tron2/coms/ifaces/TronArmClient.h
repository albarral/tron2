#ifndef __TRON2_COMS_IARMCLIENT_H
#define __TRON2_COMS_IARMCLIENT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

namespace tron2
{
// Interface class for arm clients
class TronArmClient
{        
 public:     
    // joint topic ...
    // set HS joint (horizontal shoulder) to given position (degrees)
    virtual bool setHS(float value) = 0;
    // set VS joint (vertical shoulder) to given position (degrees)
    virtual bool setVS(float value) = 0;
    // set ELB joint (elbow) to given position (degrees)
    virtual bool setELB(float value) = 0;
    // set HWRI joint (horizontal wrist) to given position (degrees)
    virtual bool setHWRI(float value) = 0;
    // set VWRI joint (vertical wrist) to given position (degrees)
    virtual bool setVWRI(float value) = 0;

    // axis topic ...
    // set pan axis to given position (degrees)
    virtual bool setPan(float value) = 0;
    // set tilt axis to given position (degrees)
    virtual bool setTilt(float value) = 0;
    // set radial axis to given position (cm)
    virtual bool setRadial(float value) = 0;
    // move pan axis at given speed (degrees/s)
    virtual bool setPanSpeed(float value) = 0;
    // move tilt axis at given speed (degrees/s)
    virtual bool setTiltSpeed(float value) = 0;
    // move radial axis at given speed (cm/s)
    virtual bool setRadialSpeed(float value) = 0;
    // keep arm tilt
    virtual bool keepTilt() = 0;
    
    // cycler1 topic ...
    // set amplitude of cycler1 main component (degrees)
    virtual bool setCycler1MainAmp(float value) = 0;
    // set angle of cycler1 main component (degrees)
    virtual bool setCycler1MainAngle(float value) = 0;
    // set frequency of cycler1 main component (Hz)
    virtual bool setCycler1MainFreq(float value) = 0;
    // set phase of cycler1 main component (degrees)
    virtual bool setCycler1MainPhase(float value) = 0;
    // set amplitude of cycler1 secondary component (degrees)
    virtual bool setCycler1SecAmp(float value) = 0;
    // set angle of cycler1 secondary component (degrees)
    virtual bool setCycler1SecAngle(float value) = 0;
    // set frequency of cycler1 secondary component (Hz)
    virtual bool setCycler1SecFreq(float value) = 0;
    // set phase of cycler1 secondary component (degrees)
    virtual bool setCycler1SecPhase(float value) = 0;
    // starts or stops cycler1 movement
    virtual bool setCycler1Action(int value) = 0;

    // cycler2 topic ...
    // set amplitude of cycler2 main component (degrees)
    virtual bool setCycler2MainAmp(float value) = 0;
    // set angle of cycler2 main component (degrees)
    virtual bool setCycler2MainAngle(float value) = 0;
    // set frequency of cycler2 main component (Hz)
    virtual bool setCycler2MainFreq(float value) = 0;
    // set phase of cycler2 main component (degrees)
    virtual bool setCycler2MainPhase(float value) = 0;
    // set amplitude of cycler2 secondary component (degrees)
    virtual bool setCycler2SecAmp(float value) = 0;
    // set angle of cycler2 secondary component (degrees)
    virtual bool setCycler2SecAngle(float value) = 0;
    // set frequency of cycler2 secondary component (Hz)
    virtual bool setCycler2SecFreq(float value) = 0;
    // set phase of cycler2 secondary component (degrees)
    virtual bool setCycler2SecPhase(float value) = 0;
    // starts or stops cycler2 movement
    virtual bool setCycler2Action(int value) = 0;
};
}
#endif
