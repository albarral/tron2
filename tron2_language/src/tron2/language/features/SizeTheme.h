#ifndef __TRON2_LANGUAGE_SIZETHEME_H
#define __TRON2_LANGUAGE_SIZETHEME_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/Theme.h"

namespace tron2
{
// Theme for size (features category)
 class SizeTheme : public Theme
{
 public:
    /*! theme codes  */
    enum eCodes
    {
         eSIZE_BIG,                       
         eSIZE_SMALL,                       
         eSIZE_BIGGER,                       
         eSIZE_SMALLER,                    
         eSIZE_BIGGEST,                    
         eSIZE_SMALLEST,                    
         eSIZE_DIM
    };

    /*! code names */
    const std::string SIZE_BIG = "big";     
    const std::string SIZE_SMALL = "small";       
    const std::string SIZE_BIGGER = "bigger";      
    const std::string SIZE_SMALLER = "smaller"; 
    const std::string SIZE_BIGGEST = "biggest";   
    const std::string SIZE_SMALLEST = "smallest";  

 public:    
    SizeTheme(); 

    // build theme
    virtual void build();    
};
}
#endif
