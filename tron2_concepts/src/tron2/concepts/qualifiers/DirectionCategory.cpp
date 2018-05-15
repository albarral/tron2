/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/qualifiers/DirectionCategory.h"
#include "tron2/concepts/qualifiers/QualifierCategories.h"

namespace tron2
{
DirectionCategory::DirectionCategory() : Category(QualifierCategories::eQUALIFIERS_DIRECTION, "direction")
{
    setNature(tron2::Concept::eNATURE_QUALIFIER);

    Concept oConcept;
    oConcept.set(eDIRECTION_UP, "up");
    addConcept(oConcept);
    oConcept.set(eDIRECTION_DOWN, "down");                         
    addConcept(oConcept);
    oConcept.set(eDIRECTION_LEFT, "left");                      
    addConcept(oConcept);
    oConcept.set(eDIRECTION_RIGHT, "right");                   
    addConcept(oConcept);
    oConcept.set(eDIRECTION_FRONT, "front");                        
    addConcept(oConcept);
    oConcept.set(eDIRECTION_BACK, "back");       
    addConcept(oConcept);
}
}