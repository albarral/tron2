/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "dady/RobotChannels.h"
#include "amy/interface/ArmNode.h"
#include "tron2/robot/Node.h"   // to delete
#include "tron2/robot/RobotNetwork.h"   // to delete
#include "tron2/robot/RobotSystem.h"
#include "tron2/robot/body/BodyNode.h"
#include "tron2/robot/vision/VisionNode.h"

namespace tron2
{    
RobotChannels::RobotChannels()
{
}

tron::CodeMap* RobotChannels::getMapChannels4Node(int node)
{
    switch (node)
    {
        case RobotSystem::eNODE_ARM: 
            return &oMapChannels4Arm;
            break;
        case RobotSystem::eNODE_BODYROLE: 
            return &oMapChannels4Body;
            break;
        case RobotSystem::eNODE_VISION: 
            return &oMapChannels4Vision;
        break;
        default: 
            return 0;
    }    
}

void RobotChannels::fillMapChannels4Node(int node)
{
    switch (node)
    {
        case RobotSystem::eNODE_ARM: 
        {
            oMapChannels4Arm.reset();
            oMapChannels4Arm.addCode(amy::ArmNode::eARM_JOINTS_CHANNEL, "joints");
            oMapChannels4Arm.addCode(amy::ArmNode::eARM_AXES_CHANNEL, "axes");
            oMapChannels4Arm.addCode(amy::ArmNode::eARM_CYCLER1_CHANNEL, "cycler1");
            oMapChannels4Arm.addCode(amy::ArmNode::eARM_CYCLER2_CHANNEL, "cycler2");
            oMapChannels4Arm.addCode(amy::ArmNode::eARM_EXTRA_CHANNEL, "extra");
            break;
        }
        case RobotSystem::eNODE_BODYROLE: 
        {
            oMapChannels4Body.reset();
            oMapChannels4Body.addCode(RobotNetwork::eBODY_EXPRESSIVE_CHANNEL, "express");
            oMapChannels4Body.addCode(RobotNetwork::eBODY_ARTISTIC1_CHANNEL, "art1");
            oMapChannels4Body.addCode(RobotNetwork::eBODY_ARTISTIC2_CHANNEL, "art2");
            oMapChannels4Body.addCode(RobotNetwork::eBODY_EXTRA_CHANNEL, "extra");
            break;
        }
        case RobotSystem::eNODE_VISION: 
        {
            oMapChannels4Vision.reset();
            oMapChannels4Vision.addCode(RobotNetwork::eVISION_FOCUS_CHANNEL, "focus");
            oMapChannels4Vision.addCode(RobotNetwork::eVISION_EXTRA_CHANNEL, "extra");
        }
        break;
    }
}

Topic* RobotChannels::getTopic4NodeChannel(int node, int channel)
{
    switch (node)
    {
        case RobotSystem::eNODE_ARM: 
            return amy::ArmNode::getTopic4Channel(channel);
            break;
        case RobotSystem::eNODE_BODYROLE: 
            return nullptr; // getTopic4BodyChannel(channel);
            break;
        case RobotSystem::eNODE_VISION: 
            return nullptr; //getTopic4VisionChannel(channel);
        break;
        default: 
            return nullptr;
    }    
}

int RobotChannels::getTopic4BodyChannel(int channel)
{
    switch (channel)
    {
        case RobotNetwork::eBODY_EXPRESSIVE_CHANNEL: 
            return BodyNode::eBODY_EXPRESSIVE;
            break;
        case RobotNetwork::eBODY_ARTISTIC1_CHANNEL: 
            return BodyNode::eBODY_ARTISTIC;
            break;
        case RobotNetwork::eBODY_ARTISTIC2_CHANNEL: 
            return BodyNode::eBODY_ARTISTIC;
            break;
        case RobotNetwork::eBODY_EXTRA_CHANNEL: 
            return Node::eEXTRA_TOPIC;
            break;
        default: 
            return -1;            
    }    
}

int RobotChannels::getTopic4VisionChannel(int channel)
{
    switch (channel)
    {
        case RobotNetwork::eVISION_FOCUS_CHANNEL: 
            return VisionNode::eVISION_FOCUS;
            break;
        case RobotNetwork::eVISION_EXTRA_CHANNEL: 
            return Node::eEXTRA_TOPIC;
            break;
        default: 
            return -1;            
    }    
}

}