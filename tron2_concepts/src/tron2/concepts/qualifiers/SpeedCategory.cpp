/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/qualifiers/SpeedCategory.h"
#include "tron2/concepts/qualifiers/QualifierCategories.h"

namespace tron2
{
SpeedCategory::SpeedCategory() : Category(QualifierCategories::eQUALIFIERS_SPEED, "speed")
{
    setNature(tron2::Concept::eNATURE_QUALIFIER);

    Concept oConcept;
    oConcept.set(eSPEED_FAST, "fast");
    addConcept(oConcept);
    oConcept.set(eSPEED_SLOW, "slow");                         
    addConcept(oConcept);
}
}