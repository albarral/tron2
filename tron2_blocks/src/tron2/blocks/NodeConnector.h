#ifndef __TRON2_BLOCKS_NODE_CONNECTOR_H
#define __TRON2_BLOCKS_NODE_CONNECTOR_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/blocks/iNodeBus.h"
#include "tron2/blocks/iNodeData.h"

namespace tron2
{
// This is a base class for all node actors. It holds the connection to the node bus and access to the shared node data.
class NodeConnector
{
protected:
    iNodeBus* pNodeBus;    // access to node bus
    iNodeData* pNodeData;    // access to shared node data
    bool bconnected;        // flag indicating connection no node bus & data 

public:
    NodeConnector();
    //~NodeConnector();
        
    // set connection to bus & data
    void connect(iNodeBus* pNodeBus, iNodeData* pNodeData);    
    bool isConnected() {return bconnected;};
};

}  

#endif
