/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/qualifiers/AffirmationCategory.h"
#include "tron2/concepts/qualifiers/QualifierCategories.h"

namespace tron2
{
AffirmationCategory::AffirmationCategory() : Category(QualifierCategories::eQUALIFIERS_AFFIRMATION, "affirmation")
{
    setNature(tron2::Concept::eNATURE_QUALIFIER);

    Concept oConcept;
    oConcept.set(eAFFIRMATION_YES, "yes");
    addConcept(oConcept);
    oConcept.set(eAFFIRMATION_NO, "no");                         
    addConcept(oConcept);
    oConcept.set(eAFFIRMATION_MAYBE, "maybe");                      
    addConcept(oConcept);
    oConcept.set(eAFFIRMATION_TOO, "too");                   
    addConcept(oConcept);
    oConcept.set(eAFFIRMATION_NEITHER, "neither");                        
    addConcept(oConcept);
    oConcept.set(eAFFIRMATION_OK, "ok");       
    addConcept(oConcept);
}
}