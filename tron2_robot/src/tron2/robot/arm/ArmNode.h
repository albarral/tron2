#ifndef __TRON2_ROBOT2_ARMNODE_H
#define __TRON2_ROBOT2_ARMNODE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/Node.h"

namespace tron2
{
// Definition of arm node topics
 class ArmNode : public Node
{
public:
    /*! arm topics */
    enum eArmTopics
    {
        eARM_JOINT,                  /*! joint topic */
        eARM_AXIS,                   /*! axis topic  */
        eARM_CYCLIC,             /*! cyclic topic  */
        eARM_DIM
    };

    /*! arm topic names */
    static const std::string ARM_JOINT;
    static const std::string ARM_AXIS;
    static const std::string ARM_CYCLIC;

 public:     
     ArmNode();
     
private:
     virtual void fillTopics();
};
}
#endif
