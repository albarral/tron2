/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/blocks/Behaviour.h"

namespace tron2
{
// Constructor
Behaviour::Behaviour ()
{    
    binhibited = false;
    level = -1;
}

bool Behaviour::isInhibited()
{
    std::lock_guard<std::mutex> locker(mutex2);
    return binhibited;      
}

void Behaviour::inhibit(bool value)
{
    std::lock_guard<std::mutex> locker(mutex2);
    binhibited = value;
}

}


