#ifndef __TRON2_CONCEPTS_SPEED_CATEGORY_H
#define __TRON2_CONCEPTS_SPEED_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/Category.h"

namespace tron2
{
// Category for speeds
 class SpeedCategory : public Category
{
 public:
    /*! speed codes  */
    enum eCodes
    {
         eSPEED_FAST,                       
         eSPEED_SLOW,                       
         eSPEED_DIM
    };

 public:    
    SpeedCategory(); 
};
}
#endif
