#ifndef __TRON2_ROBOT_ARMTOPICS_H
#define __TRON2_ROBOT_ARMTOPICS_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/topics/NodeTopics.h"

namespace tron2
{
// Definition of arm topics
 class ArmTopics : public NodeTopics
{
public:
    /*! arm topics */
    enum eArmTopics
    {
        eARM_JOINT,                  /*! joint topic */
        eARM_AXIS,                   /*! axis topic  */
        eARM_CYCLER1,             /*! cycler1 topic  */
        eARM_CYCLER2,             /*! cycler2 topic  */
        eARM_EXTRA,                 /*! extra topic  */
        eARM_DIM
    };

    /*! arm topic names */
    static const std::string ARM_JOINT;
    static const std::string ARM_AXIS;
    static const std::string ARM_CYCLER1;
    static const std::string ARM_CYCLER2;
    static const std::string ARM_EXTRA;

 public:     
     ArmTopics();
     
protected:
     virtual void fillMap();
};
}
#endif
