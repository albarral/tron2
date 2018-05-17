/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/talker/TalkerLanguage.h"
#include "tron2/robot/RobotSystem.h"
// arm topics
#include "tron2/robot/arm/ArmNode.h"
#include "tron2/robot/arm/JointTopic.h"
#include "tron2/robot/arm/AxisTopic.h"
#include "tron2/robot/arm/CyclicTopic.h"
// body topics
#include "tron2/robot/body/BodyNode.h"
#include "tron2/robot/body/ExpressiveTopic.h"
#include "tron2/robot/body/ArtisticTopic.h"
// vision topics
#include "tron2/robot/vision/VisionNode.h"
#include "tron2/robot/vision/FocusTopic.h"
// common topics
#include "tron2/robot/common/ExtraTopic.h"


using namespace log4cxx;

namespace tron2
{
LoggerPtr TalkerLanguage::logger(Logger::getLogger("tron.coms"));

bool TalkerLanguage::setLanguage4Talker(ChannelTalker& oTalker, int node, int topic)
{
    bool bret;
    switch (node)
    {
        case RobotSystem::eNODE_ARM:
            bret = tuneTalker4ArmTopic(oTalker, topic);
            break;

        case RobotSystem::eNODE_BODYROLE:
            bret = tuneTalker4BodyTopic(oTalker, topic);
            break;

        case RobotSystem::eNODE_VISION:
            bret = tuneTalker4VisionTopic(oTalker, topic);
            break;

        default:
            LOG4CXX_WARN(logger, "TalkerLanguage: can't tune talker, unknown node " << std::to_string(node));                                      
            bret = false;                   
    }
    return bret;
}

bool TalkerLanguage::tuneTalker4ArmTopic(ChannelTalker& oTalker, int topic)
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
            LOG4CXX_WARN(logger, "TalkerLanguage: can't tune talker, unknown arm topic " << std::to_string(topic));                                      
            bret = false;                   
    }    
    return bret;
}

bool TalkerLanguage::tuneTalker4BodyTopic(ChannelTalker& oTalker, int topic)
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
            LOG4CXX_WARN(logger, "TalkerLanguage: can't tune talker, unknown body topic " << std::to_string(topic));                                      
            bret = false;                   
    }    
    return bret;
}

bool TalkerLanguage::tuneTalker4VisionTopic(ChannelTalker& oTalker, int topic)
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
            LOG4CXX_WARN(logger, "TalkerLanguage: can't tune talker, unknown vision topic " << std::to_string(topic));                                      
            bret = false;                   
    }    
    return bret;
}

}