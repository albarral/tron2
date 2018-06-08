#ifndef __TRON2_BLOCKS_BROOKS_CONTROL1_H
#define __TRON2_BLOCKS_BROOKS_CONTROL1_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <mutex>
#include "tron2/blocks/brooks/control.h"

namespace tron2 
{
// This class implements a Brooks control connector for transmission of boolean commands.
// It extends from base Control class.
// Thread safety implemented.
class Control1 : public Control
{
    private:
        bool value;
        std::mutex mutex2;

    public:
        Control1();
        //~Control1();
        
        // Requests the execution of the control command with an input parameter and a given priority
        // returns true if the request is accepted
        bool request (bool val, int vpriority = 0);
                        
        // just gets the last requested value
        bool getValue();
};
}    
#endif
