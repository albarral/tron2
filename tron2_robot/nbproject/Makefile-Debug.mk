#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/tron2/robot/Node.o \
	${OBJECTDIR}/src/tron2/robot/RobotNetwork.o \
	${OBJECTDIR}/src/tron2/robot/RobotSystem.o \
	${OBJECTDIR}/src/tron2/robot/Topic.o \
	${OBJECTDIR}/src/tron2/robot/body/ArtisticTopic.o \
	${OBJECTDIR}/src/tron2/robot/body/BodyNode.o \
	${OBJECTDIR}/src/tron2/robot/body/ExpressiveTopic.o \
	${OBJECTDIR}/src/tron2/robot/common/ExtraTopic.o \
	${OBJECTDIR}/src/tron2/robot/system/TronRobot.o \
	${OBJECTDIR}/src/tron2/robot/vision/FocusTopic.o \
	${OBJECTDIR}/src/tron2/robot/vision/VisionNode.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-Wl,-rpath,../../tron/tron_util/dist/Debug/GNU-Linux -L../../tron/tron_util/dist/Debug/GNU-Linux -ltron_util

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_robot.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_robot.${CND_DLIB_EXT}: ../../tron/tron_util/dist/Debug/GNU-Linux/libtron_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_robot.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_robot.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron2/robot/Node.o: src/tron2/robot/Node.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/Node.o src/tron2/robot/Node.cpp

${OBJECTDIR}/src/tron2/robot/RobotNetwork.o: src/tron2/robot/RobotNetwork.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/RobotNetwork.o src/tron2/robot/RobotNetwork.cpp

${OBJECTDIR}/src/tron2/robot/RobotSystem.o: src/tron2/robot/RobotSystem.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/RobotSystem.o src/tron2/robot/RobotSystem.cpp

${OBJECTDIR}/src/tron2/robot/Topic.o: src/tron2/robot/Topic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/Topic.o src/tron2/robot/Topic.cpp

${OBJECTDIR}/src/tron2/robot/body/ArtisticTopic.o: src/tron2/robot/body/ArtisticTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot/body
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/body/ArtisticTopic.o src/tron2/robot/body/ArtisticTopic.cpp

${OBJECTDIR}/src/tron2/robot/body/BodyNode.o: src/tron2/robot/body/BodyNode.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot/body
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/body/BodyNode.o src/tron2/robot/body/BodyNode.cpp

${OBJECTDIR}/src/tron2/robot/body/ExpressiveTopic.o: src/tron2/robot/body/ExpressiveTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot/body
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/body/ExpressiveTopic.o src/tron2/robot/body/ExpressiveTopic.cpp

${OBJECTDIR}/src/tron2/robot/common/ExtraTopic.o: src/tron2/robot/common/ExtraTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot/common
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/common/ExtraTopic.o src/tron2/robot/common/ExtraTopic.cpp

${OBJECTDIR}/src/tron2/robot/system/TronRobot.o: src/tron2/robot/system/TronRobot.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot/system
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/system/TronRobot.o src/tron2/robot/system/TronRobot.cpp

${OBJECTDIR}/src/tron2/robot/vision/FocusTopic.o: src/tron2/robot/vision/FocusTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot/vision
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/vision/FocusTopic.o src/tron2/robot/vision/FocusTopic.cpp

${OBJECTDIR}/src/tron2/robot/vision/VisionNode.o: src/tron2/robot/vision/VisionNode.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot/vision
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot/vision/VisionNode.o src/tron2/robot/vision/VisionNode.cpp

# Subprojects
.build-subprojects:
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_robot.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
