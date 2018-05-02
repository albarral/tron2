#ifndef __TRON2_ROBOT2_BODY_ARTISTICTOPIC_H
#define __TRON2_ROBOT2_BODY_ARTISTICTOPIC_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/Topic.h"

namespace tron2
{
// Concepts definition for the body artistic topic
 class ArtisticTopic : public Topic
{
 public:
    /*! artistic concepts */
    enum eConcepts
    {
        eARTISTIC_FIGURE,        // id of artistic figure to implement
        eARTISTIC_FREQ,       // frequency of cyclic figure (Hz) 
        eARTISTIC_SIZE,        // size of cyclic figure (degrees)
        eARTISTIC_ORIENTATION,  // orientation of cyclic figure (degrees)
        eARTISTIC_RELFACTOR,    // relative xy factor of cyclic figure 
        eARTISTIC_HALT,                // halt ongoing artistic movement
        eARTISTIC_DIM
    };

    /*! artistic concepts */    
    const std::string ARTISTIC_FIGURE = "figure";             /*! id of artistic figure to implement (integer) */
    const std::string ARTISTIC_FREQ = "freq";                  /*! frequency of cyclic figure (Hz) */
    const std::string ARTISTIC_SIZE = "size";                   /*! size of cyclic figure (degrees) */
    const std::string ARTISTIC_ORIENTATION = "angle";     /*! orientation of cyclic figure (degrees) */
    const std::string ARTISTIC_RELFACTOR = "factor";       /*! relative xy factor of cyclic figure */
    const std::string ARTISTIC_HALT = "halt";                   /*! halt ongoing artistic movement */

 public:    
    ArtisticTopic(); 
    
 private: 
    virtual void fillConcepts();      
    
};
}
#endif
