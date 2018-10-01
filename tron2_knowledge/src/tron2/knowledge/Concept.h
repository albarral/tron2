#ifndef __TRON2_KNOWLEDGE_CONCEPT_H
#define __TRON2_KNOWLEDGE_CONCEPT_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <string>

namespace tron2
{
// Class representing a concept. 
// Each concept belongs to a specific language category and theme. 
class Concept
{
private:
    int category;      // concept category (one of language categories: action, feature or object)
    int theme;         // concept theme (as defined in the language category)
    int code;           // concept code (as defined in the language theme)
    std::string name;   // concept name (as defined in the language theme)

public:
    Concept(int category, int theme, int code, std::string name);
    //~Concept();
    
    void setCategory(int category, int theme);
    void setCode(int code, std::string name);

    int getCategory() {return category;};     
    int getTheme() {return theme;}; 
    int getCode() {return code;}; 
    std::string getName() {return name;}; 
    
    std::string toString();
};

}  

#endif
