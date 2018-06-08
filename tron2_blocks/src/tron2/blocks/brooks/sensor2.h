#ifndef __TRON2_BLOCKS_BROOKS_SENSOR2_H
#define __TRON2_BLOCKS_BROOKS_SENSOR2_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <mutex>

namespace tron2 
{
// This class implements a Brooks sensor for transmission of integer info.
// Thread safety implemented.
class Sensor2 
{
    private:
        std::mutex mutex;
        int value; 

    public:
        Sensor2();
        //~Sensor2();
                        
        // Sets the sensor info
        void setValue(int val);         
        // Gets the sensor info
        int getValue();
};
}    
#endif
