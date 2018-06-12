/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/RobotNetwork.h"

namespace tron2
{    
    
std::vector<int> RobotNetwork::getBodyChannels()
{
    std::vector<int> listChannels; 

    for (int i=0; i<RobotNetwork::eBODY_CHANNELS_DIM; i++)
        listChannels.push_back(i);
    
    return listChannels;
}

std::vector<int> RobotNetwork::getVisionChannels()
{
    std::vector<int> listChannels; 

    for (int i=0; i<RobotNetwork::eVISION_CHANNELS_DIM; i++)
        listChannels.push_back(i);
    
    return listChannels;
}

}