#ifndef __TRON2_LANGUAGE_LANGUAGE_H
#define __TRON2_LANGUAGE_LANGUAGE_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/
 
#include <string>

namespace tron2
{
/** 
 * Definition of language categories
 */
class Language
{
public:     
    /*! language categories */
    enum eCategory
    {
        eLANGUAGE_ACTION,                /*! actions category */
        eLANGUAGE_FEATURE,             /*! features category */
        eLANGUAGE_OBJECT,                /*! objects category */
        eLANGUAGE_CATEGORY,         /*! categories category (special category to hold language categories) */
        eLANGUAGE_DIM
    };
    
    /*! name of language categories */
    static const std::string LANGUAGE_ACTION;
    static const std::string LANGUAGE_FEATURE;
    static const std::string LANGUAGE_OBJECT;
    static const std::string LANGUAGE_CATEGORY;
    
public:
    // get name of given category
    static std::string getName4Category(int category);
};
}
#endif
