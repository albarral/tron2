/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/body/BodyLanguage.h"
#include "tron2/robot/body/BodyNode.h"
#include "tron2/robot/body/ExpressiveTopic.h"
#include "tron2/robot/body/ArtisticTopic.h"
#include "tron2/robot/common/ExtraTopic.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr BodyLanguage::logger(Logger::getLogger("tron.talky2"));

bool BodyLanguage::tuneTalker4Topic(Talker& oTalker, int topic)
{
    bool bret;
    switch (topic)
    {
        case BodyNode::eBODY_EXPRESSIVE: 
        {
            ExpressiveTopic oExpressiveTopic;
            oTalker.tune4Topic(oExpressiveTopic);
            bret = true;
            break;
        }
            
        case BodyNode::eBODY_ARTISTIC: 
        {
            ArtisticTopic oArtisticTopic;
            oTalker.tune4Topic(oArtisticTopic);
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
            LOG4CXX_WARN(logger, "TalkyLanguages: can't create talker, unknown body topic " << std::to_string(topic));                                      
            bret = false;                   
    }    
    return bret;
}

}