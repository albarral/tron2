#ifndef __TRON2_ROBOT_ROBOTNETWORK_H
#define __TRON2_ROBOT_ROBOTNETWORK_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <vector>

namespace tron2
{
// Defines the network of channels for the internal robot communication (between nodes).
 class RobotNetwork 
{    
 public:     
    /*! arm node channels */
    enum eArmChannels
    {
        eARM_JOINTS_CHANNEL,             /*! joints channel */
        eARM_AXES_CHANNEL,                /*! axes channel  */
        eARM_CYCLER1_CHANNEL,          /*! cycler 1 channel  */
        eARM_CYCLER2_CHANNEL,          /*! cycler 2 channel  */
        eARM_EXTRA_CHANNEL,              /*! extra channel  */
        eARM_CHANNELS_DIM
    };     

    /*! body node channels */
    enum eBodyTopics
    {
        eBODY_EXPRESSIVE_CHANNEL,      /*! expressive channel */
        eBODY_ARTISTIC1_CHANNEL,         /*! artistic 1 channel */
        eBODY_ARTISTIC2_CHANNEL,         /*! artistic 2 channel */
        eBODY_EXTRA_CHANNEL,              /*! extra channel  */
        eBODY_CHANNELS_DIM
    };
     
    /*! vision node channels */
    enum eVisionChannels
    {
        eVISION_FOCUS_CHANNEL,             /*! focus channel */
        eVISION_EXTRA_CHANNEL,              /*! extra channel  */
        eVISION_CHANNELS_DIM
    };

    
 public:     
     // RobotNetwork();
     
     // get list of arm node channels
     static std::vector<int> getArmChannels();
     // get list of body node channels
     static std::vector<int> getBodyChannels();
     // get list of vision node channels
     static std::vector<int> getVisionChannels();
};
}
#endif
