#ifndef __TRON2_TALKY_VISION_LANGUAGE_H
#define __TRON2_TALKY_VISION_LANGUAGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron2/talky/Talker.h"

namespace tron2
{
// Class used to create talkers for vision language
class VisionLanguage 
{
private:    
    static log4cxx::LoggerPtr logger;

public:
    // tune talker for specific vision topic
    static bool tuneTalker4Topic(Talker& oTalker, int topic);
};

}
#endif
