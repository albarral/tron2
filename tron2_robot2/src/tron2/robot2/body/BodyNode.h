#ifndef __TRON2_ROBOT_BODYNODE_H
#define __TRON2_ROBOT_BODYNODE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/Node.h"

namespace tron2
{
// Definition of body node topics
 class BodyNode : public Node
{
public:
    /*! body topics */
    enum eBodyTopics
    {
        eBODY_COMFORTABLE,            /*! comfortable topic */
        eBODY_EXPRESSIVE,                /*! expressive topic */
        eBODY_ARTISTIC,                     /*! artistic topic */
        eBODY_EXTRA,                        /*! extra topic */
        eBODY_DIM
    };

    /*! body topic names */
    static const std::string BODY_COMFORTABLE;
    static const std::string BODY_EXPRESSIVE;
    static const std::string BODY_ARTISTIC;
    static const std::string BODY_EXTRA;

 public:     
     BodyNode();
     
private:
     virtual void fillTopics();
};
}
#endif
