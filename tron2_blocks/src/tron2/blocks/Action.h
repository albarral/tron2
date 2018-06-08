#ifndef __TRON2_BLOCKS_ACTION_H
#define __TRON2_BLOCKS_ACTION_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/blocks/Module.h"
#include "tron2/blocks/NodeConnector.h"

namespace tron2
{
// Base class for node actions. They are temporal modules connected to the node bus and sharing the node data.
class Action : public Module, NodeConnector
{
public:
        Action();
        //~Action();
        
protected:
        // action auto finish
        void finish();
};
}    
#endif
