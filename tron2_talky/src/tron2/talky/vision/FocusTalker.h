#ifndef __TRON2_TALKY_VISION_FOCUSTALKER_H
#define __TRON2_TALKY_VISION_FOCUSTALKER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/Talker.h"

namespace tron2
{
// Talker for vision focus topic
 class FocusTalker : public Talker
{
 public:
    /*! focus category  */
    enum eFocusCat
    {
         eFOCUS_SHIFT,                       /*! shift focus target (bool) */
         eFOCUS_MODE,                       /*! focus mode (int) */
         eFOCUS_DIM
    };

    /*! axis category names */
    const std::string FOCUS_SHIFT = "shift";                 /*! shift focus target (bool) */
    const std::string FOCUS_MODE = "mode";                /*! focus mode (int) */

 public:    
    FocusTalker(); 
    
 protected: 
    // fill maps with knowledge 
    virtual void buildKnowledge();      
    // complete talker name with topic word
    virtual void completeName();
    
};
}
#endif
