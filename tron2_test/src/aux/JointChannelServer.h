#ifndef __TRON2_TEST_JOINT_CHANNELSERVER_H
#define __TRON2_TEST_JOINT_CHANNELSERVER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/ChannelServer.h"

namespace tron2
{
// Channel listener implementation for arm joints topic.
class JointChannelServer : public ChannelServer
{            
public:
    JointChannelServer();
    //~JointChannelServer();
    
    // process commands from received messages
    virtual void processCommands();
};

}
#endif
