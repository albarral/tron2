#ifndef __TRON2_CONCEPTS_ACTION_CATEGORIES_H
#define __TRON2_CONCEPTS_ACTION_CATEGORIES_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

namespace tron2
{
/** 
 * Definition of action categories.
 */
 class ActionCategories
{
 public:     
    enum eCategory
    {
        eACTIONS_MOVEMENT, 
        eACTIONS_MANIPULATION,        
//        eACTIONS_VISION,        
        eACTIONS_DIM
    };

 public:         
//    ActionCategories();              	
};
}
#endif
