/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/body/BodyClient.h"
#include "tron2/robot/RobotSystem.h"
#include "tron2/robot/body/BodyNode.h"
#include "tron2/robot/body/ExpressiveTopic.h"
#include "tron2/robot/body/ArtisticTopic.h"
#include "tron2/robot/common/ExtraTopic.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr BodyClient::logger(Logger::getLogger("tron.talky2"));

BodyClient::BodyClient()
{    
    int node = RobotSystem::eNODE_BODYROLE;
    oExpressiveChannelClient.tune4NodeAndTopic(node, BodyNode::eBODY_EXPRESSIVE);
    oArtisticChannelClient.tune4NodeAndTopic(node, BodyNode::eBODY_ARTISTIC);
    oExtraChannelClient.tune4NodeAndTopic(node, Node::eEXTRA_TOPIC);
}

BodyClient::~BodyClient()
{    
}

// EXPRESSIVE TOPIC ...

bool BodyClient::expressFeeling(int value)
{    
    LOG4CXX_DEBUG(logger, "BodyClient: express feeling > " << std::to_string(value));
    return oExpressiveChannelClient.sendMessage(ExpressiveTopic::eEXPRESS_FEELING, (float)value);
}

bool BodyClient::stopExpression()
{    
    LOG4CXX_DEBUG(logger, "BodyClient: stop expression > ");
    return oExpressiveChannelClient.sendMessage(ExpressiveTopic::eEXPRESS_HALT, 0.0);
}

// ARTISTIC TOPIC ...

bool BodyClient::makeFigure(int value)
{    
    LOG4CXX_DEBUG(logger, "BodyClient: make figure > " << std::to_string(value));
    return oExpressiveChannelClient.sendMessage(ArtisticTopic::eARTISTIC_FIGURE, value);
}

bool BodyClient::setFigureFreq(float value)
{    
    LOG4CXX_DEBUG(logger, "BodyClient: set figure freq > " << std::to_string(value));
    return oExpressiveChannelClient.sendMessage(ArtisticTopic::eARTISTIC_FREQ, value);
}

bool BodyClient::setFigureAmplitude(float value)
{    
    LOG4CXX_DEBUG(logger, "BodyClient: set figure amp > " << std::to_string(value));
    return oExpressiveChannelClient.sendMessage(ArtisticTopic::eARTISTIC_SIZE, value);
}

bool BodyClient::setFigureAngle(float value)
{    
    LOG4CXX_DEBUG(logger, "BodyClient: set figure angle > " << std::to_string(value));
     return oArtisticChannelClient.sendMessage(ArtisticTopic::eARTISTIC_ORIENTATION, value);
}

bool BodyClient::setFigureFactor(float value)
{    
    LOG4CXX_DEBUG(logger, "BodyClient: set figure factor > " << std::to_string(value));
     return oArtisticChannelClient.sendMessage(ArtisticTopic::eARTISTIC_RELFACTOR, value);
}

bool BodyClient::stopFigure()
{    
    LOG4CXX_DEBUG(logger, "BodyClient: stop figure > ");
     return oArtisticChannelClient.sendMessage(ArtisticTopic::eARTISTIC_HALT, 0.0);
}

// EXTRA TOPIC ...

bool BodyClient::fullStop()
{
    LOG4CXX_DEBUG(logger, "BodyClient: full stop > ");     
    return oExtraChannelClient.sendMessage(ExtraTopic::eEXTRA_STOP, 0.0);        
}

bool BodyClient::endNode()
{
    LOG4CXX_DEBUG(logger, "BodyClient: end body node > ");     
    return oExtraChannelClient.sendMessage(ExtraTopic::eEXTRA_END, 0.0);        
}
}