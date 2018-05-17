#ifndef __TRON2_CONCEPTS_SHAPES_CATEGORY_H
#define __TRON2_CONCEPTS_SHAPES_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/Category.h"

namespace tron2
{
// Category for shapes
 class ShapesCategory : public Category
{
 public:
    /*! shape codes  */
    enum eCodes
    {
         eSHAPE_CIRCLE,                       
         eSHAPE_SQUARE,                       
         eSHAPE_ELLIPSE,                       
         eSHAPE_RECTANGLE,                    
         eSHAPE_TRIANGLE,                    
         eSHAPE_LINE,                    
         eSHAPE_POINT,                    
         eSHAPE_DIM
    };

 public:    
    ShapesCategory(); 
};
}
#endif
