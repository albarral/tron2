/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "TestListen.h"
#include "tron2/concepts/objects/BodyCategory.h"
#include "tron2/concepts/objects/ShapesCategory.h"
#include "tron/util/groups/Element.h"

using namespace log4cxx;

LoggerPtr TestListen::logger(Logger::getLogger("tron"));

// Constructor 
TestListen::TestListen()
{    
 }

void TestListen::makeTest()
{
    LOG4CXX_INFO(logger, "TestListen: test start \n");

    testLetterProcessor();
        
    LOG4CXX_INFO(logger, "TestListen: test end \n");
};


void TestListen::testLetterProcessor()
{
    LOG4CXX_INFO(logger, "TestListen: testLetterProcessor ...");

    tron2::BodyCategory oBodyCategory;
    tron2::ShapesCategory oShapesCategory;
    
    tron2::Knowledge oKnowledge(1, "knowledge");
    oKnowledge.addCategory(oBodyCategory);
    oKnowledge.addCategory(oShapesCategory);
    
    LOG4CXX_INFO(logger, oKnowledge.toString());        
    
    tron2::LetterProcessor oLetterProcessor1;
    tron2::LetterProcessor oLetterProcessor2;
    tron2::LetterProcessor oLetterProcessor3;
    oLetterProcessor1.setLetter('l');
    oLetterProcessor2.setLetter('r');
    oLetterProcessor3.setLetter('t');
    
    prepareProcessor(oLetterProcessor1, oKnowledge);
    prepareProcessor(oLetterProcessor2, oKnowledge);
    prepareProcessor(oLetterProcessor3, oKnowledge);

    std::string word = "triangle";         
    checkProcessor(oLetterProcessor1, word);
    checkProcessor(oLetterProcessor2, word);
    checkProcessor(oLetterProcessor3, word);    
}

void TestListen::prepareProcessor(tron2::LetterProcessor& oLetterProcessor, tron2::Knowledge& oKnowledge)
{
    oLetterProcessor.loadKnowledge(oKnowledge);
    LOG4CXX_INFO(logger, oLetterProcessor.getName() + ":\n" + oLetterProcessor.describeKnowledge());       
}

bool TestListen::checkProcessor(tron2::LetterProcessor& oLetterProcessor, std::string word)
{
    tron::Element* pElement = oLetterProcessor.interpretWord(word);
    if (pElement != 0)
    {
        LOG4CXX_INFO(logger, oLetterProcessor.getName() + ": known concept! " + pElement->toString());       
    }    
}
