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

    //testLetterProcessor();
    testWordProcessor();
        
    LOG4CXX_INFO(logger, "TestListen: test end \n");
};

tron2::Knowledge* TestListen::createKnowledge()
{
    tron2::BodyCategory oBodyCategory;
    tron2::ShapesCategory oShapesCategory;
    
    tron2::Knowledge* pKnowledge = new tron2::Knowledge(1, "knowledge");
    pKnowledge->addCategory(oBodyCategory);
    pKnowledge->addCategory(oShapesCategory);    

    LOG4CXX_INFO(logger, pKnowledge->toString());        
    
    return pKnowledge;
}

void TestListen::testLetterProcessor()
{
    LOG4CXX_INFO(logger, "TestListen: testLetterProcessor ...");

    tron2::Knowledge* pKnowledge = createKnowledge();
    
    tron2::LetterProcessor oLetterProcessor1;
    tron2::LetterProcessor oLetterProcessor2;
    tron2::LetterProcessor oLetterProcessor3;
    oLetterProcessor1.setLetter('l');
    oLetterProcessor2.setLetter('r');
    oLetterProcessor3.setLetter('t');
        
    prepareLetterProcessor(oLetterProcessor1, *pKnowledge);
    prepareLetterProcessor(oLetterProcessor2, *pKnowledge);
    prepareLetterProcessor(oLetterProcessor3, *pKnowledge);

    std::string word = "triangle";         
    useLetterProcessor(oLetterProcessor1, word);
    useLetterProcessor(oLetterProcessor2, word);
    useLetterProcessor(oLetterProcessor3, word);    
    
    delete(pKnowledge);
}

void TestListen::testWordProcessor()
{
    LOG4CXX_INFO(logger, "TestListen: testWordProcessor ...");

    tron2::Knowledge* pKnowledge = createKnowledge();
    
    tron2::WordProcessor oWordProcessor;
    oWordProcessor.addLetter('l');
    oWordProcessor.addLetter('r');
    oWordProcessor.addLetter('t');
    
    oWordProcessor.setKnowledge(*pKnowledge);

    std::string word = "trilobite";         
    tron::Element* pElement = oWordProcessor.interpretWord(word);
    if (pElement != 0)
    {
        LOG4CXX_INFO(logger, oWordProcessor.getName() + ": known concept! " + pElement->toString());       
    }    

    delete(pKnowledge);    
}

void TestListen::prepareLetterProcessor(tron2::LetterProcessor& oLetterProcessor, tron2::Knowledge& oKnowledge)
{
    oLetterProcessor.loadKnowledge(oKnowledge);
    LOG4CXX_INFO(logger, oLetterProcessor.getName() + ":\n" + oLetterProcessor.describeKnowledge());       
}

bool TestListen::useLetterProcessor(tron2::LetterProcessor& oLetterProcessor, std::string word)
{
    tron::Element* pElement = oLetterProcessor.interpretWord(word);
    if (pElement != 0)
    {
        LOG4CXX_INFO(logger, oLetterProcessor.getName() + ": known concept! " + pElement->toString());       
    }    
}
