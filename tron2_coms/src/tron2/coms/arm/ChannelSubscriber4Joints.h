#ifndef __TRON2_COMS_ARM_CHANNELSUBSCRIBER_4JOINTS_H
#define __TRON2_COMS_ARM_CHANNELSUBSCRIBER_4JOINTS_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/ChannelSubscriber.h"
#include "tron2/robot2/arm/ArmSensors.h"

namespace tron2
{
// Specific channel subscriber for arm joints topic.
class ChannelSubscriber4Joints : public ChannelSubscriber
{    
private:
    JointsData jointPositions;
        
public:
    ChannelSubscriber4Joints();
    //~ChannelSubscriber4Joints();

    JointsData& getJointPositions() {return jointPositions;};
    
    // process data from received messages
    virtual void processData();
};

}
#endif
