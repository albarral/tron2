#ifndef __TRON2_CONCEPTS_CONCEPT_H
#define __TRON2_CONCEPTS_CONCEPT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron/util/groups/Element.h"

namespace tron2
{
// Class representing a concept. 
// It's an element with a given nature, that is grouped in categories.
class Concept : public tron::Element
{
public:
    enum eNature
    {
        eNATURE_ACTION,
        eNATURE_OBJECT,
        eNATURE_QUALIFIER
    };
    
protected:
    int nature;      // concept's nature

public:
    Concept();
    Concept(int id, std::string name);
    //~Concept();
    
    void set(int id, std::string name);
    void setNature(int value) {nature = value;};
    int getNature() {return nature;}; 

    bool isAction() {return (nature == eNATURE_ACTION);};
    bool isObject() {return (nature == eNATURE_OBJECT);};
    bool isQualifier() {return (nature == eNATURE_QUALIFIER);};
    
    virtual std::string toString();
};

}  

#endif
