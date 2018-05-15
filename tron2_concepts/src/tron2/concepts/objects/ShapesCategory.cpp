/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/concepts/objects/ShapesCategory.h"
#include "tron2/concepts/objects/ObjectCategories.h"

namespace tron2
{
ShapesCategory::ShapesCategory() : Category(ObjectCategories::eOBJECTS_SHAPES, "shapes")
{
    setNature(tron2::Concept::eNATURE_OBJECT);

    Concept oConcept;
    oConcept.set(eSHAPE_CIRCLE, "circle");
    addConcept(oConcept);
    oConcept.set(eSHAPE_SQUARE, "square");                         
    addConcept(oConcept);
    oConcept.set(eSHAPE_ELLIPSE, "ellipse");                      
    addConcept(oConcept);
    oConcept.set(eSHAPE_RECTANGLE, "rectangle");       
    addConcept(oConcept);
    oConcept.set(eSHAPE_TRIANGLE, "triangle");                   
    addConcept(oConcept);
    oConcept.set(eSHAPE_LINE, "line");                        
    addConcept(oConcept);
    oConcept.set(eSHAPE_POINT, "point");       
    addConcept(oConcept);
    addConcept(oConcept);
}
}