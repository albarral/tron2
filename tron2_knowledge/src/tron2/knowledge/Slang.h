#ifndef __TRON2_KNOWLEDGE_SLANG_H
#define __TRON2_KNOWLEDGE_SLANG_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>

#include "tron2/knowledge/Concept.h"

namespace tron2
{
// A Slang is class used for distributing knowledge concepts and allow their faster interpretation. 
// All concepts in a slang share a common property (ie. the initial letter) and are mapped by name.
class Slang 
{
private:
    char letter;     // slang letter (initial letter of all concept names)
    std::map<std::string, Concept> mapConcepts; // map <name, Concept>

public:
    Slang(char letter);
    ~Slang();
    
    char getLetter() {return letter;};
    // gets slang size
    int getSize() {return mapConcepts.size();};    
    
    // clears all slang concepts
    void clear();
    // adds given concept to slang (checking the letter restriction)
    bool addConcept(Concept& oConcept);
    // searches the slang for the given concept name
    Concept* findConcept(std::string word);

    std::string toString();
};

}  

#endif
