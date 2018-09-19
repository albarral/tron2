/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/features/SpeedTheme.h"
#include "tron2/language/TronCategories.h"

namespace tron2
{

SpeedTheme::SpeedTheme() : Theme(TronCategories::eCAT_FEATURES, "speed")
{
    // build theme
    build();    
}

void SpeedTheme::build()
{
    addCode(eSPEED_FAST, SPEED_FAST);
    addCode(eSPEED_SLOW, SPEED_SLOW);                         
    addCode(eSPEED_FASTER, SPEED_FASTER);                      
    addCode(eSPEED_SLOWER, SPEED_SLOWER);                   
    addCode(eSPEED_FASTEST, SPEED_FASTEST);                        
    addCode(eSPEED_SLOWEST, SPEED_SLOWEST);                        
}
}