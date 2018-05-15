/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/actions/MovementCategory.h"
#include "tron2/concepts/actions/ActionCategories.h"

namespace tron2
{
MovementCategory::MovementCategory() : Category(ActionCategories::eACTIONS_MOVEMENT, "movement")
{
    setNature(tron2::Concept::eNATURE_ACTION);

    Concept oConcept;
    oConcept.set(eMOVEMENT_MOVE, "move");
    addConcept(oConcept);
    oConcept.set(eMOVEMENT_RAISE, "raise");                         
    addConcept(oConcept);
    oConcept.set(eMOVEMENT_LOWER, "lower");                      
    addConcept(oConcept);
    oConcept.set(eMOVEMENT_ADVANCE, "advance");                   
    addConcept(oConcept);
    oConcept.set(eMOVEMENT_GOBACK, "go back");                        
    addConcept(oConcept);
    oConcept.set(eMOVEMENT_STOP, "stop");       
    addConcept(oConcept);
}
}