#ifndef __TRON2_ROBOT_VISIONNODE_H
#define __TRON2_ROBOT_VISIONNODE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/Node.h"

namespace tron2
{
// Definition of vision node topics
 class VisionNode : public Node
{
public:
    /*! vision topics */
    enum eVisionTopics
    {
        eVISION_FOCUS,                /*! focus topic */
        eVISION_DIM
    };

    /*! vision topic names */
    static const std::string VISION_FOCUS;

 public:     
     VisionNode();
     
private:
     virtual void fillTopics();
};
}
#endif
