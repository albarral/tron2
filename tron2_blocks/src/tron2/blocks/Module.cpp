/***************************************************************************
 *   Copyright (C) 2015 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <unistd.h>

#include "tron2/blocks/Module.h"

namespace tron2
{
// Constructor
Module::Module ()
{    
    modName = "module3";
    bON = false;
    prevState = state = Module::state_UNKNOWN;
    stable = 0;
    boffRequested = false;
    setFrequency(0.1);  // low default frequency
}

void Module::on()
{
    // only launch thread if in OFF state
    if (!bON)
    {
      t = std::thread(&Module::run, this);              
    }           
}

void Module::off()
{        
    std::lock_guard<std::mutex> locker(mutex);
    boffRequested = true;
}

bool Module::offRequested()
{
    std::lock_guard<std::mutex> locker(mutex);
    if (boffRequested)
    {
        // reset flag when checked
        boffRequested = false;
        return true;
    }
    else
        return (false);        
}

void Module::wait()
{
    t.join();
}

bool Module::isOn()
{
    return bON;
}

void Module::setFrequency(float cps)
{
    std::lock_guard<std::mutex> locker(mutex);
    if (cps > 0.0)
    {
        period = 1000000/cps;    // in microseconds
        frequency = cps;
    }
}

float Module::getFrequency()
{
    std::lock_guard<std::mutex> locker(mutex);
    return frequency;        
}

int Module::getPeriod()
{
    std::lock_guard<std::mutex> locker(mutex);
    return period;        
}

void Module::run ()
{    
    bON = true; 
    first();
    while (!offRequested())
    {
        preLoop();
        loop();
        postLoop();
        
        usleep(period);
    }
    bON = false;
}


int Module::getState()
{
    std::lock_guard<std::mutex> locker(mutex);
    return (state);        
}

int Module::getPrevState()
{
    std::lock_guard<std::mutex> locker(mutex);
    return (prevState);        
}

int Module::getStable()
{
    std::lock_guard<std::mutex> locker(mutex);
    return (stable);        
}

void Module::setState(int value)
{
    std::lock_guard<std::mutex> locker(mutex);
    state = value;    
    // if state changed, reset stability counter
    if (state != prevState)
        stable = 0;        
}

void Module::preLoop()
{
    std::lock_guard<std::mutex> locker(mutex);
    // store previous state
    prevState = state;
}

void Module::postLoop()
{
    std::lock_guard<std::mutex> locker(mutex);
    // if state not changed in last loop, increase stability counter (limited)
    if (state == prevState && stable < 1000)
        stable++;
}

bool Module::isStateChanged()
{
    std::lock_guard<std::mutex> locker(mutex);
    return (state != prevState);        
}

int Module::getStableTime()
{
    std::lock_guard<std::mutex> locker(mutex);
    return (stable * period / 1000);        
}

}


