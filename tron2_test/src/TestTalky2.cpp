/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <unistd.h>

#include "TestTalky2.h"
#include "aux/JointChannelServer.h"
#include "tron2/robot/RobotNodes.h"
#include "tron2/robot/topics/ArmTopics.h"
#include "tron2/talky/arm/ArmClient.h"
#include "tron2/talky/arm/JointTalker.h"
#include "tron2/talky/body/BodyClient.h"
#include "tron2/talky/channel/ChannelPublisher.h"

using namespace log4cxx;

LoggerPtr TestTalky2::logger(Logger::getLogger("tron"));

// Constructor 
TestTalky2::TestTalky2()
{    
 }

void TestTalky2::makeTest()
{
    LOG4CXX_INFO(logger, "TestTalky2: test start \n");

    //testUnicastComs();
    
    testBroadcastComs();
        
    LOG4CXX_INFO(logger, "TestTalky2: test end \n");
}


void TestTalky2::testUnicastComs()
{
    LOG4CXX_INFO(logger, "TestTalky2::testUnicastComs \n");

    /*
    tron2::ArmClient oArmClient;
    tron2::JointChannelServer oJointChannelServer;

    float value = 10.0;
    oArmClient.setHS(value++);
    oArmClient.setVS(value++);
    oArmClient.setELB(value++);
    oArmClient.setHWRI(value++);
    oArmClient.setVWRI(value++);

    // serve joint commands
    checkServerChannel(oJointChannelServer);
     */
    
    tron2::BodyClient oBodyClient;
    oBodyClient.expressFeeling(10);
    oBodyClient.endNode();
}


void TestTalky2::testBroadcastComs()
{
    LOG4CXX_INFO(logger, "TestTalky2::testBroadcastComs \n");

//    ChannelPublisher oChannelPublisher(RobotNodes::eNODE_ARM, ArmTopics::eARM_JOINT);
//
//    float value = 80.0;
//
//    oChannelPublisher.clearChannel();
//    oChannelPublisher.addMessage(JointTalker::eJOINT_HS_POS, value++);
//    oChannelPublisher.addMessage(JointTalker::eJOINT_VS_POS, value++);
//    oChannelPublisher.addMessage(JointTalker::eJOINT_ELB_POS, value++);
//    oChannelPublisher.addMessage(JointTalker::eJOINT_HWRI_POS, value++);
//    oChannelPublisher.addMessage(JointTalker::eJOINT_VWRI_POS, value++);    
//    oChannelPublisher.publishAll();
    
    tron2::ArmListener oArmListener;

    int iteration = 0;

    while (iteration < 10)
    {
        iteration++;
        LOG4CXX_WARN(logger, "TestTalky2: iteration " << iteration);            
        // interpret test message
        if (oArmListener.senseChannels())
        {
            tron2::JointsData& jointsData = oArmListener.getJointPositions();
            //showArmJointsData(jointsData);

            tron2::AxesData& axesPositions = oArmListener.getAxesPositions();
            tron2::AxesData& axesSpeeds = oArmListener.getAxesSpeeds();
            showArmAxesData(axesPositions, axesSpeeds);
        }
        else
        {
            LOG4CXX_WARN(logger, "TestTalky2: arm listener failed!");            
        }
        usleep(2000000);
    }
}


void TestTalky2::checkServerChannel(tron2::ChannelServer& oChannelServer)
{    
    LOG4CXX_INFO(logger, "TestTalky2::checkServerChannel ...");

    // get messages in channel
    if (oChannelServer.senseChannel())
    {
        // and process them
        oChannelServer.processCommands();
    }
    // warn if no messages read
    else
    {
        LOG4CXX_WARN(logger, "TestTalky2: no messages in channel ...");
    }
}

void TestTalky2::showArmJointsData(tron2::JointsData& jointsData)
{
    // show obtained values
    LOG4CXX_INFO(logger, "TestTalky2: sensed HS < " << std::to_string(jointsData.hs));
    LOG4CXX_INFO(logger, "TestTalky2: sensed VS < " << std::to_string(jointsData.vs));
    LOG4CXX_INFO(logger, "TestTalky2: sensed EL < " << std::to_string(jointsData.elb));
    LOG4CXX_INFO(logger, "TestTalky2: sensed HW < " << std::to_string(jointsData.hwri));
    LOG4CXX_INFO(logger, "TestTalky2: sensed VW < " << std::to_string(jointsData.vwri));
}

void TestTalky2::showArmAxesData(tron2::AxesData& axesPositions, tron2::AxesData& axesSpeeds)
{
    // show obtained values
    LOG4CXX_INFO(logger, "TestTalky2: sensed pan < " << std::to_string(axesPositions.pan));
    LOG4CXX_INFO(logger, "TestTalky2: sensed tilt < " << std::to_string(axesPositions.tilt));
    LOG4CXX_INFO(logger, "TestTalky2: sensed radial < " << std::to_string(axesPositions.radial));

    LOG4CXX_INFO(logger, "TestTalky2: sensed vpan < " << std::to_string(axesSpeeds.pan));
    LOG4CXX_INFO(logger, "TestTalky2: sensed vtilt < " << std::to_string(axesSpeeds.tilt));
    LOG4CXX_INFO(logger, "TestTalky2: sensed vradial < " << std::to_string(axesSpeeds.radial));
}

