/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/features/SizeTheme.h"
#include "tron2/language/TronCategories.h"

namespace tron2
{

SizeTheme::SizeTheme() : Theme(TronCategories::eCAT_FEATURES, "size")
{
    // build theme
    build();    
}

void SizeTheme::build()
{
    addCode(eSIZE_BIG, SIZE_BIG);
    addCode(eSIZE_SMALL, SIZE_SMALL);                         
    addCode(eSIZE_BIGGER, SIZE_BIGGER);                      
    addCode(eSIZE_SMALLER, SIZE_SMALLER);                   
    addCode(eSIZE_BIGGEST, SIZE_BIGGEST);                        
    addCode(eSIZE_SMALLEST, SIZE_SMALLEST);                        
}
}