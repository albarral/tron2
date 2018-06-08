/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/base/Nature.h"

namespace tron2
{
std::string Nature::getName(int nature)
{
    switch (nature)
    {
        case eNATURE_ACTION:
            return "actions";
            break;
        case eNATURE_OBJECT:
            return "objects";
            break;
        case eNATURE_FEATURE:
            return "features";
            break;
        case eNATURE_INSTANCE:
            return "instances";
            break;
        case eNATURE_NEXUS:
            return "nexes";
            break;
        default: 
            return "invalid";
    }    
}

}




