#ifndef __TRON2_CONCEPTS_CATEGORY_H
#define __TRON2_CONCEPTS_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <vector>

#include "tron2/concepts/Concept.h"

namespace tron2
{
// A category is a group of concepts.
// The concepts in a category share a same nature (action, object or qualifier) and are associated to a common feature.
// Colors are a category, shapes are another ...
// A category is itself a concept
class Category : public Concept 
{
protected:
    std::vector<Concept> listConcepts; 

public:
    Category();
    Category(int id, std::string name);
    ~Category();
    
    void clear();
    virtual void addConcept(Concept& oConcept);
    std::vector<Concept>& getConcepts() {return listConcepts;};
    int getNumConcepts() {return listConcepts.size();};    

    virtual std::string toString();
};

}  

#endif
