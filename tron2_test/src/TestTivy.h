#ifndef __TRON2_TEST_TIVY_H
#define __TRON2_TEST_TIVY_H

/***************************************************************************
 *   Copyright (C) 2017 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

// Class used to test tivy lib.
class TestTivy
{
 private:
     static log4cxx::LoggerPtr logger;

public:
    TestTivy();
//    ~TestTivy();

        void makeTest();      

private:    
    void testPlot();
    void testHistoryPlot();
    void testDiscPlot();
    void testDualWindow();
    
};

#endif
