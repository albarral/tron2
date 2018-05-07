/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/arm/ChannelSubscriber4Axes.h"
#include "tron2/robot/RobotNetwork.h"
#include "tron2/robot/RobotSystem.h"
#include "tron2/robot/arm/ArmNode.h"
#include "tron2/robot/arm/AxisTopic.h"

using namespace log4cxx;

namespace tron2
{
ChannelSubscriber4Axes::ChannelSubscriber4Axes()
{    
    ChannelSubscriber::connect2Channel(RobotSystem::eNODE_ARM, RobotNetwork::eARM_AXES_CHANNEL, ArmNode::eARM_AXIS);
}

void ChannelSubscriber4Axes::processData()
{    
    int code;
    float value;
    
    if (btuned)    
    {        
        // process received messages
        for (std::string message : listMessages)
        {
            LOG4CXX_TRACE(logger, "ChannelSubscriber4Axes: check msg " << message);
            // if message interpreted, inform axes data
            if (oTalker.interpretMessage(message, code, value))
            {
                switch (code)
                {
                    case AxisTopic::eAXIS_PAN_POS:
                        axesPositions.pan = value;
                        break;

                    case AxisTopic::eAXIS_TILT_POS:
                        axesPositions.tilt = value;
                        break;

                    case AxisTopic::eAXIS_RAD_POS:
                        axesPositions.radial = value;
                        break;

                    case AxisTopic::eAXIS_PAN_SPEED:
                        axesSpeeds.pan = value;
                        break;

                    case AxisTopic::eAXIS_TILT_SPEED:
                        axesSpeeds.tilt = value;
                        break;

                    case AxisTopic::eAXIS_RAD_SPEED:
                        axesSpeeds.radial = value;
                        break;
                }    
            }
            else
            {
                LOG4CXX_WARN(logger, "ChannelSubscriber4Axes: axes concept not interpreted");
            }
        }
    }
    else
    {
        LOG4CXX_ERROR(logger, "ChannelSubscriber4Axes: can't process data, communicator not tuned");
        return;
    }        
}

}