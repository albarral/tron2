#ifndef __TRON2_LISTEN_LETTER_PROCESSOR_H
#define __TRON2_LISTEN_LETTER_PROCESSOR_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include <string>
#include <vector>

#include "tron/util/CodeInterpreter.h"
#include "tron/util/Try.h"
#include "tron/util/groups/Element.h"
#include "tron2/concepts/Knowledge.h"

namespace tron2
{
/** 
 * Class used to interpret words starting with a specific letter.
 * The processor works with a limited knowledge (list of concepts), all starting with the processor's letter.
 * It's basically a CodeInterpreter whose codes are:
 * - code id = concept position in concepts list
 * - code name = concept name
 */
class LetterProcessor : public tron::CodeInterpreter
{
private:
    static log4cxx::LoggerPtr logger;
    std::string processorName;
    char letter;                                              /*! processor's letter */    
    std::vector<tron::Element> listConcepts;   /*! processor's knowledge */     
    tron::Try oTry;                                         /*! usage tracker for effectivity measurement */ 
    
public:
    LetterProcessor();              	
    ~LetterProcessor();

    std::string getName() {return processorName;};
    
    // set processor's letter
    void setLetter(char value);
    char getLetter() {return letter;};
    void reset();
        
    // load partial knowledge, that is all concepts starting with the letter
    void loadKnowledge(Knowledge& oKnowledge);
   
    // interprets given word returning the corresponding concept (pointer)
    // returns 0 if word is unknown
    tron::Element* interpretWord(std::string& word);
    
    tron::Try& getUsage() {return oTry;}; 
};
}
#endif
