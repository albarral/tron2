/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "TestRobot2.h"
#include "tron2/robot/arm/ArmNode.h"
#include "tron2/robot/arm/JointTopic.h"

using namespace log4cxx;

LoggerPtr TestRobot2::logger(Logger::getLogger("tron"));

// Constructor 
TestRobot2::TestRobot2()
{    
 }

void TestRobot2::makeTest()
{
    LOG4CXX_INFO(logger, "TestRobot2: test start \n");

    testTopics();
        
    LOG4CXX_INFO(logger, "TestRobot2: test end \n");
}


void TestRobot2::testTopics()
{
    LOG4CXX_INFO(logger, "TestRobot2::testTopics \n");

    
    tron2::ArmNode oArmNode;
    tron2::JointTopic oJointTopic;

    LOG4CXX_INFO(logger, oArmNode.toString());            
    LOG4CXX_INFO(logger, oJointTopic.toString());            
}

