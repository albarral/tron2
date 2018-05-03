/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include "aux/JointChannelServer.h"
#include "tron2/robot/RobotSystem.h"
#include "tron2/robot/arm/ArmNode.h"
#include "tron2/robot/arm/JointTopic.h"

using namespace log4cxx;

namespace tron2
{
JointChannelServer::JointChannelServer()
{    
    tron2::ChannelServer::tune4NodeAndTopic(RobotSystem::eNODE_ARM, ArmNode::eARM_JOINT);
}

//JointListener::~JointListener()
//{    
//}

void JointChannelServer::processCommands()
{    
    int code;
    float value;
    
    if (btuned)    
    {        
        // process received messages
        for (std::string message : listMessages)
        {
            LOG4CXX_TRACE(logger, "JointChannelServer: check msg " << message);
            // if message interpreted, inform joints data
            if (pTalker->interpretMessage(message, code, value))
            {
                switch (code)
                {
                    case JointTopic::eJOINT_HS_POS:
                        LOG4CXX_INFO(logger, "JointChannelServer: command < hs " << std::to_string(value));
                        break;

                    case JointTopic::eJOINT_VS_POS:
                        LOG4CXX_INFO(logger, "JointChannelServer: command < vs " << std::to_string(value));
                        break;

                    case JointTopic::eJOINT_ELB_POS:
                        LOG4CXX_INFO(logger, "JointChannelServer: command < elb " << std::to_string(value));
                        break;

                    case JointTopic::eJOINT_HWRI_POS:
                        LOG4CXX_INFO(logger, "JointChannelServer: command < hwri " << std::to_string(value));
                        break;

                    case JointTopic::eJOINT_VWRI_POS:
                        LOG4CXX_INFO(logger, "JointChannelServer: command < vwri " << std::to_string(value));
                        break;
                }    
            }
            else
            {
                LOG4CXX_WARN(logger, "JointChannelServer: joint command not interpreted");
            }
        }
    }
    else
    {
        LOG4CXX_ERROR(logger, "JointChannelServer: can't process data, communicator not tuned");
        return;
    }        
}

}