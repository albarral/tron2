/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/features/LengthTheme.h"
#include "tron2/language/TronCategories.h"

namespace tron2
{

LengthTheme::LengthTheme() : Theme(TronCategories::eCAT_FEATURES, "length")
{
    // build theme
    build();    
}

void LengthTheme::build()
{
    addCode(eLENGTH_LONG, LENGTH_LONG);
    addCode(eLENGTH_SHORT, LENGTH_SHORT);                         
    addCode(eLENGTH_LONGER, LENGTH_LONGER);                      
    addCode(eLENGTH_SHORTER, LENGTH_SHORTER);                   
    addCode(eLENGTH_LONGEST, LENGTH_LONGEST);                        
    addCode(eLENGTH_SHORTEST, LENGTH_SHORTEST);                        
}
}