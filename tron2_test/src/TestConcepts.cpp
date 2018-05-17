/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "TestConcepts.h"
#include "tron2/concepts/Concept.h"
#include "tron2/concepts/Category.h"
#include "tron2/concepts/Knowledge.h"

using namespace log4cxx;

LoggerPtr TestConcepts::logger(Logger::getLogger("tron"));

// Constructor 
TestConcepts::TestConcepts()
{    
    modName = "TestConcepts";
 }

void TestConcepts::makeTest()
{
    LOG4CXX_INFO(logger, modName + ": test start \n");

    testCategories();
        
    LOG4CXX_INFO(logger, modName + ": test end \n");
};


void TestConcepts::testCategories()
{
    LOG4CXX_INFO(logger, modName + ": testCategories ...");

    tron2::Category oColorCategory(1, "colors");
    oColorCategory.setNature(tron2::Concept::eNATURE_QUALIFIER);
    tron2::Concept oConcept1(1, "red");
    tron2::Concept oConcept2(2, "green");
    tron2::Concept oConcept3(3, "blue");

    tron2::Category oShapeCategory(2, "shape");
    oShapeCategory.setNature(tron2::Concept::eNATURE_QUALIFIER);
    tron2::Concept oConcept4(1, "circle");
    tron2::Concept oConcept5(2, "square");
    tron2::Concept oConcept6(3, "ellipse");
        
    oColorCategory.addConcept(oConcept1);
    oColorCategory.addConcept(oConcept2);
    oColorCategory.addConcept(oConcept3);    
    
    oShapeCategory.addConcept(oConcept4);
    oShapeCategory.addConcept(oConcept5);
    oShapeCategory.addConcept(oConcept6);    
    
    tron2::Knowledge oKnowledge(10, "qualifiers");
    oKnowledge.setNature(tron2::Concept::eNATURE_QUALIFIER);
    oKnowledge.addCategory(oColorCategory);
    oKnowledge.addCategory(oShapeCategory);
    
    LOG4CXX_INFO(logger, oKnowledge.toString());        
//    LOG4CXX_INFO(logger, oColorCategory.toString());        
}


