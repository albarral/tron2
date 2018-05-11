/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/TalkyLanguages.h"
// nodes and topics
#include "tron2/robot/RobotSystem.h"
#include "tron2/talky/arm/ArmLanguage.h"
#include "tron2/talky/body/BodyLanguage.h"
#include "tron2/talky/vision/VisionLanguage.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr TalkyLanguages::logger(Logger::getLogger("tron.talky2"));

bool TalkyLanguages::setLanguage4Talker(Talker& oTalker, int node, int topic)
{
    bool bret;
    switch (node)
    {
        case RobotSystem::eNODE_ARM:
            bret = ArmLanguage::tuneTalker4Topic(oTalker, topic);
            break;

        case RobotSystem::eNODE_BODYROLE:
            bret = BodyLanguage::tuneTalker4Topic(oTalker, topic);
            break;

        case RobotSystem::eNODE_VISION:
            bret = VisionLanguage::tuneTalker4Topic(oTalker, topic);
            break;

        default:
            LOG4CXX_WARN(logger, "TalkyLanguages: can't create talker, unknown node " << std::to_string(node));                                      
            bret = false;                   
    }
    return bret;
}

}