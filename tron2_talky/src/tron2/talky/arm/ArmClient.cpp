/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/arm/ArmClient.h"
#include "tron2/talky/arm/JointTalker.h"
#include "tron2/talky/arm/AxisTalker.h"
#include "tron2/talky/arm/CyclicTalker.h"
#include "tron2/talky/BasicTalker.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/ArmTopics.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr ArmClient::logger(Logger::getLogger("tron.talky2"));

ArmClient::ArmClient()
{    
    int node = RobotNodes::eNODE_ARM;
    oJointChannelClient.tune4NodeAndTopic(node, ArmTopics::eARM_JOINT);
    oAxisChannelClient.tune4NodeAndTopic(node, ArmTopics::eARM_AXIS);
    oCycler1ChannelClient.tune4NodeAndTopic(node, ArmTopics::eARM_CYCLER1);
    oCycler2ChannelClient.tune4NodeAndTopic(node, ArmTopics::eARM_CYCLER2);
    oExtraChannelClient.tune4NodeAndTopic(node, ArmTopics::eARM_EXTRA);
}

ArmClient::~ArmClient()
{    
}

// JOINT TOPIC ...

bool ArmClient::setHS(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set HS > " << std::to_string(value));
    return oJointChannelClient.sendMessage(JointTalker::eJOINT_HS_POS, value);
}

bool ArmClient::setVS(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set VS > " << std::to_string(value));
    return oJointChannelClient.sendMessage(JointTalker::eJOINT_VS_POS, value);
}

bool ArmClient::setELB(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set ELB > " << std::to_string(value));
    return oJointChannelClient.sendMessage(JointTalker::eJOINT_ELB_POS, value);
}

bool ArmClient::setHWRI(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set HWRI > " << std::to_string(value));
    return oJointChannelClient.sendMessage(JointTalker::eJOINT_HWRI_POS, value);
}

bool ArmClient::setVWRI(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set VWRI > " << std::to_string(value));
    return oJointChannelClient.sendMessage(JointTalker::eJOINT_VWRI_POS, value);
}

// AXIS TOPIC ...

bool ArmClient::setPan(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set pan > " << std::to_string(value));
     return oAxisChannelClient.sendMessage(AxisTalker::eAXIS_PAN_POS, value);
}

bool ArmClient::setTilt(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set tilt > " << std::to_string(value));
     return oAxisChannelClient.sendMessage(AxisTalker::eAXIS_TILT_POS, value);
}

bool ArmClient::setRadial(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set radius > " << std::to_string(value));
     return oAxisChannelClient.sendMessage(AxisTalker::eAXIS_RAD_POS, value);
}

bool ArmClient::setPanSpeed(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set pan speed > " << std::to_string(value));
     return oAxisChannelClient.sendMessage(AxisTalker::eAXIS_PAN_SPEED, value);
}

bool ArmClient::setTiltSpeed(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set tilt speed > " << std::to_string(value));
     return oAxisChannelClient.sendMessage(AxisTalker::eAXIS_TILT_SPEED, value);
}

bool ArmClient::setRadialSpeed(float value)
{    
    LOG4CXX_DEBUG(logger, "ArmClient: set radial speed > " << std::to_string(value));
     return oAxisChannelClient.sendMessage(AxisTalker::eAXIS_RAD_SPEED, value);
}

bool ArmClient::keepTilt()
{
    LOG4CXX_DEBUG(logger, "ArmClient: keep tilt > ");     
    return oAxisChannelClient.sendMessage(AxisTalker::eAXIS_KEEP_TILT, 0.0);        
}

// CYCLER1 TOPIC ...

bool ArmClient::setCycler1MainAmp(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler1 amp1 > " << std::to_string(value));     
    return oCycler1ChannelClient.sendMessage(CyclicTalker::eCYCLER_MAIN_AMP, value);    
}

bool ArmClient::setCycler1MainAngle(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler1 angle1 > " << std::to_string(value));     
    return oCycler1ChannelClient.sendMessage(CyclicTalker::eCYCLER_MAIN_ANGLE, value);    
}

bool ArmClient::setCycler1MainFreq(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler1 freq1 > " << std::to_string(value));     
    return oCycler1ChannelClient.sendMessage(CyclicTalker::eCYCLER_MAIN_FREQ, value);    
}

bool ArmClient::setCycler1MainPhase(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler1 phase1 > " << std::to_string(value));     
    return oCycler1ChannelClient.sendMessage(CyclicTalker::eCYCLER_MAIN_PHASE, value);    
}

bool ArmClient::setCycler1SecAmp(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler1 amp2 > " << std::to_string(value));     
    return oCycler1ChannelClient.sendMessage(CyclicTalker::eCYCLER_SEC_AMP, value);    
}

bool ArmClient::setCycler1SecAngle(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler1 angle2 > " << std::to_string(value));     
    return oCycler1ChannelClient.sendMessage(CyclicTalker::eCYCLER_SEC_ANGLE, value);    
}

bool ArmClient::setCycler1SecFreq(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler1 freq2 > " << std::to_string(value));     
    return oCycler1ChannelClient.sendMessage(CyclicTalker::eCYCLER_SEC_FREQ, value);    
}

bool ArmClient::setCycler1SecPhase(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler1 phase2 > " << std::to_string(value));     
    return oCycler1ChannelClient.sendMessage(CyclicTalker::eCYCLER_SEC_PHASE, value);    
}

bool ArmClient::setCycler1Action(int value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: cycler1 action > " << std::to_string(value));     
    return oCycler1ChannelClient.sendMessage(CyclicTalker::eCYCLER_ACTION, (float)value);        
}

// CYCLER2 TOPIC ...

bool ArmClient::setCycler2MainAmp(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler2 amp1 > " << std::to_string(value));     
    return oCycler2ChannelClient.sendMessage(CyclicTalker::eCYCLER_MAIN_AMP, value);    
}

bool ArmClient::setCycler2MainAngle(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler2 angle1 > " << std::to_string(value));     
    return oCycler2ChannelClient.sendMessage(CyclicTalker::eCYCLER_MAIN_ANGLE, value);    
}

bool ArmClient::setCycler2MainFreq(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler2 freq1 > " << std::to_string(value));     
    return oCycler2ChannelClient.sendMessage(CyclicTalker::eCYCLER_MAIN_FREQ, value);    
}

bool ArmClient::setCycler2MainPhase(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler2 phase1 > " << std::to_string(value));     
    return oCycler2ChannelClient.sendMessage(CyclicTalker::eCYCLER_MAIN_PHASE, value);    
}

bool ArmClient::setCycler2SecAmp(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler2 amp2 > " << std::to_string(value));     
    return oCycler2ChannelClient.sendMessage(CyclicTalker::eCYCLER_SEC_AMP, value);    
}

bool ArmClient::setCycler2SecAngle(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler2 angle2 > " << std::to_string(value));     
    return oCycler2ChannelClient.sendMessage(CyclicTalker::eCYCLER_SEC_ANGLE, value);    
}

bool ArmClient::setCycler2SecFreq(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler2 freq2 > " << std::to_string(value));     
    return oCycler2ChannelClient.sendMessage(CyclicTalker::eCYCLER_SEC_FREQ, value);    
}

bool ArmClient::setCycler2SecPhase(float value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: set cycler2 phase2 > " << std::to_string(value));     
    return oCycler2ChannelClient.sendMessage(CyclicTalker::eCYCLER_SEC_PHASE, value);    
}

bool ArmClient::setCycler2Action(int value)
{
    LOG4CXX_DEBUG(logger, "ArmClient: cycler2 action > " << std::to_string(value));     
    return oCycler2ChannelClient.sendMessage(CyclicTalker::eCYCLER_ACTION, (float)value);        
}

// EXTRA TOPIC ...

bool ArmClient::fullStop()
{
    LOG4CXX_DEBUG(logger, "ArmClient: full stop > ");     
    return oExtraChannelClient.sendMessage(BasicTalker::eBASIC_FULL_STOP, 0.0);        
}

bool ArmClient::endNode()
{
    LOG4CXX_DEBUG(logger, "ArmClient: end arm > ");     
    return oExtraChannelClient.sendMessage(BasicTalker::eBASIC_CONTROL_END, 0.0);        
}
}