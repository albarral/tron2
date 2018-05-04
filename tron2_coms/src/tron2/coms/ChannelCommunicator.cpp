/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/ChannelCommunicator.h"
#include "tron2/talky/TalkyLanguages.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr ChannelCommunicator::logger(Logger::getLogger("tron.talky2"));

ChannelCommunicator::ChannelCommunicator()
{    
    node = -1;
    channel = -1;
    topic = -1;
    pTalker = 0;
    btuned = false;
}

ChannelCommunicator::~ChannelCommunicator()
{    
    if (pTalker != 0)
        delete(pTalker);
}

void ChannelCommunicator::connect2Channel(int node, int channel, int topic)
{
        this->node = node;
        this->channel = channel;
        this->topic = topic;
        setIdentity();
        // create proper talker for this node & topic
        pTalker = TalkyLanguages::createTalker(node, topic);
        btuned = (pTalker != 0);
}
}