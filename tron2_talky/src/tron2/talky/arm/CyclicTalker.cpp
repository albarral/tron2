/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/arm/CyclicTalker.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/ArmTopics.h"

namespace tron2
{

CyclicTalker::CyclicTalker() : Talker(RobotNodes::eNODE_ARM, ArmTopics::eARM_CYCLIC)
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
    // FRONTAL CYCLER
    addConcept(eCYCLIC_FRONT1_FREQ, CYCLIC_FRONT1_FREQ);
    addConcept(eCYCLIC_FRONT1_AMP, CYCLIC_FRONT1_AMP);                         
    addConcept(eCYCLIC_FRONT1_ANGLE, CYCLIC_FRONT1_ANGLE);                      
    addConcept(eCYCLIC_FRONT1_PHASE, CYCLIC_FRONT1_PHASE);                   
    addConcept(eCYCLIC_FRONT2_FREQ, CYCLIC_FRONT2_FREQ);
    addConcept(eCYCLIC_FRONT2_AMP, CYCLIC_FRONT2_AMP);                         
    addConcept(eCYCLIC_FRONT2_ANGLE, CYCLIC_FRONT2_ANGLE);                      
    addConcept(eCYCLIC_FRONT2_PHASE, CYCLIC_FRONT2_PHASE);                   
    addConcept(eCYCLIC_FRONT_ACTION, CYCLIC_FRONT_ACTION);                        
}
}