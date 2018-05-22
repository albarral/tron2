#ifndef __TRON2_LISTEN_WORD_PROCESSOR_H
#define __TRON2_LISTEN_WORD_PROCESSOR_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include <map>
#include <string>
#include <vector>

#include "tron2/listen/LetterProcessor.h"
#include "tron2/concepts/Knowledge.h"

namespace tron2
{
/** 
 * Class used to interpret words. 
 * It works with a set of letter processors, each tuned for a given letter.
 */
class WordProcessor 
{
private:
    static log4cxx::LoggerPtr logger;
    std::string processorName;
    std::vector<char> listLetters;                                  /*! processor letters */     
    std::map<char, LetterProcessor> mapProcessors;   /*! processors map */     
    
public:
    WordProcessor();              	
    ~WordProcessor();

    std::string getName() {return processorName;};
    
    // add new processor's letter
    void addLetter(char value);
    std::vector<char>& getListLetters() {return listLetters;};
    void reset();
        
    // set knowledge of all letter processors
    void setKnowledge(Knowledge& oKnowledge);
   
    // interprets given word returning the corresponding concept (pointer)
    // returns 0 if word is unknown
    tron::Element* interpretWord(std::string& word);    
};
}
#endif
