#ifndef __TRON2_TALKY_TALKER_H
#define __TRON2_TALKY_TALKER_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include <string>

#include "tron/util/CodeMap.h"
#include "tron2/robot/Topic.h"

namespace tron2
{
/** 
 * Base class used to build & interpret messages of a given topic.
 */
class Talker
{
public:
    static const int MSG_FIELDS = 2;                    /*! number of fields in message */ 
    static const std::string FIELD_SEPARATOR;      /*! character used to separate fields in message */
    
protected:
    static log4cxx::LoggerPtr logger;
    bool btuned;                                        /*! talker is tuned to a topic */    
    int topic;                                              /*! associated topic */    
    std::string name;                                  /*! talker name */     
    tron::CodeMap oCodeMap;                      /*! code map for known concepts */    
    
public:
    Talker();              	
    ~Talker();

    bool isTuned() {return btuned;};
    int getTopic() {return topic;};        
    std::string getName() {return name;};
    
    // tune talker for given topic
    void tune4Topic(Topic& Topic);
    
    // build message with given code and value
    // returns true if message could be built
    bool buildMessage(int code, float value, std::string& message);

    // interprets given message informing given code and value
    // returns true if message could be interpreted
    bool interpretMessage(std::string message, int& code, float& value);
    
    // get description of all concepts known by the talker
    std::string getKnownConcepts();    
};
}
#endif
