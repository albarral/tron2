/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/blocks/Action.h"

namespace tron2
{
// Constructor
Action::Action ()
{    
}

void Action::finish()
{
    // off module requested
    Module::off();
}

}


