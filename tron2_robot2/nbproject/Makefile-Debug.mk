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
	${OBJECTDIR}/src/tron2/robot2/Node.o \
	${OBJECTDIR}/src/tron2/robot2/RobotSystem.o \
	${OBJECTDIR}/src/tron2/robot2/Topic.o \
	${OBJECTDIR}/src/tron2/robot2/arm/ArmNode.o \
	${OBJECTDIR}/src/tron2/robot2/arm/AxisTopic.o \
	${OBJECTDIR}/src/tron2/robot2/arm/CyclicTopic.o \
	${OBJECTDIR}/src/tron2/robot2/arm/JointTopic.o \
	${OBJECTDIR}/src/tron2/robot2/body/ArtisticTopic.o \
	${OBJECTDIR}/src/tron2/robot2/body/BodyNode.o \
	${OBJECTDIR}/src/tron2/robot2/body/ExpressiveTopic.o \
	${OBJECTDIR}/src/tron2/robot2/common/ExtraTopic.o \
	${OBJECTDIR}/src/tron2/robot2/system/TronRobot.o \
	${OBJECTDIR}/src/tron2/robot2/vision/FocusTopic.o \
	${OBJECTDIR}/src/tron2/robot2/vision/VisionNode.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_robot2.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_robot2.${CND_DLIB_EXT}: ../../tron/tron_util/dist/Debug/GNU-Linux/libtron_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_robot2.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_robot2.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron2/robot2/Node.o: src/tron2/robot2/Node.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/Node.o src/tron2/robot2/Node.cpp

${OBJECTDIR}/src/tron2/robot2/RobotSystem.o: src/tron2/robot2/RobotSystem.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/RobotSystem.o src/tron2/robot2/RobotSystem.cpp

${OBJECTDIR}/src/tron2/robot2/Topic.o: src/tron2/robot2/Topic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/Topic.o src/tron2/robot2/Topic.cpp

${OBJECTDIR}/src/tron2/robot2/arm/ArmNode.o: src/tron2/robot2/arm/ArmNode.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/arm
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/arm/ArmNode.o src/tron2/robot2/arm/ArmNode.cpp

${OBJECTDIR}/src/tron2/robot2/arm/AxisTopic.o: src/tron2/robot2/arm/AxisTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/arm
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/arm/AxisTopic.o src/tron2/robot2/arm/AxisTopic.cpp

${OBJECTDIR}/src/tron2/robot2/arm/CyclicTopic.o: src/tron2/robot2/arm/CyclicTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/arm
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/arm/CyclicTopic.o src/tron2/robot2/arm/CyclicTopic.cpp

${OBJECTDIR}/src/tron2/robot2/arm/JointTopic.o: src/tron2/robot2/arm/JointTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/arm
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/arm/JointTopic.o src/tron2/robot2/arm/JointTopic.cpp

${OBJECTDIR}/src/tron2/robot2/body/ArtisticTopic.o: src/tron2/robot2/body/ArtisticTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/body
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/body/ArtisticTopic.o src/tron2/robot2/body/ArtisticTopic.cpp

${OBJECTDIR}/src/tron2/robot2/body/BodyNode.o: src/tron2/robot2/body/BodyNode.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/body
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/body/BodyNode.o src/tron2/robot2/body/BodyNode.cpp

${OBJECTDIR}/src/tron2/robot2/body/ExpressiveTopic.o: src/tron2/robot2/body/ExpressiveTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/body
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/body/ExpressiveTopic.o src/tron2/robot2/body/ExpressiveTopic.cpp

${OBJECTDIR}/src/tron2/robot2/common/ExtraTopic.o: src/tron2/robot2/common/ExtraTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/common
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/common/ExtraTopic.o src/tron2/robot2/common/ExtraTopic.cpp

${OBJECTDIR}/src/tron2/robot2/system/TronRobot.o: src/tron2/robot2/system/TronRobot.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/system
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/system/TronRobot.o src/tron2/robot2/system/TronRobot.cpp

${OBJECTDIR}/src/tron2/robot2/vision/FocusTopic.o: src/tron2/robot2/vision/FocusTopic.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/vision
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/vision/FocusTopic.o src/tron2/robot2/vision/FocusTopic.cpp

${OBJECTDIR}/src/tron2/robot2/vision/VisionNode.o: src/tron2/robot2/vision/VisionNode.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/robot2/vision
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/robot2/vision/VisionNode.o src/tron2/robot2/vision/VisionNode.cpp

# Subprojects
.build-subprojects:
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_robot2.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
