#ifndef __TRON2_LANGUAGE_OBJECTS_CATEGORY_H
#define __TRON2_LANGUAGE_OBJECTS_CATEGORY_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/language/Theme.h"

namespace tron2
{
// Definition of themes composing the objects category.
 class ObjectsCategory : public Theme
{
 public:
    /*! theme codes  */
    enum eCodes
    {
         eOBJECT_FIGURE,                       
         eOBJECT_FEELING,                       
         eOBJECT_DIM
    };

    /*! code names */
    const std::string OBJECT_FIGURE = "figure";     
    const std::string OBJECT_FEELING = "feeling";     

 public:    
    ObjectsCategory(); 

    // build theme
    virtual void build();    
};
}
#endif
