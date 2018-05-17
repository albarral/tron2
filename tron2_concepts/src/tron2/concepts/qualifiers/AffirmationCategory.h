#ifndef __TRON2_CONCEPTS_AFFIRMATION_CATEGORY_H
#define __TRON2_CONCEPTS_AFFIRMATION_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/Category.h"

namespace tron2
{
// Category for affirmations
 class AffirmationCategory : public Category
{
 public:
    /*! affirmation codes  */
    enum eCodes
    {
         eAFFIRMATION_YES,                       
         eAFFIRMATION_NO,                       
         eAFFIRMATION_MAYBE,                       
         eAFFIRMATION_TOO,                    
         eAFFIRMATION_NEITHER,                    
         eAFFIRMATION_OK,                    
         eAFFIRMATION_DIM
    };

 public:    
    AffirmationCategory(); 
};
}
#endif
