#ifndef __TRON2_DADY_COMMANDER2_H
#define __TRON2_DADY_COMMANDER2_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>
#include <log4cxx/logger.h>

#include "dady/RobotChannels.h"
#include "tron2/robot/system/TronRobot.h"

namespace tron2
{
// Class used to interpret user entered commands for robot communication.
// Commands format: ./dady <node> <topic> <concept>*<value>
class DadyCommander2 
{
public:    
    static const std::string COMMAND_SEPARATOR;       // separator in dady commands
private: 
    /*! command fields */
    enum eCommand
    {
        eCOMMAND_NODE,
        eCOMMAND_CHANNEL,
        eCOMMAND_CONCEPT,
        eCOMMAND_DIM
    };
    
    static log4cxx::LoggerPtr logger;    
    int targetNode;                          // target node (arm, vision, ...) 
    int targetChannel;                      // target channel
    int targetTopic;                          // target topic (for arm node: joints, axis, ...)
    std::string message;                 // message to send
    TronRobot oTronRobot;
    RobotChannels oRobotChannels;       

public:
    DadyCommander2();
    //~DadyCommander2();
    
    int getCommandSize() {return eCOMMAND_DIM;};
    
    bool checkValidCommand(std::string entry);
    bool sendMessage();
    
private:
    bool checkCorrectMessage(int node, int topic, std::string msg);

    void showAvailableNodes();
    void showAvailableChannels(int node);
    void showAvailableConcepts(int node, int topic);
    
};
}		
#endif
