#ifndef __TRON2_TALKY_ARMCLIENT_H
#define __TRON2_TALKY_ARMCLIENT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron2/talky/channel/ChannelClient.h"
#include "tron2/robot/clients/TronAnyClient.h"
#include "tron2/robot/clients/TronArmClient.h"

namespace tron2
{
// Arm client class (implementing TronArmClient interface) to control a robot arm.
class ArmClient : public TronArmClient, public TronAnyClient
{    
private:
    static log4cxx::LoggerPtr logger;
    ChannelClient oJointChannelClient;
    ChannelClient oAxisChannelClient;
    ChannelClient oCycler1ChannelClient;
    ChannelClient oCycler2ChannelClient;
    ChannelClient oExtraChannelClient;
        
public:
    ArmClient();
    ~ArmClient();

    // set HS joint (horizontal shoulder) to given position (degrees)
    virtual bool setHS(float value);
    // set VS joint (vertical shoulder) to given position (degrees)
    virtual bool setVS(float value);
    // set ELB joint (elbow) to given position (degrees)
    virtual bool setELB(float value);
    // set HWRI joint (horizontal wrist) to given position (degrees)
    virtual bool setHWRI(float value);
    // set VWRI joint (vertical wrist) to given position (degrees)
    virtual bool setVWRI(float value);    
    
    // axis topic ...
    // set pan axis to given position (degrees)
    virtual bool setPan(float value);
    // set tilt axis to given position (degrees)
    virtual bool setTilt(float value);
    // set radial axis to given position (cm)
    virtual bool setRadial(float value);
    // move pan axis at given speed (degrees/s)
    virtual bool setPanSpeed(float value);
    // move tilt axis at given speed (degrees/s)
    virtual bool setTiltSpeed(float value);
    // move radial axis at given speed (cm/s)
    virtual bool setRadialSpeed(float value);
    // keep arm tilt
    virtual bool keepTilt();

    // cycler1 topic ...
    // set amplitude of cycler1 main component (degrees)
    virtual bool setCycler1MainAmp(float value);
    // set angle of cycler1 main component (degrees)
    virtual bool setCycler1MainAngle(float value);
    // set frequency of cycler1 main component (Hz)
    virtual bool setCycler1MainFreq(float value);
    // set phase of cycler1 main component (degrees)
    virtual bool setCycler1MainPhase(float value);
    // set amplitude of cycler1 secondary component (degrees)
    virtual bool setCycler1SecAmp(float value);
    // set angle of cycler1 secondary component (degrees)
    virtual bool setCycler1SecAngle(float value);
    // set frequency of cycler1 secondary component (Hz)
    virtual bool setCycler1SecFreq(float value);
    // set phase of cycler1 secondary component (degrees)
    virtual bool setCycler1SecPhase(float value);
    // starts or stops cycler1 movement
    virtual bool setCycler1Action(int value);

    // cycler2 topic ...
    // set amplitude of cycler2 main component (degrees)
    virtual bool setCycler2MainAmp(float value);
    // set angle of cycler2 main component (degrees)
    virtual bool setCycler2MainAngle(float value);
    // set frequency of cycler2 main component (Hz)
    virtual bool setCycler2MainFreq(float value);
    // set phase of cycler2 main component (degrees)
    virtual bool setCycler2MainPhase(float value);
    // set amplitude of cycler2 secondary component (degrees)
    virtual bool setCycler2SecAmp(float value);
    // set angle of cycler2 secondary component (degrees)
    virtual bool setCycler2SecAngle(float value);
    // set frequency of cycler2 secondary component (Hz)
    virtual bool setCycler2SecFreq(float value);
    // set phase of cycler2 secondary component (degrees)
    virtual bool setCycler2SecPhase(float value);
    // starts or stops cycler2 movement
    virtual bool setCycler2Action(int value);

    // extra topic ...    
    // full stop of control actions 
    virtual bool fullStop();
    // end control process
    virtual bool endNode();        
};

}
#endif
