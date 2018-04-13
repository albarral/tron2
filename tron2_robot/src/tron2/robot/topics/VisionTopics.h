#ifndef __TRON2_ROBOT_VISIONTOPICS_H
#define __TRON2_ROBOT_VISIONTOPICS_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/topics/NodeTopics.h"

namespace tron2
{
// Definition of vision topics
 class VisionTopics : public NodeTopics
{
public:
    /*! vision topics */
    enum eVisionTopics
    {
        eVISION_FOCUS,                /*! focus topic */
        eVISION_EXTRA,                 /*! extra topic  */
        eVISION_DIM
    };

    /*! vision topic names */
    static const std::string VISION_FOCUS;
    static const std::string VISION_EXTRA;

 public:     
     VisionTopics();
     
protected:
     virtual void fillMap();
};
}
#endif
