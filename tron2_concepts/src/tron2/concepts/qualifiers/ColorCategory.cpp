/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/qualifiers/ColorCategory.h"
#include "tron2/concepts/qualifiers/QualifierCategories.h"

namespace tron2
{
ColorCategory::ColorCategory() : Category(QualifierCategories::eQUALIFIERS_COLOR, "colors")
{
    setNature(tron2::Concept::eNATURE_QUALIFIER);

    Concept oConcept;
    oConcept.set(eCOLOR_RED, "red");
    addConcept(oConcept);
    oConcept.set(eCOLOR_GREEN, "green");                         
    addConcept(oConcept);
    oConcept.set(eCOLOR_BLUE, "blue");                      
    addConcept(oConcept);
    oConcept.set(eCOLOR_YELLOW, "yellow");                   
    addConcept(oConcept);
    oConcept.set(eCOLOR_ORANGE, "orange");                        
    addConcept(oConcept);
    oConcept.set(eCOLOR_BROWN, "brown");       
    addConcept(oConcept);
    oConcept.set(eCOLOR_BLACK, "black");       
    addConcept(oConcept);
    oConcept.set(eCOLOR_WHITE, "white");       
    addConcept(oConcept);
    oConcept.set(eCOLOR_GREY, "grey");       
    addConcept(oConcept);    
}
}