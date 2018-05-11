/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/vision/VisionLanguage.h"
#include "tron2/robot/vision/VisionNode.h"
#include "tron2/robot/vision/FocusTopic.h"
#include "tron2/robot/common/ExtraTopic.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr VisionLanguage::logger(Logger::getLogger("tron.talky2"));

bool VisionLanguage::tuneTalker4Topic(Talker& oTalker, int topic)
{
    bool bret;
    switch (topic)
    {
        case VisionNode::eVISION_FOCUS: 
        {
            FocusTopic oFocusTopic;
            oTalker.tune4Topic(oFocusTopic);
            bret = true;
            break;
        }
                        
        case Node::eEXTRA_TOPIC: 
        {
            ExtraTopic oExtraTopic;
            oTalker.tune4Topic(oExtraTopic);
            bret = true;
            break;
        }
            
        default:
            LOG4CXX_WARN(logger, "TalkyLanguages: can't create talker, unknown vision topic " << std::to_string(topic));                                      
            bret = false;                   
    }    
    return bret;
}

}