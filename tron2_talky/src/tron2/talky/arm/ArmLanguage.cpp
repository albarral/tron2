/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/arm/ArmLanguage.h"
#include "tron2/robot2/arm/ArmNode.h"
#include "tron2/robot2/arm/JointTopic.h"
#include "tron2/robot2/arm/AxisTopic.h"
#include "tron2/robot2/arm/CyclicTopic.h"
#include "tron2/robot2/common/ExtraTopic.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr ArmLanguage::logger(Logger::getLogger("tron.talky2"));

Talker* ArmLanguage::createTalker4Topic(int topic)
{
    // create proper talker for arm node topic
    Talker* pTalker = new Talker();
    switch (topic)
    {
        case ArmNode::eARM_JOINT:
        {
            JointTopic oJointTopic;
            pTalker->tune4Topic(oJointTopic);
            return pTalker;
            break;
        }
            
        case ArmNode::eARM_AXIS: 
        {
            AxisTopic oAxisTopic;
            pTalker->tune4Topic(oAxisTopic);
            return pTalker;
            break;
        }
            
        case ArmNode::eARM_CYCLIC: 
        {
            CyclicTopic oCyclicTopic;
            pTalker->tune4Topic(oCyclicTopic);
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
            LOG4CXX_WARN(logger, "ArmLanguage: can't create talker, unknown arm topic " << std::to_string(topic));                                      
            return 0;
    }    
}

}