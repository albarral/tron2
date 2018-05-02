#ifndef __TRON2_COMS_ARM_CHANNELSUBSCRIBER_4AXES_H
#define __TRON2_COMS_ARM_CHANNELSUBSCRIBER_4AXES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/ChannelSubscriber.h"
#include "tron2/robot2/arm/ArmSensors.h"

namespace tron2
{
// Specific channel subscriber for arm axes topic.
class ChannelSubscriber4Axes : public ChannelSubscriber
{    
private:
    AxesData axesPositions;
    AxesData axesSpeeds;
        
public:
    ChannelSubscriber4Axes();
    //~ChannelSubscriber4Axes();

    AxesData& getAxesPositions() {return axesPositions;};
    AxesData& getAxesSpeeds() {return axesSpeeds;};
    
    // process data from received messages
    virtual void processData();
};

}
#endif
