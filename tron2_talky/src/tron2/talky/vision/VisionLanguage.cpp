/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/vision/VisionLanguage.h"
#include "tron2/talky/vision/FocusTalker.h"
#include "tron2/talky/BasicTalker.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/VisionTopics.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr VisionLanguage::logger(Logger::getLogger("tron.talky2"));

Talker* VisionLanguage::createTalker4Topic(int topic)
{
    // create proper talker for vision node topic
    switch (topic)
    {
        case VisionTopics::eVISION_FOCUS: 
            return new FocusTalker();
            break;            
                        
        case VisionTopics::eVISION_EXTRA: 
            return new BasicTalker(RobotNodes::eNODE_VISION, VisionTopics::eVISION_EXTRA);
            break;
            
        default:
            LOG4CXX_WARN(logger, "TalkyLanguages: can't create talker, unknown vision topic " << std::to_string(topic));                                      
            return 0;
    }    
}

}