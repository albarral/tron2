/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <unistd.h>

#include "TestKnowledge.h"

#include "tron2/knowledge/Concept.h"
#include "tron2/knowledge/Knowledge.h"
#include "tron2/language/features/DirectionsTheme.h"
#include "tron2/language/features/LengthTheme.h"
#include "tron2/language/features/QuantityTheme.h"
#include "tron2/language/features/SizeTheme.h"
#include "tron2/language/features/SpeedTheme.h"

using namespace log4cxx;

LoggerPtr TestKnowledge::logger(Logger::getLogger("tron2"));

// Constructor 
TestKnowledge::TestKnowledge()
{    
 }

void TestKnowledge::makeTest()
{
    LOG4CXX_INFO(logger, "TestKnowledge: test start \n");
       
    tron2::Knowledge oKnowledge;
    // language themes
    tron2::DirectionsTheme oDirectionsTheme;  
    tron2::LengthTheme oLengthTheme;
    tron2::QuantityTheme oQuantityTheme;
    tron2::SizeTheme oSizeTheme;
    tron2::SpeedTheme oSpeedTheme;
    
    oKnowledge.addTheme(oDirectionsTheme);
    oKnowledge.addTheme(oLengthTheme);
    oKnowledge.addTheme(oQuantityTheme);
    oKnowledge.addTheme(oSizeTheme);
    oKnowledge.addTheme(oSpeedTheme);

//    tron2::Concept oConcept(0, 0, 1, "upwards");
//    oKnowledge.addConcept(oConcept);
//    oKnowledge.addConcept(oConcept);

    LOG4CXX_INFO(logger, "TestKnowledge: " + oKnowledge.toString());
    
    std::string word = "faster";
    tron2::Concept* pConcept = oKnowledge.interpret(word);
    if (pConcept != nullptr)
    {
        LOG4CXX_INFO(logger, "TestKnowledge: found " + pConcept->toString());        
    }
    else
        LOG4CXX_INFO(logger, "TestKnowledge: no concept found for word " + word);        
            
        
    LOG4CXX_INFO(logger, "TestKnowledge: test end \n");
}



