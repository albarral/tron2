/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/features/QuantityTheme.h"
#include "tron2/language/TronCategories.h"

namespace tron2
{

QuantityTheme::QuantityTheme() : Theme(TronCategories::eCAT_FEATURES, "quantity")
{
    // build theme
    build();    
}

void QuantityTheme::build()
{
    addCode(eQUANTITY_NOTHING, QUANTITY_NOTHING);
    addCode(eQUANTITY_FEW, QUANTITY_FEW);                         
    addCode(eQUANTITY_NORMAL, QUANTITY_NORMAL);                      
    addCode(eQUANTITY_MANY, QUANTITY_MANY);                   
    addCode(eQUANTITY_ALL, QUANTITY_ALL);                        
}
}