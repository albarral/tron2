/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/Topic.h"

namespace tron2
{    
Topic::Topic(int id, std::string name)
{
    this->ID = id;
    this->name = name;
}

std::string Topic::getName4Concept(int concept)
{
    std::string cname;
    if (tron::CodeMap::getName4Code(concept, cname))
        return cname;
    // return empty name if unknown concept code
    else
        return ""; 
}

int Topic::getCode4Concept(std::string conceptName)
{
    int code;
    if (tron::CodeMap::getCode4Name(conceptName, code))
        return code;
    // return -1 if unknown concept name
    else 
        return -1;
}

std::string Topic::toString()
{
    return "Topic: " + name + ", concepts:\n" + tron::CodeMap::toString();
}

}