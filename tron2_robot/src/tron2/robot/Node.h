#ifndef __TRON2_ROBOT_NODE_H
#define __TRON2_ROBOT_NODE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include "tron/util/CodeMap.h"

namespace tron2
{
// A Node is a code map of topics.
 class Node : public tron::CodeMap
{    
 public:
    static const int eEXTRA_TOPIC = 100;   /*! ID of extra topic */  
    static const std::string EXTRA_TOPIC;   /*! name of extra topic */
     
 protected:
     int ID;
     std::string name;
     
 public:     
     Node(int id, std::string name);
     
     int getID() {return ID;}
     std::string getName() {return name;}
     
    // gets name for given topic
    std::string getName4Topic(int topic);
    // gets code for given topic name
    int getCode4Topic(std::string topicName);
        
    //  return node description
    virtual std::string toString();

 protected:
     virtual void fillTopics() = 0;
};
}
#endif
