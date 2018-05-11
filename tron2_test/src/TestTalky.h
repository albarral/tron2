#ifndef __TRON2_TEST_TALKY_H
#define __TRON2_TEST_TALKY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>


// Class used to test coms with libtron2_talky.
class TestTalky
{
private:
    static log4cxx::LoggerPtr logger;

public:
    TestTalky();
    //~TestTalky();

    void makeTest();      
    
private:
    void testArmJointTalker();      
};

#endif
