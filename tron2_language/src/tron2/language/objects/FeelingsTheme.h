#ifndef __TRON2_LANGUAGE_FEELINGSTHEME_H
#define __TRON2_LANGUAGE_FEELINGSTHEME_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/Theme.h"

namespace tron2
{
// Theme for feelings (objects category)
 class FeelingsTheme : public Theme
{
 public:
    /*! theme codes  */
    enum eCodes
    {
         eFEELING_ACCEPT,                       
         eFEELING_DENY,                       
         eFEELING_JOY,                       
         eFEELING_ANGER,                    
         eFEELING_SURPRISE,                    
         eFEELING_DIM
    };

    /*! code names */
    const std::string FEELING_ACCEPT = "accept";     
    const std::string FEELING_DENY = "deny";       
    const std::string FEELING_JOY = "joy";      
    const std::string FEELING_ANGER = "anger"; 
    const std::string FEELING_SURPRISE = "surprise";   

 public:    
    FeelingsTheme(); 

    // build theme
    virtual void build();    
};
}
#endif
