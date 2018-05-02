/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/vision/VisionLanguage.h"
#include "tron2/robot2/vision/VisionNode.h"
#include "tron2/robot2/vision/FocusTopic.h"
#include "tron2/robot2/common/ExtraTopic.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr VisionLanguage::logger(Logger::getLogger("tron.talky2"));

Talker* VisionLanguage::createTalker4Topic(int topic)
{
    // create proper talker for vision node topic
    Talker* pTalker = new Talker();
    switch (topic)
    {
        case VisionNode::eVISION_FOCUS: 
        {
            FocusTopic oFocusTopic;
            pTalker->tune4Topic(oFocusTopic);
            return pTalker;
            break;
        }
                        
        case Node::eEXTRA_TOPIC: 
        {
            ExtraTopic oExtraTopic;
            pTalker->tune4Topic(oExtraTopic);
            return pTalker;
            break;
        }
            
        default:
            LOG4CXX_WARN(logger, "TalkyLanguages: can't create talker, unknown vision topic " << std::to_string(topic));                                      
            return 0;
    }    
}

}