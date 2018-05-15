/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/qualifiers/LocationCategory.h"
#include "tron2/concepts/qualifiers/QualifierCategories.h"

namespace tron2
{
LocationCategory::LocationCategory() : Category(QualifierCategories::eQUALIFIERS_LOCATION, "location")
{
    setNature(tron2::Concept::eNATURE_QUALIFIER);

    Concept oConcept;
    oConcept.set(eLOCATION_OVER, "over");
    addConcept(oConcept);
    oConcept.set(eLOCATION_UNDER, "under");                         
    addConcept(oConcept);
    oConcept.set(eLOCATION_LEFT_TO, "left to");                      
    addConcept(oConcept);
    oConcept.set(eLOCATION_RIGHT_TO, "right to");                   
    addConcept(oConcept);
    oConcept.set(eLOCATION_INFRONT, "in front of");                        
    addConcept(oConcept);
    oConcept.set(eLOCATION_BEHIND, "behind");       
    addConcept(oConcept);
    oConcept.set(eLOCATION_INSIDE, "inside");       
    addConcept(oConcept);
    oConcept.set(eLOCATION_OUTSIDE, "outside");       
    addConcept(oConcept);
}
}