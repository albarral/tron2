#ifndef __TRON2_TEST_ROBOT2_H
#define __TRON2_TEST_ROBOT2_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

// Class used to test libtron2_robot2.
class TestRobot2
{
private:
    static log4cxx::LoggerPtr logger;

public:
    TestRobot2();
    //~TestRobot2();

    void makeTest();      
    
private:
    void testTopics();      
};

#endif
