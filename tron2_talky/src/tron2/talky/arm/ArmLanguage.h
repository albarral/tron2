#ifndef __TRON2_TALKY_ARM_LANGUAGE_H
#define __TRON2_TALKY_ARM_LANGUAGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron2/talky/Talker.h"

namespace tron2
{
// Class used to create talkers for arm language
class ArmLanguage 
{
private:    
    static log4cxx::LoggerPtr logger;

public:
    // create talker for specific arm topic
    static Talker* createTalker4Topic(int topic);
};

}
#endif
