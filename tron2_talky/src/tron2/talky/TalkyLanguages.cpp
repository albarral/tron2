/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/TalkyLanguages.h"
// nodes and topics
#include "tron2/robot2/RobotSystem.h"
#include "tron2/talky/arm/ArmLanguage.h"
#include "tron2/talky/body/BodyLanguage.h"
#include "tron2/talky/vision/VisionLanguage.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr TalkyLanguages::logger(Logger::getLogger("tron.talky2"));

Talker* TalkyLanguages::createTalker(int node, int topic)
{
    switch (node)
    {
        case RobotSystem::eNODE_ARM:
            return ArmLanguage::createTalker4Topic(topic);
            break;

        case RobotSystem::eNODE_BODYROLE:
            return BodyLanguage::createTalker4Topic(topic);
            break;

        case RobotSystem::eNODE_VISION:
            return VisionLanguage::createTalker4Topic(topic);
            break;

        default:
            LOG4CXX_WARN(logger, "TalkyLanguages: can't create talker, unknown node " << std::to_string(node));                                      
            return 0;
    }
}
}