/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/ChannelClient.h"

using namespace log4cxx;

namespace tron2
{
ChannelClient::ChannelClient()
{    
}

//ChannelClient::~ChannelClient()
//{    
//}


bool ChannelClient::sendMessage(int code, float value)
{    
    bool bok = false;
    if (btuned)
    {
        // build message with topic talker
        if (oTalker.buildMessage(code, value, message))
        {
            // send message through wire (wire establishes a client connection)
            if (oWire.sendMsg(node, channel, message))
                bok = true;
            else
            {
                LOG4CXX_WARN(logger, identity + ": send message failed, no transmission channel");                                      
            }
        }
        else
        {
            LOG4CXX_WARN(logger, identity + ": send message failed, message not built");                       
        }
    }
    else
    {
        LOG4CXX_WARN(logger, identity + ": send message failed, communicator not tuned");            
    }
    return bok;
}

void ChannelClient::setIdentity()
{
    identity = "ChannelClient" + std::to_string(node) + "-" + std::to_string(channel);
    
}
}