/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/Node.h"

namespace tron2
{    
Node::Node(int id, std::string name)
{
    this->ID = id;
    this->name = name;
}

std::string Node::getName4Topic(int topic)
{
    std::string tname;
    if (tron::CodeMap::getName4Code(topic, tname))
        return tname;
    // return empty name if unknown topic code
    else
        return ""; 
}

int Node::getCode4Topic(std::string topicName)
{
    int code;
    if (tron::CodeMap::getCode4Name(topicName, code))
        return code;
    // return -1 if unknown topic name
    else 
        return -1;
}

std::string Node::toString()
{
    return "Node: " + name + ", topics:\n" + tron::CodeMap::toString();
}

}