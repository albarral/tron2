#ifndef __TRON2_CONCEPTS_QUANTITY_CATEGORY_H
#define __TRON2_CONCEPTS_QUANTITY_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/Category.h"

namespace tron2
{
// Category for quantities
 class QuantityCategory : public Category
{
 public:
    /*! quantity codes  */
    enum eCodes
    {
         eQUANTITY_MORE,                       
         eQUANTITY_LESS,                       
         eQUANTITY_MUCH,                       
         eQUANTITY_FEW,                    
         eQUANTITY_VERY,                    
         eQUANTITY_ALL,                    
         eQUANTITY_NOTHING,                    
         eQUANTITY_ENOUGH,                    
         eQUANTITY_EQUAL,                    
         eQUANTITY_ALMOST,                    
         eQUANTITY_DIM
    };

 public:    
    QuantityCategory(); 
};
}
#endif
