/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/body/ArtisticTalker.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/BodyTopics.h"

namespace tron2
{

ArtisticTalker::ArtisticTalker() : Talker(RobotNodes::eNODE_BODYROLE, BodyTopics::eBODY_ARTISTIC)
{
    // complete name with topic word
    completeName();
    
    // build talker knowledge
    buildKnowledge();    
}

void ArtisticTalker::completeName()
{
    BodyTopics oBodyTopics;
    name += oBodyTopics.getName4Topic(topic);    
}

void ArtisticTalker::buildKnowledge()
{
    addConcept(eARTISTIC_FIGURE, ARTISTIC_FIGURE);                        
    addConcept(eARTISTIC_FREQ, ARTISTIC_FREQ);                        
    addConcept(eARTISTIC_SIZE, ARTISTIC_SIZE);                        
    addConcept(eARTISTIC_ORIENTATION, ARTISTIC_ORIENTATION);                        
    addConcept(eARTISTIC_RELFACTOR, ARTISTIC_RELFACTOR);                        
    addConcept(eARTISTIC_HALT, ARTISTIC_HALT);                        
}
}