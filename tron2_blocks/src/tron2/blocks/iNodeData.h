#ifndef _TRON2_BLOCKS_NODEDATA_H
#define _TRON2_BLOCKS_NODEDATA_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

namespace tron2
{
// Interface for node data classes: shared data among node modules
class iNodeData
{
public:    
    // describe data elements and their values
    virtual std::string showNodeData() = 0;
};

}  

#endif
