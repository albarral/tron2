/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/TalkyLanguages.h"
// nodes and topics
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/ArmTopics.h"
#include "tron2/robot/topics/BodyTopics.h"
// common talkers
#include "tron2/talky/BasicTalker.h"
// arm talkers
#include "tron2/talky/arm/JointTalker.h"
#include "tron2/talky/arm/AxisTalker.h"
#include "tron2/talky/arm/CyclicTalker.h"
// body talkers
#include "tron2/talky/body/ExpressiveTalker.h"
#include "tron2/talky/body/ArtisticTalker.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr TalkyLanguages::logger(Logger::getLogger("tron.talky2"));

Talker* TalkyLanguages::createTalker(int node, int topic)
{
    switch (node)
    {
        case RobotNodes::eNODE_ARM:
            return createTalker4ArmTopic(topic);
            break;

        case RobotNodes::eNODE_BODYROLE:
            return createTalker4BodyTopic(topic);
            break;

        default:
            LOG4CXX_WARN(logger, "TalkyLanguages: can't create talker, unknown node " << std::to_string(node));                                      
            return 0;
    }
}

Talker* TalkyLanguages::createTalker4ArmTopic(int topic)
{
    // create proper talker for arm node topic
    switch (topic)
    {
        case ArmTopics::eARM_JOINT: 
            return new JointTalker();
            break;
            
        case ArmTopics::eARM_AXIS: 
            return new AxisTalker();
            break;
            
        case ArmTopics::eARM_CYCLIC: 
            return new CyclicTalker();
            break;
            
        case ArmTopics::eARM_EXTRA: 
            return new BasicTalker(RobotNodes::eNODE_ARM, ArmTopics::eARM_EXTRA);
            break;
            
        default:
            LOG4CXX_WARN(logger, "TalkyLanguages: can't create talker, unknown arm topic " << std::to_string(topic));                                      
            return 0;
    }    
}

Talker* TalkyLanguages::createTalker4BodyTopic(int topic)
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