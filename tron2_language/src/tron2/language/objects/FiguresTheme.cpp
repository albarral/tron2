/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/objects/FiguresTheme.h"
#include "tron2/language/Language.h"
#include "tron2/language/categories/ObjectsCategory.h"

namespace tron2
{

FiguresTheme::FiguresTheme() : Theme(Language::eLANGUAGE_OBJECT, ObjectsCategory::eOBJECT_FIGURE)
{
    // build theme
    build();    
}

void FiguresTheme::build()
{
    addCode(eFIGURE_CIRCLE, FIGURE_CIRCLE);
    addCode(eFIGURE_ELLIPSE, FIGURE_ELLIPSE);                         
    addCode(eFIGURE_SQUARE, FIGURE_SQUARE);                      
    addCode(eFIGURE_RECTANGLE, FIGURE_RECTANGLE);                   
    addCode(eFIGURE_TRIANGLE, FIGURE_TRIANGLE);                        
    addCode(eFIGURE_LINE, FIGURE_LINE);                        
    addCode(eFIGURE_WAVE, FIGURE_WAVE);                        
}
}