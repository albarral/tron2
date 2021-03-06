/***************************************************************************
 *   Copyright (C) 2017 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <cstdlib>  // for getenv

#include <log4cxx/logger.h>
#include <log4cxx/xml/domconfigurator.h>

#include "TestKnowledge.h"
#include "TestTivy.h"

// obtains user's home path
std::string getHomePath();

log4cxx::LoggerPtr logger(log4cxx::Logger::getLogger("tron2"));

enum eTest
{
    eTEST_KNOWLEDGE, 
    eTEST_TIVY
};

// main program
int main(int argc, char** argv) 
{
    std::string home = getHomePath();
    std::string configFile = home + "/.tron/log4cxx_config_tron2test.xml";
    log4cxx::xml::DOMConfigurator::configure(configFile);    
        
    LOG4CXX_INFO(logger, "\n\nSTART tron2 test\n");
    
    int test = eTEST_KNOWLEDGE;

    switch (test)
    {
        case eTEST_KNOWLEDGE:
        {
            // test knowledge lib
            TestKnowledge oTestKnowledge;
            oTestKnowledge.makeTest();
            break;
        }
        case eTEST_TIVY:
        {
            // test tivy lib
            TestTivy oTestTivy;
            oTestTivy.makeTest();
            break;
        }
    }
           
    LOG4CXX_INFO(logger, "tron test FINISHED\n");
    
    return 0;
}

std::string getHomePath()
{    
    // obtain value of HOME environment variable
    char* pVar = getenv("HOME");    
    if (pVar!=NULL)
    {
        // transform it in a string
        std::string home(pVar);
        return home;
    }
    else
        return "";
}
