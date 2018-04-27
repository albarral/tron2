/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/arm/CyclicTopic.h"
#include "tron2/robot2/arm/ArmNode.h"

namespace tron2
{

CyclicTopic::CyclicTopic() : Topic(ArmNode::eARM_CYCLER, ArmNode::ARM_CYCLER)
{
    fillConcepts();    
}

void CyclicTopic::fillConcepts()
{
    addCode(eCYCLER_MAIN_FREQ, CYCLER_MAIN_FREQ);
    addCode(eCYCLER_MAIN_AMP, CYCLER_MAIN_AMP);                         
    addCode(eCYCLER_MAIN_ANGLE, CYCLER_MAIN_ANGLE);                      
    addCode(eCYCLER_MAIN_PHASE, CYCLER_MAIN_PHASE);                   
    addCode(eCYCLER_SEC_FREQ, CYCLER_SEC_FREQ);
    addCode(eCYCLER_SEC_AMP, CYCLER_SEC_AMP);                         
    addCode(eCYCLER_SEC_ANGLE, CYCLER_SEC_ANGLE);                      
    addCode(eCYCLER_SEC_PHASE, CYCLER_SEC_PHASE);                   
    addCode(eCYCLER_ACTION, CYCLER_ACTION);                        
}
}