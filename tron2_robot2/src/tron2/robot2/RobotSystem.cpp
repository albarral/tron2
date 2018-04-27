/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/RobotSystem.h"

namespace tron2
{    
// node names
const std::string RobotSystem::ARM_NODE = "arm";    
const std::string RobotSystem::HAND_NODE = "hand";    
const std::string RobotSystem::VISION_NODE = "vision";    
const std::string RobotSystem::HEAD_NODE = "head";    
const std::string RobotSystem::WHEELS_NODE = "wheels";     
const std::string RobotSystem::BODYROLE_NODE = "body";     

RobotSystem::RobotSystem(int id, std::string name)
{
    this->ID = id;
    this->name = name;
}

std::string RobotSystem::getName4Node(int node)
{
    std::string tname;
    if (tron::CodeMap::getName4Code(node, tname))
        return tname;
    // return empty name if unknown node code
    else
        return ""; 
}

int RobotSystem::getCode4Node(std::string nodeName)
{
    int code;
    if (tron::CodeMap::getCode4Name(nodeName, code))
        return code;
    // return -1 if unknown node name
    else 
        return -1;
}

std::string RobotSystem::toString()
{
    return "RobotSystem: " + name + ", nodes:\n" + tron::CodeMap::toString();
}

}