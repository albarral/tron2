#ifndef __TRON2_BLOCKS_BROOKS_SENSOR_H
#define __TRON2_BLOCKS_BROOKS_SENSOR_H

/***************************************************************************
 *   Copyright (C) 2014 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <mutex>

namespace tron2 
{
// This class implements a Brooks sensor for transmission of boolean info.
// Thread safety implemented.
class Sensor 
{
    private:
        std::mutex mutex;
        bool value; 

    public:
        Sensor();
        //~Sensor();
                        
        // Sets the sensor info
        void setValue(bool val);         
        // Gets the sensor info
        bool getValue();
};
}    
#endif
