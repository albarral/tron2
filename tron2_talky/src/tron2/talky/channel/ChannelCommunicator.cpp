/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/channel/ChannelCommunicator.h"
#include "tron2/talky/TalkyLanguages.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr ChannelCommunicator::logger(Logger::getLogger("tron.talky2"));

ChannelCommunicator::ChannelCommunicator()
{    
    node = -1;
    topic = -1;
    pTalker = 0;
    btuned = false;
}

ChannelCommunicator::~ChannelCommunicator()
{    
    if (pTalker != 0)
        delete(pTalker);
}

void ChannelCommunicator::tune4NodeAndTopic(int node, int topic)
{
    // just one tuning allowed
    if (!btuned)    
    {
        this->node = node;
        this->topic = topic;
        setIdentity();
        // create proper talker for this node & topic
        pTalker = TalkyLanguages::createTalker(node, topic);
        btuned = (pTalker != 0);
    }
}
}