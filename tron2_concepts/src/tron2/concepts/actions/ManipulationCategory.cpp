/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/actions/ManipulationCategory.h"
#include "tron2/concepts/actions/ActionCategories.h"

namespace tron2
{
ManipulationCategory::ManipulationCategory() : Category(ActionCategories::eACTIONS_MANIPULATION, "manipulation")
{
    setNature(tron2::Concept::eNATURE_ACTION);

    Concept oConcept;
    oConcept.set(eMANIPULATION_TAKE, "take");
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_PLACE, "place");                         
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_PUSH, "push");                      
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_PULL, "pull");                   
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_GRASP, "grasp");                        
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_RELEASE, "release");       
    addConcept(oConcept);
    oConcept.set(eMANIPULATION_WAVE, "wave");       
    addConcept(oConcept);
}
}