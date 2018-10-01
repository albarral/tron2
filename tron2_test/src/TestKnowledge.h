#ifndef __TRON2_TEST_KNOWLEDGE_H
#define __TRON2_TEST_KNOWLEDGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>


class TestKnowledge
{
private:
    static log4cxx::LoggerPtr logger;

public:
    TestKnowledge();
    //~TestKnowledge();

    void makeTest();          
    
};

#endif
