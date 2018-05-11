/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/talky/Talker.h"
#include "tron/util/StringUtil.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr Talker::logger(Logger::getLogger("tron.talky2"));

const std::string Talker::FIELD_SEPARATOR = "*";

Talker::Talker()
{
    btuned = false;
    topic = -1;
    name = "?";
}

Talker::~Talker()
{
    oCodeMap.reset();
}

void Talker::tune4Topic(Topic& oTopic)
{
    name = oTopic.getName() + "Talker";

    // fills code map with the topic's code map elements
    oCodeMap = (tron::CodeMap)oTopic;
    
    btuned = true;
}


bool Talker::buildMessage(int code, float value, std::string& message)
{
    std::string word;

    // if known concept, build message with the concept name
    if (oCodeMap.getName4Code(code, word))
    {
        message = word + Talker::FIELD_SEPARATOR + std::to_string(value);
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
bool Talker::interpretMessage(std::string message, int& code, float& value)
{           
    // get message parts (concept*value)
    std::vector<std::string> listTokens = tron::StringUtil::split(message, Talker::FIELD_SEPARATOR); 

    // if right message size, interpret it
    if (listTokens.size() == Talker::MSG_FIELDS)
    {
        // if known concept, interpret value 
        if (oCodeMap.getCode4Name(listTokens.at(0), code))
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


std::string Talker::getKnownConcepts()
{
    return oCodeMap.toString();
}

}