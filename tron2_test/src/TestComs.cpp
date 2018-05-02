/***************************************************************************
 *   Copyright (C) 2018 by Migtron Robotics   *
 *   albarral@migtron.com   *
 ***************************************************************************/

#include <unistd.h>

#include "TestComs.h"
#include "aux/JointChannelServer.h"
#include "tron2/coms/arm/ArmClient.h"
#include "tron2/coms/body/BodyClient.h"
#include "tron2/coms/ChannelPublisher.h"

using namespace log4cxx;

LoggerPtr TestComs::logger(Logger::getLogger("tron"));

// Constructor 
TestComs::TestComs()
{    
 }

void TestComs::makeTest()
{
    LOG4CXX_INFO(logger, "TestComs: test start \n");

    //testUnicastComs();
    
    testBroadcastComs();
        
    LOG4CXX_INFO(logger, "TestComs: test end \n");
}


void TestComs::testUnicastComs()
{
    LOG4CXX_INFO(logger, "TestComs::testUnicastComs \n");

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


void TestComs::testBroadcastComs()
{
    LOG4CXX_INFO(logger, "TestComs::testBroadcastComs \n");

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
        LOG4CXX_WARN(logger, "TestComs: iteration " << iteration);            
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
            LOG4CXX_WARN(logger, "TestComs: arm listener failed!");            
        }
        usleep(2000000);
    }
}


void TestComs::checkServerChannel(tron2::ChannelServer& oChannelServer)
{    
    LOG4CXX_INFO(logger, "TestComs::checkServerChannel ...");

    // get messages in channel
    if (oChannelServer.senseChannel())
    {
        // and process them
        oChannelServer.processCommands();
    }
    // warn if no messages read
    else
    {
        LOG4CXX_WARN(logger, "TestComs: no messages in channel ...");
    }
}

void TestComs::showArmJointsData(tron2::JointsData& jointsData)
{
    // show obtained values
    LOG4CXX_INFO(logger, "TestComs: sensed HS < " << std::to_string(jointsData.hs));
    LOG4CXX_INFO(logger, "TestComs: sensed VS < " << std::to_string(jointsData.vs));
    LOG4CXX_INFO(logger, "TestComs: sensed EL < " << std::to_string(jointsData.elb));
    LOG4CXX_INFO(logger, "TestComs: sensed HW < " << std::to_string(jointsData.hwri));
    LOG4CXX_INFO(logger, "TestComs: sensed VW < " << std::to_string(jointsData.vwri));
}

void TestComs::showArmAxesData(tron2::AxesData& axesPositions, tron2::AxesData& axesSpeeds)
{
    // show obtained values
    LOG4CXX_INFO(logger, "TestComs: sensed pan < " << std::to_string(axesPositions.pan));
    LOG4CXX_INFO(logger, "TestComs: sensed tilt < " << std::to_string(axesPositions.tilt));
    LOG4CXX_INFO(logger, "TestComs: sensed radial < " << std::to_string(axesPositions.radial));

    LOG4CXX_INFO(logger, "TestComs: sensed vpan < " << std::to_string(axesSpeeds.pan));
    LOG4CXX_INFO(logger, "TestComs: sensed vtilt < " << std::to_string(axesSpeeds.tilt));
    LOG4CXX_INFO(logger, "TestComs: sensed vradial < " << std::to_string(axesSpeeds.radial));
}

