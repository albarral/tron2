#ifndef __TRON2_LANGUAGE_THEME_H
#define __TRON2_LANGUAGE_THEME_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/
 
#include <string>
#include "tron/util/CodeMap.h"

namespace tron2
{
/** 
 * Base class used to define language themes.
 * It's essentially a codes map.
 */
class Theme : public tron::CodeMap
{
protected:
    int category;                     /*! theme's category */    
    //int id;                               /*! theme's id */    
    std::string name;              /*! theme's name */ 
    
public:
    Theme();              	
    Theme(int category, std::string name);              	
    //~Theme();

    int getCategory() {return category;};    
    //int getID() {return id;};     
    std::string getName() {return name;}
    
    // build theme
    virtual void build() = 0;

    // get description of all theme codes
    virtual std::string toString();
};
}
#endif
