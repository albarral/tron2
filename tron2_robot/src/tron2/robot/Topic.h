#ifndef __TRON2_ROBOT_TOPIC_H
#define __TRON2_ROBOT_TOPIC_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

#include "tron/util/CodeMap.h"

namespace tron2
{
// A Topic is a code map of concepts.
 class Topic : public tron::CodeMap
{    
 protected:
     int ID;                   // topic id
     std::string name;  // topic name
     
 public:     
     Topic(int id, std::string name);
     
     int getID() {return ID;}
     std::string getName() {return name;}
     
    // gets name for given concept
    std::string getName4Concept(int concept);
    // gets code for given concept name
    int getCode4Concept(std::string conceptName);
        
    //  return topic description
    virtual std::string toString();

 protected:
     virtual void fillConcepts() = 0;
};
}
#endif
