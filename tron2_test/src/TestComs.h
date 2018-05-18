#ifndef __TRON2_TEST_COMS_H
#define __TRON2_TEST_COMS_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron2/coms/arm/ArmListener.h"
#include "tron2/coms/ChannelServer.h"
#include "tron2/robot/arm/ArmSensors.h"


// Class used to test tron2_coms lib.
class TestComs
{
private:
    static log4cxx::LoggerPtr logger;

public:
    TestComs();
    //~TestComs();

    void makeTest();      
    
private:
    void testUnicastComs();      
    void testBroadcastComs();      
    void testArmJointTalker();      
    
    // receive commands
    void checkServerChannel(tron2::ChannelServer& oChannelServer);
    
    void showArmJointsData(tron2::JointsData& jointsData);                
    void showArmAxesData(tron2::AxesData& axesPositions, tron2::AxesData& axesSpeeds);                
};

#endif
