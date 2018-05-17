/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/coms/talker/ChannelTalker.h"
#include "tron/util/StringUtil.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr ChannelTalker::logger(Logger::getLogger("tron2.coms"));

const std::string ChannelTalker::FIELD_SEPARATOR = "*";

ChannelTalker::ChannelTalker()
{
    btuned = false;
    topic = -1;
    name = "?";
}

//ChannelTalker::~ChannelTalker()
//{
//}

void ChannelTalker::tune4Topic(Topic& oTopic)
{
    name = oTopic.getName() + "ChannelTalker";

    // set CodeInterpreter knowledge with given topic codes
    tron::CodeInterpreter::setKnowledge(oTopic.getListCodes());
    
    btuned = true;
}


bool ChannelTalker::buildMessage(int code, float value, std::string& message)
{
    // get code name
    std::string word = tron::CodeInterpreter::writeCode(code);

    // if known code, build message with the code name
    if (!word.empty())
    {
        message = word + ChannelTalker::FIELD_SEPARATOR + std::to_string(value);
        return true;
    }
    // otherwise return false
    else
    {
        message = "";
        LOG4CXX_WARN(logger, name + ": message not built, unknown code " << code);
        return false;
    }
}

// expected message is code*value
bool ChannelTalker::interpretMessage(std::string message, int& code, float& value)
{           
    // get message parts (concept*value)
    std::vector<std::string> listTokens = tron::StringUtil::split(message, ChannelTalker::FIELD_SEPARATOR); 

    // if right message size, interpret it
    if (listTokens.size() == ChannelTalker::MSG_FIELDS)
    {
        // interpret code 
        code = tron::CodeInterpreter::interpretCode(listTokens.at(0));
        // if known code, interpret value 
        if (code != -1)
        {
            if (tron::StringUtil::convert2Float(listTokens.at(1), value))            
            {
                return true;
            }
            // invalid quantity
            else
            {
                LOG4CXX_WARN(logger, name + ": invalid quantity " << listTokens.at(1));          
            }
        }
        // unknown concept 
        else
        {
            LOG4CXX_WARN(logger, name + ": unknown concept " << listTokens.at(0));   
        }
    }
    // wrong message size
    else
    {
        LOG4CXX_WARN(logger, name + ": wrong concept format! (concept*quantity expected)");    
    }
    
    // if program arrives here, interpretation failed
    return false;
}

}