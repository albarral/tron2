#ifndef _TRON2_KNOWLEDGE_KNOWLEDGE_H
#define _TRON2_KNOWLEDGE_KNOWLEDGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <map>
#include <log4cxx/logger.h>

#include "tron2/knowledge/Concept.h"
#include "tron2/knowledge/Slang.h"
#include "tron2/language/Theme.h"

namespace tron2
{
// The knowledge holds a set of knowledge areas, each holding all concept categories of a given nature.    
class Knowledge
{
private:
    static log4cxx::LoggerPtr logger;
    std::map<char, Slang> mapSlangs; // map <letter, slang> 

public:
    Knowledge();
    ~Knowledge ();
    
    void clear();
    int getNumSlangs() {return mapSlangs.size();};    

    // add given language theme
    void addTheme(Theme& oTheme);
    // add specified concept
    bool addConcept(Concept& oConcept);
    
    // search concept for given word (concept name)
    Concept* interpret(std::string word);

    std::string toString();    
    
private:
    // get slang for the specified letter, returns null if not found
    Slang* getSlang(char letter);        
};

}  

#endif
