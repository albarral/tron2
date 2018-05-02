#ifndef __TRON2_COMS_ARMLISTENER_H
#define __TRON2_COMS_ARMLISTENER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>
#include <vector>
#include <log4cxx/logger.h>

#include "tron2/coms/arm/ChannelSubscriber4Joints.h"
#include "tron2/coms/arm/ChannelSubscriber4Axes.h"
#include "tron2/coms/ChannelSubscriber.h"
#include "tron2/coms/ifaces/TronArmListener.h"
#include "tron2/robot2/arm/ArmSensors.h"

namespace tron2
{
// Arm client class (implementing TronArmListener interface) to sense a robot arm.
class ArmListener : public TronArmListener
{    
private:
    static log4cxx::LoggerPtr logger;
    ChannelSubscriber4Joints oChannelSubscriber4Joints;
    ChannelSubscriber4Axes oChannelSubscriber4Axes;    
        
public:
    ArmListener();
    //~ArmListener();

    // senses subscribed channels
    bool senseChannels();
    
    // joint topic ...
    // sense joints positions 
    virtual JointsData& getJointPositions();
    // sense joint states
//    virtual JointsData& getJointStates();
//
    // axis topic ...
    // sense axes positions 
    virtual AxesData& getAxesPositions();
    // sense axes speeds 
    virtual AxesData& getAxesSpeeds();
    
private:
    // hear and process info in given channel 
    bool senseChannel(ChannelSubscriber& oChannelSubscriber);
};

}
#endif
