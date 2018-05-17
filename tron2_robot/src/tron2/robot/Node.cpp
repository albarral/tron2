/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot/Node.h"

namespace tron2
{    
const std::string Node::EXTRA_TOPIC = "extra";    

Node::Node(int id, std::string name)
{
    this->ID = id;
    this->name = name;
}

void Node::addCode(int codeId, std::string codeName)
{
    tron::Code oCode(codeId, codeName);
    listCodes.push_back(oCode);
}

std::string Node::toString()
{
    std::string text = "Node: " + name + ", topics:\n";
        
    for (tron::Code& oCode : listCodes)
    {
        text += oCode.toString() + "\n"; 
    }

    return text;
    
}

}