#ifndef __TRON2_ROBOT_NODETOPICS_H
#define __TRON2_ROBOT_NODETOPICS_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include "tron/util/CodeMap.h"

namespace tron2
{
// Base class used for definition of node topics
 class NodeTopics 
{
 protected:         
     tron::CodeMap oTopicsMap;                      /*! code map for node topics */    

 public:     
     //NodeTopics();
     
    // gets name for given topic code
    std::string getName4Topic(int topic);
    // gets code for given topic name
    int getCode4Topic(std::string topicName);
    
    std::string getMapDescription();        

 protected:
     virtual void fillMap() = 0;
};
}
#endif
