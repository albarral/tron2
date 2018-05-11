/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/body/ExpressiveTopic.h"
#include "tron2/robot/body/BodyNode.h"

namespace tron2
{
ExpressiveTopic::ExpressiveTopic() : Topic(BodyNode::eBODY_EXPRESSIVE, BodyNode::BODY_EXPRESSIVE)
{
    fillConcepts();    
}

void ExpressiveTopic::fillConcepts()
{
    addCode(eEXPRESS_FEELING, EXPRESS_FEELING);                        
    addCode(eEXPRESS_HALT, EXPRESS_HALT);                        
}
}