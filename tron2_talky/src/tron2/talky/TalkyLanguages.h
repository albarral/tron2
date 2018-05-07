#ifndef __TRON2_TALKY_TALKY_LANGUAGES_H
#define __TRON2_TALKY_TALKY_LANGUAGES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron2/talky/Talker.h"

namespace tron2
{
// Class used to create talkers for all talky languages.
class TalkyLanguages 
{
private:    
    static log4cxx::LoggerPtr logger;

public:
    // set language for talker for the specified node & topic
    static bool setLanguage4Talker(Talker& oTalker, int node, int topic);        
};

}
#endif
