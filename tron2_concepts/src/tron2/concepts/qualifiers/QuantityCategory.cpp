/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/qualifiers/QuantityCategory.h"
#include "tron2/concepts/qualifiers/QualifierCategories.h"

namespace tron2
{
QuantityCategory::QuantityCategory() : Category(QualifierCategories::eQUALIFIERS_QUANTITY, "quantity")
{
    setNature(tron2::Concept::eNATURE_QUALIFIER);

    Concept oConcept;
    oConcept.set(eQUANTITY_MORE, "more");
    addConcept(oConcept);
    oConcept.set(eQUANTITY_LESS, "less");                         
    addConcept(oConcept);
    oConcept.set(eQUANTITY_MUCH, "much");                      
    addConcept(oConcept);
    oConcept.set(eQUANTITY_FEW, "few");                   
    addConcept(oConcept);
    oConcept.set(eQUANTITY_VERY, "very");                        
    addConcept(oConcept);
    oConcept.set(eQUANTITY_ALL, "all");       
    addConcept(oConcept);
    oConcept.set(eQUANTITY_NOTHING, "nothing");       
    addConcept(oConcept);
    oConcept.set(eQUANTITY_ENOUGH, "enough");       
    addConcept(oConcept);
    oConcept.set(eQUANTITY_EQUAL, "equal");       
    addConcept(oConcept);    
    oConcept.set(eQUANTITY_ALMOST, "almost");       
    addConcept(oConcept);    
}
}