/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include "aux/JointChannelServer.h"
#include "amy/interface/ArmNode.h"
#include "amy/interface/topics/JointTopic.h"
#include "tron2/robot/RobotSystem.h"

using namespace log4cxx;

namespace tron2
{
JointChannelServer::JointChannelServer()
{    
    int channel = amy::ArmNode::eARM_JOINTS_CHANNEL;
    tron2::ChannelServer::connect2Channel(RobotSystem::eNODE_ARM, channel, amy::ArmNode::getTopic4Channel(channel));
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
            if (oTalker.interpretMessage(message, code, value))
            {
                switch (code)
                {
                    case amy::JointTopic::eJOINT_HS_POS:
                        LOG4CXX_INFO(logger, "JointChannelServer: command < hs " << std::to_string(value));
                        break;

                    case amy::JointTopic::eJOINT_VS_POS:
                        LOG4CXX_INFO(logger, "JointChannelServer: command < vs " << std::to_string(value));
                        break;

                    case amy::JointTopic::eJOINT_ELB_POS:
                        LOG4CXX_INFO(logger, "JointChannelServer: command < elb " << std::to_string(value));
                        break;

                    case amy::JointTopic::eJOINT_HWRI_POS:
                        LOG4CXX_INFO(logger, "JointChannelServer: command < hwri " << std::to_string(value));
                        break;

                    case amy::JointTopic::eJOINT_VWRI_POS:
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