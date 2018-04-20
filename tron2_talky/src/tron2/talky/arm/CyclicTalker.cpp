/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/arm/CyclicTalker.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/ArmTopics.h"

namespace tron2
{

CyclicTalker::CyclicTalker() : Talker(RobotNodes::eNODE_ARM, ArmTopics::eARM_CYCLER1)
{
    // complete name with topic word
    completeName();
    
    // build talker knowledge
    buildKnowledge();    
}

void CyclicTalker::completeName()
{
    ArmTopics oArmTopic;
    name += oArmTopic.getName4Topic(topic);    
}

void CyclicTalker::buildKnowledge()
{
    addConcept(eCYCLER_MAIN_FREQ, CYCLER_MAIN_FREQ);
    addConcept(eCYCLER_MAIN_AMP, CYCLER_MAIN_AMP);                         
    addConcept(eCYCLER_MAIN_ANGLE, CYCLER_MAIN_ANGLE);                      
    addConcept(eCYCLER_MAIN_PHASE, CYCLER_MAIN_PHASE);                   
    addConcept(eCYCLER_SEC_FREQ, CYCLER_SEC_FREQ);
    addConcept(eCYCLER_SEC_AMP, CYCLER_SEC_AMP);                         
    addConcept(eCYCLER_SEC_ANGLE, CYCLER_SEC_ANGLE);                      
    addConcept(eCYCLER_SEC_PHASE, CYCLER_SEC_PHASE);                   
    addConcept(eCYCLER_ACTION, CYCLER_ACTION);                        
}
}