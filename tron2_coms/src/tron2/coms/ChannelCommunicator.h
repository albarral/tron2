#ifndef __TRON2_COMS_CHANNELCOMMUNICATOR_H
#define __TRON2_COMS_CHANNELCOMMUNICATOR_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>
#include <log4cxx/logger.h>

#include "tron2/talky/Talker.h"
#include "tron/wire2/FileWire.h"

namespace tron2
{
// Base class for channel communication classes (client, server, broadcaster & listener)
class ChannelCommunicator 
{    
protected:
    static log4cxx::LoggerPtr logger;
    int node;                       // target node for communication
    int channel;                   // communication channel in the node 
    int topic;                       // topic used for communication   
    Talker* pTalker;            // talker for data interpretation
    bool btuned;                // the communicator is tuned when it has a talker
    std::string identity;       // communicator identity
    tron::FileWire oWire;      // communications wire   
        
public:
    ChannelCommunicator();
    ~ChannelCommunicator();
    
    void connect2Channel(int node, int channel, int topic);
    bool isTuned() {return btuned;};
    std::string getIdentity() {return identity;};
    
protected:    
    virtual void setIdentity() = 0;
};

}
#endif
