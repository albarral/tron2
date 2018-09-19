#ifndef __TRON2_LANGUAGE_SPEEDTHEME_H
#define __TRON2_LANGUAGE_SPEEDTHEME_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/Theme.h"

namespace tron2
{
// Theme for speed (features category)
 class SpeedTheme : public Theme
{
 public:
    /*! theme codes  */
    enum eCodes
    {
         eSPEED_FAST,                       
         eSPEED_SLOW,                       
         eSPEED_FASTER,                       
         eSPEED_SLOWER,                    
         eSPEED_FASTEST,                    
         eSPEED_SLOWEST,                    
         eSPEED_DIM
    };

    /*! code names */
    const std::string SPEED_FAST = "fast";     
    const std::string SPEED_SLOW = "slow";       
    const std::string SPEED_FASTER = "faster";      
    const std::string SPEED_SLOWER = "slower"; 
    const std::string SPEED_FASTEST = "fastest";   
    const std::string SPEED_SLOWEST = "slowest";  

 public:    
    SpeedTheme(); 

    // build theme
    virtual void build();    
};
}
#endif
