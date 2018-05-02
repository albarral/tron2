/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/body/BodyLanguage.h"
#include "tron2/robot2/body/BodyNode.h"
#include "tron2/robot2/body/ExpressiveTopic.h"
#include "tron2/robot2/body/ArtisticTopic.h"
#include "tron2/robot2/common/ExtraTopic.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr BodyLanguage::logger(Logger::getLogger("tron.talky2"));

Talker* BodyLanguage::createTalker4Topic(int topic)
{
    // create proper talker for body node topic
    Talker* pTalker = new Talker();
    switch (topic)
    {
        case BodyNode::eBODY_EXPRESSIVE: 
        {
            ExpressiveTopic oExpressiveTopic;
            pTalker->tune4Topic(oExpressiveTopic);
            return pTalker;
            break;
        }
            
        case BodyNode::eBODY_ARTISTIC: 
        {
            ArtisticTopic oArtisticTopic;
            pTalker->tune4Topic(oArtisticTopic);
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
            LOG4CXX_WARN(logger, "TalkyLanguages: can't create talker, unknown body topic " << std::to_string(topic));                                      
            return 0;
    }    
}

}