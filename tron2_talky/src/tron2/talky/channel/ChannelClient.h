#ifndef __TRON2_TALKY_CHANNELCLIENT_H
#define __TRON2_TALKY_CHANNELCLIENT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/channel/ChannelCommunicator.h"

namespace tron2
{
// Base channel communicator with client functionality (info sender on unicast channels).
class ChannelClient : public ChannelCommunicator
{    
protected:
    std::string message;
        
public:
    ChannelClient(int node, int topic); 
    //~ChannelClient();

    // build message for given command & send it through proper channel
    bool sendMessage(int code, float value);
    
protected:    
    virtual void setIdentity();
};

}
#endif
