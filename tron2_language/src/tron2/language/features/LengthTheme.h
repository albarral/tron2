#ifndef __TRON2_LANGUAGE_LENGTHTHEME_H
#define __TRON2_LANGUAGE_LENGTHTHEME_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/Theme.h"

namespace tron2
{
// Theme for length (features category)
 class LengthTheme : public Theme
{
 public:
    /*! theme codes  */
    enum eCodes
    {
         eLENGTH_LONG,                       
         eLENGTH_SHORT,                       
         eLENGTH_LONGER,                       
         eLENGTH_SHORTER,                    
         eLENGTH_LONGEST,                    
         eLENGTH_SHORTEST,                    
         eLENGTH_DIM
    };

    /*! code names */
    const std::string LENGTH_LONG = "long";     
    const std::string LENGTH_SHORT = "short";       
    const std::string LENGTH_LONGER = "longer";      
    const std::string LENGTH_SHORTER = "shorter"; 
    const std::string LENGTH_LONGEST = "longest";   
    const std::string LENGTH_SHORTEST = "shortest";  

 public:    
    LengthTheme(); 

    // build theme
    virtual void build();    
};
}
#endif
