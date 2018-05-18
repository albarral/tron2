#ifndef __TRON2_TEST_LISTEN_H
#define __TRON2_TEST_LISTEN_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron2/concepts/Knowledge.h"
#include "tron2/listen/LetterProcessor.h"

// Class used to test tron2_listen lib.
class TestListen
{
private:
    static log4cxx::LoggerPtr logger;

public:
    TestListen();
    //~TestListen();

    void makeTest();      
    
private:
    void testLetterProcessor();
    
    void prepareProcessor(tron2::LetterProcessor& oLetterProcessor, tron2::Knowledge& oKnowledge);
    bool checkProcessor(tron2::LetterProcessor& oLetterProcessor, std::string word);

};
#endif
