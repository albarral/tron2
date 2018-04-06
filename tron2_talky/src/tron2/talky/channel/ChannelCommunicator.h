#ifndef __TRON2_TALKY_CHANNELCOMMUNICATOR_H
#define __TRON2_TALKY_CHANNELCOMMUNICATOR_H

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
    int node;
    int topic;
    Talker* pTalker;
    bool btuned;                // the communicator is tuned when it has a talker
    std::string identity;    
    tron::FileWire oWire;                 // communications wire   
        
public:
    ChannelCommunicator(int node, int topic);
    ~ChannelCommunicator();
    
    bool isTuned() {return btuned;};
    std::string getIdentity() {return identity;};
    
protected:    
    virtual void setIdentity() = 0;
};

}
#endif