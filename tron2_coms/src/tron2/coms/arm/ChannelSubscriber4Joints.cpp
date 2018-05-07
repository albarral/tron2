/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/arm/ChannelSubscriber4Joints.h"
#include "tron2/robot/RobotNetwork.h"
#include "tron2/robot/RobotSystem.h"
#include "tron2/robot/arm/ArmNode.h"
#include "tron2/robot/arm/JointTopic.h"

using namespace log4cxx;

namespace tron2
{
ChannelSubscriber4Joints::ChannelSubscriber4Joints()
{    
    ChannelSubscriber::connect2Channel(RobotSystem::eNODE_ARM, RobotNetwork::eARM_JOINTS_CHANNEL, ArmNode::eARM_JOINT);    
}

void ChannelSubscriber4Joints::processData()
{    
    int code;
    float value;
    
    if (btuned)    
    {        
        // process received messages
        for (std::string message : listMessages)
        {
            LOG4CXX_TRACE(logger, "ChannelSubscriber4Joints: check msg " << message);
            // if message interpreted, inform joints data
            if (oTalker.interpretMessage(message, code, value))
            {
                switch (code)
                {
                    case JointTopic::eJOINT_HS_POS:
                        jointPositions.hs = value;
                        break;

                    case JointTopic::eJOINT_VS_POS:
                        jointPositions.vs = value;
                        break;

                    case JointTopic::eJOINT_ELB_POS:
                        jointPositions.elb = value;
                        break;

                    case JointTopic::eJOINT_HWRI_POS:
                        jointPositions.hwri = value;
                        break;

                    case JointTopic::eJOINT_VWRI_POS:
                        jointPositions.vwri = value;
                        break;
                }    
            }
            else
            {
                LOG4CXX_WARN(logger, "ChannelSubscriber4Joints: joint position not interpreted");
            }
        }
    }
    else
    {
        LOG4CXX_ERROR(logger, "ChannelSubscriber4Joints: can't process data, communicator not tuned");
        return;
    }        
}

}