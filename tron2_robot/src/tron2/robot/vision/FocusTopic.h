#ifndef __TRON2_ROBOT2_VISION_FOCUSTOPIC_H
#define __TRON2_ROBOT2_VISION_FOCUSTOPIC_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/Topic.h"

namespace tron2
{
// Concepts definition for the vision focus topic
 class FocusTopic : public Topic
{
 public:
    /*! focus concepts  */
    enum eConcepts
    {
         eFOCUS_SHIFT,                       /*! shift focus target (bool) */
         eFOCUS_MODE,                       /*! focus mode (int) */
         eFOCUS_DIM
    };

    /*! focus concepts names */
    const std::string FOCUS_SHIFT = "shift";                 /*! shift focus target (bool) */
    const std::string FOCUS_MODE = "mode";                /*! focus mode (int) */

 public:    
    FocusTopic(); 
    
 private: 
    virtual void fillConcepts();      
    
};
}
#endif
