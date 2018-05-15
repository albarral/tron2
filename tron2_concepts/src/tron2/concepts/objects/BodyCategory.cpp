/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/objects/BodyCategory.h"
#include "tron2/concepts/objects/ObjectCategories.h"

namespace tron2
{
BodyCategory::BodyCategory() : Category(ObjectCategories::eOBJECTS_BODY, "body")
{
    setNature(tron2::Concept::eNATURE_OBJECT);

    Concept oConcept;
    oConcept.set(eBODY_HEAD, "head");
    addConcept(oConcept);
    oConcept.set(eBODY_ARM, "arm");                         
    addConcept(oConcept);
    oConcept.set(eBODY_ARM_L, "left arm");                      
    addConcept(oConcept);
    oConcept.set(eBODY_ARMS, "arms");       
    addConcept(oConcept);

    oConcept.set(eBODY_HAND, "hand");                   
    addConcept(oConcept);
    oConcept.set(eBODY_HAND_L, "left hand");                        
    addConcept(oConcept);
    oConcept.set(eBODY_HANDS, "hands");       
    addConcept(oConcept);

    oConcept.set(eBODY_LEG, "leg");       
    addConcept(oConcept);
    oConcept.set(eBODY_LEG_L, "left leg");       
    addConcept(oConcept);    
    oConcept.set(eBODY_LEGS, "legs");       
    addConcept(oConcept);
}
}