/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/body/BodyLanguage.h"
#include "tron2/talky/body/ExpressiveTalker.h"
#include "tron2/talky/body/ArtisticTalker.h"
#include "tron2/talky/BasicTalker.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/BodyTopics.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr BodyLanguage::logger(Logger::getLogger("tron.talky2"));

Talker* BodyLanguage::createTalker4Topic(int topic)
{
    // create proper talker for body node topic
    switch (topic)
    {
        case BodyTopics::eBODY_EXPRESSIVE: 
            return new ExpressiveTalker();
            break;
            
        case BodyTopics::eBODY_ARTISTIC: 
            return new ArtisticTalker();
            break;
                        
        case BodyTopics::eBODY_EXTRA: 
            return new BasicTalker(RobotNodes::eNODE_BODYROLE, BodyTopics::eBODY_EXTRA);
            break;
            
        default:
            LOG4CXX_WARN(logger, "TalkyLanguages: can't create talker, unknown body topic " << std::to_string(topic));                                      
            return 0;
    }    
}

}