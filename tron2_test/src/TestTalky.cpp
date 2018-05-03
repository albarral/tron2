/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "TestTalky.h"
#include "tron2/talky/TalkyLanguages.h"
#include "tron2/talky/Talker.h"
#include "tron2/robot/RobotSystem.h"
#include "tron2/robot/arm/ArmNode.h"


using namespace log4cxx;

LoggerPtr TestTalky::logger(Logger::getLogger("tron"));

// Constructor 
TestTalky::TestTalky()
{    
 }

void TestTalky::makeTest()
{
    LOG4CXX_INFO(logger, "TestTalky: test start \n");

    testArmJointTalker();
        
    LOG4CXX_INFO(logger, "TestTalky: test end \n");
}


void TestTalky::testArmJointTalker()
{
    LOG4CXX_INFO(logger, "TestTalky::testArmJointTalker \n");

    tron2::Talker* pTalker = 0;
    pTalker = tron2::TalkyLanguages::createTalker(tron2::RobotSystem::eNODE_ARM, tron2::ArmNode::eARM_JOINT);
    
    int code;
    float value;
    std::string message = "vs*10.0";
    if (pTalker->interpretMessage(message, code, value))
    {
        LOG4CXX_INFO(logger, "message: " + message);                
        LOG4CXX_INFO(logger, "code: " + std::to_string(code));                
        LOG4CXX_INFO(logger, "value: " + std::to_string(value));        
    }
}



