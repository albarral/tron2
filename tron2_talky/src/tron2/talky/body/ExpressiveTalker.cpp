/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/body/ExpressiveTalker.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/BodyTopics.h"

namespace tron2
{
ExpressiveTalker::ExpressiveTalker() : Talker(RobotNodes::eNODE_BODYROLE, BodyTopics::eBODY_EXPRESSIVE)
{
    // complete name with topic word
    completeName();
    
    // build talker knowledge
    buildKnowledge();    
}

void ExpressiveTalker::completeName()
{
    BodyTopics oBodyTopics;
    name += oBodyTopics.getName4Topic(topic);    
}

void ExpressiveTalker::buildKnowledge()
{
    addConcept(eEXPRESS_FEELING, EXPRESS_FEELING);                        
    addConcept(eEXPRESS_HALT, EXPRESS_HALT);                        
}
}