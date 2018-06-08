#ifndef __TRON2_BLOCKS_CONCEPT_H
#define __TRON2_BLOCKS_CONCEPT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/base/Element.h"

namespace tron2
{
// Class representing a concept. 
// It's a group element with a given nature, that is grouped in categories.
class Concept : public Element
{
protected:
    int nature;      // concept's nature

public:
    Concept();
    Concept(int id, std::string name);
    //~Concept();
    
    void set(int id, std::string name);
    void setNature(int value) {nature = value;};
    int getNature() {return nature;}; 
    
    virtual std::string toString();
};

}  

#endif
