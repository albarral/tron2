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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/tron2/talky/BasicTalker.o \
	${OBJECTDIR}/src/tron2/talky/Talker.o \
	${OBJECTDIR}/src/tron2/talky/TalkyLanguages.o \
	${OBJECTDIR}/src/tron2/talky/arm/ArmClient.o \
	${OBJECTDIR}/src/tron2/talky/arm/ArmListener.o \
	${OBJECTDIR}/src/tron2/talky/arm/AxisTalker.o \
	${OBJECTDIR}/src/tron2/talky/arm/ChannelSubscriber4Axes.o \
	${OBJECTDIR}/src/tron2/talky/arm/ChannelSubscriber4Joints.o \
	${OBJECTDIR}/src/tron2/talky/arm/CyclicTalker.o \
	${OBJECTDIR}/src/tron2/talky/arm/JointTalker.o \
	${OBJECTDIR}/src/tron2/talky/body/ArtisticTalker.o \
	${OBJECTDIR}/src/tron2/talky/body/BodyClient.o \
	${OBJECTDIR}/src/tron2/talky/body/ExpressiveTalker.o \
	${OBJECTDIR}/src/tron2/talky/channel/ChannelClient.o \
	${OBJECTDIR}/src/tron2/talky/channel/ChannelCommunicator.o \
	${OBJECTDIR}/src/tron2/talky/channel/ChannelPublisher.o \
	${OBJECTDIR}/src/tron2/talky/channel/ChannelServer.o \
	${OBJECTDIR}/src/tron2/talky/channel/ChannelSubscriber.o


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
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_talky.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_talky.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_talky.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron2/talky/BasicTalker.o: src/tron2/talky/BasicTalker.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/BasicTalker.o src/tron2/talky/BasicTalker.cpp

${OBJECTDIR}/src/tron2/talky/Talker.o: src/tron2/talky/Talker.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/Talker.o src/tron2/talky/Talker.cpp

${OBJECTDIR}/src/tron2/talky/TalkyLanguages.o: src/tron2/talky/TalkyLanguages.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/TalkyLanguages.o src/tron2/talky/TalkyLanguages.cpp

${OBJECTDIR}/src/tron2/talky/arm/ArmClient.o: src/tron2/talky/arm/ArmClient.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/arm
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/arm/ArmClient.o src/tron2/talky/arm/ArmClient.cpp

${OBJECTDIR}/src/tron2/talky/arm/ArmListener.o: src/tron2/talky/arm/ArmListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/arm
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/arm/ArmListener.o src/tron2/talky/arm/ArmListener.cpp

${OBJECTDIR}/src/tron2/talky/arm/AxisTalker.o: src/tron2/talky/arm/AxisTalker.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/arm
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/arm/AxisTalker.o src/tron2/talky/arm/AxisTalker.cpp

${OBJECTDIR}/src/tron2/talky/arm/ChannelSubscriber4Axes.o: src/tron2/talky/arm/ChannelSubscriber4Axes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/arm
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/arm/ChannelSubscriber4Axes.o src/tron2/talky/arm/ChannelSubscriber4Axes.cpp

${OBJECTDIR}/src/tron2/talky/arm/ChannelSubscriber4Joints.o: src/tron2/talky/arm/ChannelSubscriber4Joints.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/arm
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/arm/ChannelSubscriber4Joints.o src/tron2/talky/arm/ChannelSubscriber4Joints.cpp

${OBJECTDIR}/src/tron2/talky/arm/CyclicTalker.o: src/tron2/talky/arm/CyclicTalker.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/arm
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/arm/CyclicTalker.o src/tron2/talky/arm/CyclicTalker.cpp

${OBJECTDIR}/src/tron2/talky/arm/JointTalker.o: src/tron2/talky/arm/JointTalker.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/arm
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/arm/JointTalker.o src/tron2/talky/arm/JointTalker.cpp

${OBJECTDIR}/src/tron2/talky/body/ArtisticTalker.o: src/tron2/talky/body/ArtisticTalker.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/body
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/body/ArtisticTalker.o src/tron2/talky/body/ArtisticTalker.cpp

${OBJECTDIR}/src/tron2/talky/body/BodyClient.o: src/tron2/talky/body/BodyClient.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/body
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/body/BodyClient.o src/tron2/talky/body/BodyClient.cpp

${OBJECTDIR}/src/tron2/talky/body/ExpressiveTalker.o: src/tron2/talky/body/ExpressiveTalker.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/body
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/body/ExpressiveTalker.o src/tron2/talky/body/ExpressiveTalker.cpp

${OBJECTDIR}/src/tron2/talky/channel/ChannelClient.o: src/tron2/talky/channel/ChannelClient.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/channel
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/channel/ChannelClient.o src/tron2/talky/channel/ChannelClient.cpp

${OBJECTDIR}/src/tron2/talky/channel/ChannelCommunicator.o: src/tron2/talky/channel/ChannelCommunicator.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/channel
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/channel/ChannelCommunicator.o src/tron2/talky/channel/ChannelCommunicator.cpp

${OBJECTDIR}/src/tron2/talky/channel/ChannelPublisher.o: src/tron2/talky/channel/ChannelPublisher.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/channel
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/channel/ChannelPublisher.o src/tron2/talky/channel/ChannelPublisher.cpp

${OBJECTDIR}/src/tron2/talky/channel/ChannelServer.o: src/tron2/talky/channel/ChannelServer.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/channel
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/channel/ChannelServer.o src/tron2/talky/channel/ChannelServer.cpp

${OBJECTDIR}/src/tron2/talky/channel/ChannelSubscriber.o: src/tron2/talky/channel/ChannelSubscriber.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/channel
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/channel/ChannelSubscriber.o src/tron2/talky/channel/ChannelSubscriber.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_talky.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
