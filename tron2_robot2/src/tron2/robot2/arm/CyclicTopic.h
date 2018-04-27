#ifndef __TRON2_ROBOT2_ARM_CYCLICTOPIC_H
#define __TRON2_ROBOT2_ARM_CYCLICTOPIC_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include "tron2/robot2/Topic.h"

namespace tron2
{
// Concepts definition for the arm cyclic topic
 class CyclicTopic : public Topic
{
 public:
    /*! cycler concepts  */
    enum eCyclicCat
    {
         eCYCLER_MAIN_FREQ,            /*! frequency of cycler main component (Hz) */
         eCYCLER_MAIN_AMP,             /*! amplitude of cycler main component  (degrees) */
         eCYCLER_MAIN_ANGLE,          /*! orientation of cycler main component (degrees) */
         eCYCLER_MAIN_PHASE,          /*! phase of cycler main component (degrees) */
         eCYCLER_SEC_FREQ,            /*! frequency of cycler secondary component (Hz) */
         eCYCLER_SEC_AMP,             /*! amplitude of cycler secondary component (degrees) */
         eCYCLER_SEC_ANGLE,          /*! orientation of cycler secondary component (degrees) */
         eCYCLER_SEC_PHASE,          /*! phase of cycler secondary component (degrees) */
         eCYCLER_ACTION,                  /*! start/stop cycler movement */
         eCYCLIC_DIM
    };

    /*! cycler concept names */
    const std::string CYCLER_MAIN_FREQ = "freq";      /*! frequency of cycler main component (Hz) */
    const std::string CYCLER_MAIN_AMP = "amp";        /*! amplitude of cycler main component (degrees) */
    const std::string CYCLER_MAIN_ANGLE = "angle";      /*! orientation of cycler main component (degrees) */
    const std::string CYCLER_MAIN_PHASE = "phase";  /*! phase of cycler main component (degrees) */
    const std::string CYCLER_SEC_FREQ = "freq2";      /*! frequency of cycler secondary component (Hz) */
    const std::string CYCLER_SEC_AMP = "amp2";        /*! amplitude of cycler secondary component (degrees) */
    const std::string CYCLER_SEC_ANGLE = "angle2";      /*! orientation of cycler secondary component (degrees) */
    const std::string CYCLER_SEC_PHASE = "phase2";  /*! phase of cycler secondary component (degrees) */
    const std::string CYCLER_ACTION = "go";                  /*! start/stop cycler movement */

 public:    
    CyclicTopic(); 
    
 private: 
    virtual void fillConcepts();      
    
};
}
#endif
