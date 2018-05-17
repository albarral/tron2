#ifndef __TRON2_CONCEPTS_MOVEMENT_CATEGORY_H
#define __TRON2_CONCEPTS_MOVEMENT_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/Category.h"

namespace tron2
{
// Category for movement concepts
 class MovementCategory : public Category
{
 public:
    /*! movement codes  */
    enum eCodes
    {
         eMOVEMENT_MOVE,                       
         eMOVEMENT_RAISE,                       
         eMOVEMENT_LOWER,                       
         eMOVEMENT_ADVANCE,                    
         eMOVEMENT_GOBACK,                    
         eMOVEMENT_STOP,                    
         eMOVEMENT_DIM
    };

 public:    
    MovementCategory(); 
};
}
#endif
