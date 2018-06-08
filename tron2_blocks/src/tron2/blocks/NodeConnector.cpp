/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/blocks/NodeConnector.h"

namespace tron2
{
NodeConnector::NodeConnector()
{          
    pNodeBus = 0; 
    pNodeData = 0; 
    bconnected = false;
}

//NodeConnector::~NodeConnector ()
//{
//}

void NodeConnector::connect(iNodeBus* pNodeBus, iNodeData* pNodeData)
{
    if (pNodeBus != nullptr)
        this->pNodeBus = pNodeBus;

    if (pNodeData != nullptr)
        this->pNodeData = pNodeData;

    // connected if at least node bus connected
    bconnected = (this->pNodeBus != nullptr);
}

}




