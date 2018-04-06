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

ChannelCommunicator::ChannelCommunicator(int node, int topic)
{    
    this->node = node;
    this->topic = topic;
    // create proper talker for this node & topic
    pTalker = TalkyLanguages::createTalker(node, topic);
    btuned = (pTalker != 0);
}

ChannelCommunicator::~ChannelCommunicator()
{    
    if (pTalker != 0)
        delete(pTalker);
}
}