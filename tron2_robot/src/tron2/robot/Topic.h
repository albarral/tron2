#ifndef __TRON2_ROBOT_TOPIC_H
#define __TRON2_ROBOT_TOPIC_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>
#include <vector>

#include "tron/util/Code.h"

namespace tron2
{
// A topic is a list of concept codes related to a given node part (arm joints, arm axes, ...).
 class Topic
{    
 protected:
     int ID;                   // topic id
     std::string name;  // topic name
     std::vector<tron::Code> listCodes;     // concepts list
     
 public:     
     Topic(int id, std::string name);
     
     int getID() {return ID;}
     std::string getName() {return name;}
     std::vector<tron::Code>& getListCodes() {return listCodes;};
     
     void addCode(int codeId, std::string codeName);
     
    //  return topic description
    virtual std::string toString();

 protected:
     virtual void fillConcepts() = 0;
};
}
#endif
