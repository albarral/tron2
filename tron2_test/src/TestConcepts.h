#ifndef __TRON2_TEST_CONCEPTS_H
#define __TRON2_TEST_CONCEPTS_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>


// Class used to test tron_util lib.
class TestConcepts
{
private:
    static log4cxx::LoggerPtr logger;
    std::string modName;          // module name

public:
    TestConcepts();
    //~TestConcepts();

    void makeTest();      
    
private:
    void testCategories();
};
#endif
