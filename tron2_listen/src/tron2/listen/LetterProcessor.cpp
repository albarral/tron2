/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/listen/LetterProcessor.h"
#include "tron2/concepts/Category.h"
#include "tron2/concepts/Concept.h"


using namespace log4cxx;

namespace tron2
{
LoggerPtr LetterProcessor::logger(Logger::getLogger("tron2.listen"));

LetterProcessor::LetterProcessor()
{
    processorName = "LetterProcessor";
    letter = ' ';
}

//LetterProcessor::~LetterProcessor()
//{
//}

void LetterProcessor::setLetter(char value)
{
    letter = value;
    processorName = "LetterProcessor" + std::to_string(letter);
}

void LetterProcessor::loadKnowledge(Knowledge& oKnowledge)
{
    // walk knowledge categories
    for (Category& oCategory : oKnowledge.getCategories())
    {
        // walk category concepts
        for (Concept& oConcept : oCategory.getConcepts())
        {
            // if concept starts with the proper letter, add it to the processor's knowledge
            if (oConcept.getName().front() == letter)
            {
                int pos = listConcepts.size();
                listConcepts.push_back(oConcept);
                // also add to CodeInterpreter knowledge
                // code id = concept position in concepts list
                // code name = concept name
                tron::CodeInterpreter::addKnowledge(pos, oConcept.getName());
            }
        }
    }
}

tron::Element* LetterProcessor::interpretWord(std::string word)
{           
    // check if code interpreter knows the concept name
    int code = tron::CodeInterpreter::interpretCode(word);

    // if known, return the concept (the obtained code is the concept's position in the list)
    if (code != -1)
    {            
        // safety check
        if (code < listConcepts.size())
        {
            return &(listConcepts.at(code));
        }
        // trace incoherent codes (shouldn't happen)
        else
        {
            LOG4CXX_ERROR(logger, processorName + ": known concept " + word + ", but incoherent code obtained " + std::to_string(code));          
            return 0;
        }
    }
    // unknown concept 
    else
    {
        LOG4CXX_WARN(logger, processorName + ": unknown concept " + word);   
        return 0;
    }
}

}