/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/ChannelSubscriber.h"

using namespace log4cxx;

namespace tron2
{
ChannelSubscriber::ChannelSubscriber()
{    
}

ChannelSubscriber::~ChannelSubscriber()
{    
    listMessages.clear();
}


bool ChannelSubscriber::senseChannel()
{    
    // clear messages queue
    listMessages.clear();  
    // hear messages from wire (wire establishes a subscriber connection)
    if (oWire.hearMessages(node, channel, listMessages))                    
        return true;
    else
    {
        LOG4CXX_WARN(logger, identity + ": sense channel failed, no reception channel");                                      
        return false;        
    }
}

void ChannelSubscriber::setIdentity()
{
    identity = "ChannelSubscriber" + std::to_string(node) + "-" + std::to_string(channel);
    
}
}