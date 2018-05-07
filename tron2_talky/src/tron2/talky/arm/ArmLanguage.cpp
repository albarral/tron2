/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/arm/ArmLanguage.h"
#include "tron2/robot/arm/ArmNode.h"
#include "tron2/robot/arm/JointTopic.h"
#include "tron2/robot/arm/AxisTopic.h"
#include "tron2/robot/arm/CyclicTopic.h"
#include "tron2/robot/common/ExtraTopic.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr ArmLanguage::logger(Logger::getLogger("tron.talky2"));

bool ArmLanguage::tuneTalker4Topic(Talker& oTalker, int topic)
{
    bool bret;
    switch (topic)
    {
        case ArmNode::eARM_JOINT:
        {
            JointTopic oJointTopic;
            oTalker.tune4Topic(oJointTopic);
            bret = true;
            break;
        }
            
        case ArmNode::eARM_AXIS: 
        {
            AxisTopic oAxisTopic;
            oTalker.tune4Topic(oAxisTopic);
            bret = true;
            break;
        }
            
        case ArmNode::eARM_CYCLIC: 
        {
            CyclicTopic oCyclicTopic;
            oTalker.tune4Topic(oCyclicTopic);
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
            LOG4CXX_WARN(logger, "ArmLanguage: can't create talker, unknown arm topic " << std::to_string(topic));                                      
            bret = false;                   
    }    
    return bret;
}

}