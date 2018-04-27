/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/body/BodyNode.h"
#include "tron2/robot2/RobotSystem.h"

namespace tron2
{    
const std::string BodyNode::BODY_COMFORTABLE = "comfort";
const std::string BodyNode::BODY_EXPRESSIVE = "express";
const std::string BodyNode::BODY_ARTISTIC = "art";
const std::string BodyNode::BODY_EXTRA = "extra";    

BodyNode::BodyNode() : Node(RobotSystem::eNODE_BODYROLE, RobotSystem::BODYROLE_NODE)
{
    fillTopics();
}

void BodyNode::fillTopics()
{
    // build topics map
    //addCode(eBODY_COMFORTABLE, BODY_COMFORTABLE);  // uncontrollable behaviour
    addCode(eBODY_EXPRESSIVE, BODY_EXPRESSIVE);
    addCode(eBODY_ARTISTIC, BODY_ARTISTIC);
    addCode(eBODY_EXTRA, BODY_EXTRA);
}

}