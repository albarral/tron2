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

void Topic::addCode(int codeId, std::string codeName)
{
    tron::Code oCode(codeId, codeName);
    listCodes.push_back(oCode);
}

std::string Topic::toString()
{
    std::string text = "Topic: " + name + ", concepts:\n";
        
    for (tron::Code& oCode : listCodes)
    {
        text += oCode.toString() + "\n"; 
    }

    return text;
}

}