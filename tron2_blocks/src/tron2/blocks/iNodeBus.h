#ifndef _TRON2_BLOCKS_NODEBUS_H
#define _TRON2_BLOCKS_NODEBUS_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include "tron2/blocks/brooks/control.h"
#include "tron2/blocks/brooks/sensor.h"

namespace tron2
{
// Interface for node bus classes: shared connections among node modules
class iNodeBus
{
public:    
    // describe bus elements and their values
    virtual std::string showBusData() = 0;
};

}  

#endif
