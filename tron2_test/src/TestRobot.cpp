/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "TestRobot.h"
#include "tron2/robot/arm/ArmNode.h"
#include "tron2/robot/arm/JointTopic.h"

using namespace log4cxx;

LoggerPtr TestRobot::logger(Logger::getLogger("tron"));

// Constructor 
TestRobot::TestRobot()
{    
 }

void TestRobot::makeTest()
{
    LOG4CXX_INFO(logger, "TestRobot: test start \n");

    testTopics();
        
    LOG4CXX_INFO(logger, "TestRobot: test end \n");
}


void TestRobot::testTopics()
{
    LOG4CXX_INFO(logger, "TestRobot::testTopics \n");

    
    tron2::ArmNode oArmNode;
    tron2::JointTopic oJointTopic;

    LOG4CXX_INFO(logger, oArmNode.toString());            
    LOG4CXX_INFO(logger, oJointTopic.toString());            
}

