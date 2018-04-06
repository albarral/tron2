#ifndef __TRON2_ROBOT_ARMSENSORS_H
#define __TRON2_ROBOT_ARMSENSORS_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

namespace tron2
{
// Definition of arm sensor structures
    
struct JointsData
{
    float hs; 
    float vs; 
    float elb; 
    float hwri; 
    float vwri;   
};

struct AxesData
{
    float pan; 
    float tilt; 
    float radial; 
};

}
#endif
