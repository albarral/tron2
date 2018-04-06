/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/BasicTalker.h"

namespace tron2
{

BasicTalker::BasicTalker(int node, int topic) : Talker(node, topic)
{
    // complete name with topic word
    completeName();
    
    // build talker knowledge
    buildKnowledge();    
}

void BasicTalker::completeName()
{
    name += "basic";
}

void BasicTalker::buildKnowledge()
{
    addConcept(eBASIC_FULL_STOP, BASIC_FULL_STOP);
    addConcept(eBASIC_CONTROL_END, BASIC_CONTROL_END);                      
}
}