#ifndef __TRON2_BLOCKS_BEHAVIOUR_H
#define __TRON2_BLOCKS_BEHAVIOUR_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <mutex>

#include "tron2/blocks/Module.h"
#include "tron2/blocks/NodeConnector.h"

namespace tron2
{
// Base class for node behaviours. They are permanent modules connected to the node bus and sharing the node data.
class Behaviour : public Module, NodeConnector
{
private:
        std::mutex mutex2;
        bool binhibited;        // flag indicating present inhibition of the module
        int level;                  // hierarchical level in the control architecture

public:
        Behaviour();
        //~Behaviour();
                                
        // level info (no need to protect for thread safety)
        void setLevel(int value) {level = value;};
        int getLevel() {return level;};
        
protected:
        bool isInhibited();
        void inhibit(bool value);
};
}    
#endif
