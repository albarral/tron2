#ifndef __TRON2_LANGUAGE_FEATURES_CATEGORY_H
#define __TRON2_LANGUAGE_FEATURES_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/Theme.h"

namespace tron2
{
// Definition of themes composing the features category.
 class FeaturesCategory : public Theme
{
 public:
    /*! theme codes  */
    enum eCodes
    {
         eFEATURE_DIRECTION,                       
         eFEATURE_LENGTH,                       
         eFEATURE_QUANTITY,                       
         eFEATURE_SIZE,                    
         eFEATURE_SPEED,                    
         eFEATURE_DIM
    };

    /*! code names */
    const std::string FEATURE_DIRECTION = "direction";     
    const std::string FEATURE_LENGTH = "length";       
    const std::string FEATURE_QUANTITY = "quantity";      
    const std::string FEATURE_SIZE = "size"; 
    const std::string FEATURE_SPEED = "speed";   

 public:    
    FeaturesCategory(); 

    // build theme
    virtual void build();    
};
}
#endif
