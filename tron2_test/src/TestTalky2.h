#ifndef __TRON2_TEST_TALKY2_H
#define __TRON2_TEST_TALKY2_H

/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <log4cxx/logger.h>

#include "tron2/talky/arm/ArmListener.h"
#include "tron2/talky/channel/ChannelServer.h"
#include "tron2/robot/sensors/ArmSensors.h"


// Class used to test coms with libtron2_talky.
class TestTalky2
{
private:
    static log4cxx::LoggerPtr logger;

public:
    TestTalky2();
    //~TestTalky2();

    void makeTest();      
    
private:
    void testUnicastComs();      
    void testBroadcastComs();      

    // receive commands
    void checkServerChannel(tron2::ChannelServer& oChannelServer);
    
    void showArmJointsData(tron2::JointsData& jointsData);                
    void showArmAxesData(tron2::AxesData& axesPositions, tron2::AxesData& axesSpeeds);                
};

#endif
