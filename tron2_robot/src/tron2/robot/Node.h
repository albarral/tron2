#ifndef __TRON2_ROBOT_NODE_H
#define __TRON2_ROBOT_NODE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>
#include <vector>

#include "tron/util/Code.h"

namespace tron2
{
// A Node is a list of topic codes related to a robot part (controlled by a dedicated process).    
 class Node
{    
 public:
    static const int eEXTRA_TOPIC = 100;   /*! ID of extra topic */  
    static const std::string EXTRA_TOPIC;   /*! name of extra topic */
     
 protected:
     int ID;
     std::string name;
     std::vector<tron::Code> listCodes;     // topics list
     
 public:     
     Node(int id, std::string name);
     
     int getID() {return ID;}
     std::string getName() {return name;}
     std::vector<tron::Code>& getListTopics() {return listCodes;};
     
     void addCode(int codeId, std::string codeName);
          
    //  return node description
    virtual std::string toString();

 protected:
     virtual void fillTopics() = 0;
};
}
#endif
