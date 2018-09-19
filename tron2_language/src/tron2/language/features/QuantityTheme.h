#ifndef __TRON2_LANGUAGE_QUANTITYTHEME_H
#define __TRON2_LANGUAGE_QUANTITYTHEME_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/Theme.h"

namespace tron2
{
// Theme for quantity (features category)
 class QuantityTheme : public Theme
{
 public:
    /*! theme codes  */
    enum eCodes
    {
         eQUANTITY_NOTHING,                       
         eQUANTITY_FEW,                       
         eQUANTITY_NORMAL,                       
         eQUANTITY_MANY,                    
         eQUANTITY_ALL,                    
         eQUANTITY_DIM
    };

    /*! code names */
    const std::string QUANTITY_NOTHING = "nothing";     
    const std::string QUANTITY_FEW = "few";       
    const std::string QUANTITY_NORMAL = "normal";      
    const std::string QUANTITY_MANY = "many"; 
    const std::string QUANTITY_ALL = "all";   

 public:    
    QuantityTheme(); 

    // build theme
    virtual void build();    
};
}
#endif
