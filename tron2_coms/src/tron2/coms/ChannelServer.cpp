/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/ChannelServer.h"

using namespace log4cxx;

namespace tron2
{
ChannelServer::ChannelServer()
{    
}

ChannelServer::~ChannelServer()
{    
    listMessages.clear();
}


bool ChannelServer::senseChannel()
{    
    // clear message queue
    listMessages.clear();  
    // get messages from wire (wire establishes a server connection)
    if (oWire.receiveMessages(node, channel, listMessages))                    
        return true;
    else
    {
        LOG4CXX_WARN(logger, identity + ": sense channel failed, no reception channel");                                      
        return false;        
    }
}

bool ChannelServer::clearChannel()
{
    // clear the info in our wire's server channel
    if (oWire.clearServerChannel(node, channel))
        return true;
    else
    {
        LOG4CXX_WARN(logger, identity + ": clear channel failed, no server channel");                                      
        return false;        
    }    
}

void ChannelServer::setIdentity()
{
    identity = "ChannelServer" + std::to_string(node) + "-" + std::to_string(channel);
    
}
}