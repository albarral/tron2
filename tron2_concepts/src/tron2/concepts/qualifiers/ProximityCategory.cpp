/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/qualifiers/ProximityCategory.h"
#include "tron2/concepts/qualifiers/QualifierCategories.h"

namespace tron2
{
ProximityCategory::ProximityCategory() : Category(QualifierCategories::eQUALIFIERS_PROXIMITY, "proximity")
{
    setNature(tron2::Concept::eNATURE_QUALIFIER);

    Concept oConcept;
    oConcept.set(ePROXIMITY_HERE, "here");
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_THERE, "there");                         
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_NEAR, "near");                      
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_FAR, "far");                   
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_AROUND, "around");                        
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_AWAY, "away");       
    addConcept(oConcept);
    oConcept.set(ePROXIMITY_TOGETHER, "together");       
    addConcept(oConcept);
}
}