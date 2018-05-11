/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include<vector>

#include "dady/DadyCommander2.h"
#include "tron/util/StringUtil.h"
#include "tron/wire2/FileWire.h"
#include "tron2/talky/TalkyLanguages.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr DadyCommander2::logger(Logger::getLogger("dady"));

const std::string DadyCommander2::COMMAND_SEPARATOR = " ";

// Constructor 
DadyCommander2::DadyCommander2()
{ 
    targetNode = -1;
    targetChannel = -1;
    targetTopic = -1;
}

bool DadyCommander2::checkValidCommand(std::string entry)
{              
    int processedElements = 0;
    int validElements = 0;
    std::string nodeName;
    std::string channelName;
    
    // if no command
    if (entry.empty())
    {
        // show available nodes
        showAvailableNodes();
        return false;        
    }
    
    // split command parts 
    std::vector<std::string> listTokens = tron::StringUtil::split(entry, COMMAND_SEPARATOR);
    
    // skip if excessive command parts
    if (listTokens.size() > eCOMMAND_DIM)
    {
        LOG4CXX_WARN(logger, "DadyCommander2: command size exceeded " << listTokens.size());    
        return false;         
    }
    
    // if node informed
    if (listTokens.size() > eCOMMAND_NODE)
    {
        // interpret node
        nodeName = listTokens.at(eCOMMAND_NODE);
        targetNode = oTronRobot.getCode4Node(nodeName);
        // and check its validity
        if (targetNode != -1)
            validElements++;
        else
            LOG4CXX_WARN(logger, "DadyCommander2: unknown node " << nodeName);    
    }
    else
        // show available nodes
        showAvailableNodes();
        
    processedElements++;
    // skip if node invalid or not informed
    if (processedElements != validElements)
        return false;
        
    // if channel informed
    if (listTokens.size() > eCOMMAND_CHANNEL)
    {
        // interpret channel
        channelName = listTokens.at(eCOMMAND_CHANNEL);
        oRobotChannels.fillMapChannels4Node(targetNode);
        oRobotChannels.getMapChannels4Node(targetNode)->getCode4Name(channelName, targetChannel);

        // get topic for channel
        if (targetChannel != -1)
        {
            targetTopic = oRobotChannels.getTopic4NodeChannel(targetNode, targetChannel);        
            // and check its validity
            if (targetTopic != -1)
                validElements++;
            else
                LOG4CXX_WARN(logger, "DadyCommander2: no topic for channel " + channelName);    
        }
        else
            LOG4CXX_WARN(logger, "DadyCommander2: unknown channel " + channelName);    
    }
    else
        // show available channels for node
        showAvailableChannels(targetNode);        
    
    processedElements++;
    // skip if topic invalid or not informed
    if (processedElements != validElements)
        return false;

    // if concept informed
    if (listTokens.size() > eCOMMAND_CONCEPT)
    {
        // interpret concept
        message = listTokens.at(eCOMMAND_CONCEPT);            
        if (checkCorrectMessage(targetNode, targetTopic, message))
            validElements++;
        else
            LOG4CXX_WARN(logger, "DadyCommander2: invalid concept " + message);            
    }
    else
        // show available concepts for node & topic
        showAvailableConcepts(targetNode, targetTopic);

    processedElements++;
    // return false if concept invalid or not informed
    return (processedElements == validElements);
}

bool DadyCommander2::checkCorrectMessage(int node, int topic, std::string msg)
{    
    // create proper talker for target node & topic
    tron2::Talker oTalker;    
    tron2::TalkyLanguages::setLanguage4Talker(oTalker, node, topic);
        
    // if talker tuned
    if (oTalker.isTuned())
    {
        int code; 
        float value;
        // check if it can interpret the message
        bool bok = oTalker.interpretMessage(message, code, value);
        return bok;        
    }
    // if no talker created, message can not be correct
    else
        return false;    
}

bool DadyCommander2::sendMessage()
{
    tron::FileWire oWire; // communications wire       
    return oWire.sendMsg(targetNode, targetChannel, message);
}

void DadyCommander2::showAvailableNodes()
{
   LOG4CXX_INFO(logger, "available nodes: \n" + oTronRobot.toString());   
}

void DadyCommander2::showAvailableChannels(int node)
{
    oRobotChannels.fillMapChannels4Node(node);    
    std::string desc = oRobotChannels.getMapChannels4Node(node)->toString(); 
    LOG4CXX_INFO(logger, "available channels: \n" + desc);      
}

void DadyCommander2::showAvailableConcepts(int node, int topic)
{
    // create proper talker for target node & topic
    tron2::Talker oTalker;    
    tron2::TalkyLanguages::setLanguage4Talker(oTalker, node, topic);
        
    // if talker tuned
    if (oTalker.isTuned())
    {        
        LOG4CXX_INFO(logger, "available concepts: \n" + oTalker.getKnownConcepts());
    }
}
}