#ifndef __TRON2_COMS_TALKER_LANGUAGE_H
#define __TRON2_COMS_TALKER_LANGUAGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron2/coms/talker/ChannelTalker.h"

namespace tron2
{
// Class used to tune channel talkers for specific node topics.
class TalkerLanguage 
{
private:    
    static log4cxx::LoggerPtr logger;

public:
    // set language for talker for the specified node & topic
    static bool setLanguage4Talker(ChannelTalker& oTalker, int node, int topic);       
    
private:
    // tune talker for specific arm topic
    static bool tuneTalker4ArmTopic(ChannelTalker& oTalker, int topic);
    // tune talker for specific body topic
    static bool tuneTalker4BodyTopic(ChannelTalker& oTalker, int topic);
    // tune talker for specific vision topic
    static bool tuneTalker4VisionTopic(ChannelTalker& oTalker, int topic);
    
};

}
#endif
