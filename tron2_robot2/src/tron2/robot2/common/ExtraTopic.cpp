/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/common/ExtraTopic.h"
#include "tron2/robot2/Node.h"

namespace tron2
{

ExtraTopic::ExtraTopic() : Topic(Node::eEXTRA_TOPIC, Node::EXTRA_TOPIC)
{
    fillConcepts();    
}

void ExtraTopic::fillConcepts()
{
    addCode(eEXTRA_STOP, EXTRA_STOP);
    addCode(eEXTRA_END, EXTRA_END);                         
}
}