/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/listen/WordProcessor.h"

using namespace log4cxx;

namespace tron2
{
LoggerPtr WordProcessor::logger(Logger::getLogger("tron2.listen"));

WordProcessor::WordProcessor()
{
    processorName = "WordProcessor";
}

WordProcessor::~WordProcessor()
{
    reset();
}

void WordProcessor::addLetter(char value)
{
    listLetters.push_back(value);
    // create new letter processor for given letter and add it to processors map
    LetterProcessor oLetterProcessor;
    oLetterProcessor.setLetter(value);
    mapProcessors.emplace(value, oLetterProcessor);
}

void WordProcessor::reset()
{
    listLetters.clear();
    mapProcessors.clear();
}

void WordProcessor::setKnowledge(Knowledge& oKnowledge)
{
    // walk all letter processors and load the given knowledge for them
    for (auto& x: mapProcessors) 
    {
        x.second.loadKnowledge(oKnowledge);
    }
}

tron::Element* WordProcessor::interpretWord(std::string& word)
{           
    // find proper letter processor for given word
    std::map<char, LetterProcessor>::iterator it = mapProcessors.find(word.front());

    // if found, process word
    if (it != mapProcessors.end())
        return it->second.interpretWord(word);
    else
    {
        LOG4CXX_WARN(logger, processorName + ": no letter processor for word " + word);   
        return 0;        
    }
}

}