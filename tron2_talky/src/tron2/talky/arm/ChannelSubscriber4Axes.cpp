/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/arm/ChannelSubscriber4Axes.h"
#include "tron2/talky/arm/AxisTalker.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/ArmTopics.h"

using namespace log4cxx;

namespace tron2
{
ChannelSubscriber4Axes::ChannelSubscriber4Axes()
{    
    ChannelSubscriber::tune4NodeAndTopic(RobotNodes::eNODE_ARM, ArmTopics::eARM_AXIS);
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
            if (pTalker->interpretMessage(message, code, value))
            {
                switch (code)
                {
                    case AxisTalker::eAXIS_PAN_POS:
                        axesPositions.pan = value;
                        break;

                    case AxisTalker::eAXIS_TILT_POS:
                        axesPositions.tilt = value;
                        break;

                    case AxisTalker::eAXIS_RAD_POS:
                        axesPositions.radial = value;
                        break;

                    case AxisTalker::eAXIS_PAN_SPEED:
                        axesSpeeds.pan = value;
                        break;

                    case AxisTalker::eAXIS_TILT_SPEED:
                        axesSpeeds.tilt = value;
                        break;

                    case AxisTalker::eAXIS_RAD_SPEED:
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