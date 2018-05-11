#ifndef _TRON2_CONCEPTS_KNOWLEDGE_H
#define _TRON2_CONCEPTS_KNOWLEDGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <vector>

#include "tron2/concepts/Concept.h"
#include "tron2/concepts/Category.h"

namespace tron2
{
// A knowledge is a group of categories (groups of concepts).    
// A knowledge is itself a concept.
class Knowledge : public Concept
{
protected:
    std::vector<Category> listCategories; 

public:
    Knowledge();
    Knowledge(int id, std::string name);
    ~Knowledge ();
    
    void clear();
    void addCategory(Category& oCategory);
    std::vector<Category>& getCategories() {return listCategories;};
    int getNumCategories() {return listCategories.size();};    
    
    virtual std::string toString();    
};

}  

#endif
