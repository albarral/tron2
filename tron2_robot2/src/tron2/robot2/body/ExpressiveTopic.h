#ifndef __TRON2_ROBOT2_BODY_EXPRESSIVETOPIC_H
#define __TRON2_ROBOT2_BODY_EXPRESSIVETOPIC_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/Topic.h"

namespace tron2
{
// Concepts definition for the body expressive topic
 class ExpressiveTopic : public Topic
{
 public:
    /*! expressive concepts  */
    enum eConcepts
    {
        eEXPRESS_FEELING,                   /*! express given feeling */
        eEXPRESS_HALT,                        /*! halt expressive action */
        eEXPRESS_DIM
    };

    /*! expressive concepts */    
    const std::string EXPRESS_FEELING = "feel";      /*! set feeling to express (integer) */
    const std::string EXPRESS_HALT = "halt";          /*! halt expression */

 public:    
    ExpressiveTopic(); 
    
 private: 
    virtual void fillConcepts();      
    
};
}
#endif
