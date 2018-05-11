/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/Concept.h"

namespace tron2
{
Concept::Concept()
{          
    nature = -1;
}

Concept::Concept(int id, std::string name) : tron::Element(id, name)
{          
    nature = -1;
}

//Concept::~Concept()
//{
//}

std::string Concept::toString()
{
    std::string text = "Concept: " + tron::Element::toString()  + ", nature=" + std::to_string(nature);    
    return text;    
}

}




