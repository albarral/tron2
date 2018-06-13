#ifndef __TRON2_DADY_ROBOTCHANNELS_H
#define __TRON2_DADY_ROBOTCHANNELS_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include "tron/util/CodeMap.h"
#include "tron2/robot/Topic.h"

namespace tron2
{
// A RobotChannels is a code map of topics.
 class RobotChannels
{    
 private:
    tron::CodeMap oMapChannels4Arm;     
    tron::CodeMap oMapChannels4Body;     
    tron::CodeMap oMapChannels4Vision;     
     
 public:     
     RobotChannels();
         
    tron::CodeMap* getMapChannels4Node(int node);     
    void fillMapChannels4Node(int node);
    
    Topic* getTopic4NodeChannel(int node, int channel);    
};
}
#endif
