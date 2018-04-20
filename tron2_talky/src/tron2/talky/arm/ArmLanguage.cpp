/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/arm/ArmLanguage.h"
#include "tron2/talky/arm/JointTalker.h"
#include "tron2/talky/arm/AxisTalker.h"
#include "tron2/talky/arm/CyclicTalker.h"
#include "tron2/talky/BasicTalker.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/ArmTopics.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr ArmLanguage::logger(Logger::getLogger("tron.talky2"));

Talker* ArmLanguage::createTalker4Topic(int topic)
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
            
        case ArmTopics::eARM_CYCLER1: 
        case ArmTopics::eARM_CYCLER2: 
            return new CyclicTalker();
            break;
            
        case ArmTopics::eARM_EXTRA: 
            return new BasicTalker(RobotNodes::eNODE_ARM, ArmTopics::eARM_EXTRA);
            break;
            
        default:
            LOG4CXX_WARN(logger, "ArmLanguage: can't create talker, unknown arm topic " << std::to_string(topic));                                      
            return 0;
    }    
}

}