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
	${OBJECTDIR}/src/tron2/coms/ChannelClient.o \
	${OBJECTDIR}/src/tron2/coms/ChannelCommunicator.o \
	${OBJECTDIR}/src/tron2/coms/ChannelPublisher.o \
	${OBJECTDIR}/src/tron2/coms/ChannelServer.o \
	${OBJECTDIR}/src/tron2/coms/ChannelSubscriber.o \
	${OBJECTDIR}/src/tron2/coms/talker/ChannelTalker.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron2/coms/ChannelClient.o: src/tron2/coms/ChannelClient.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/ChannelClient.o src/tron2/coms/ChannelClient.cpp

${OBJECTDIR}/src/tron2/coms/ChannelCommunicator.o: src/tron2/coms/ChannelCommunicator.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/ChannelCommunicator.o src/tron2/coms/ChannelCommunicator.cpp

${OBJECTDIR}/src/tron2/coms/ChannelPublisher.o: src/tron2/coms/ChannelPublisher.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/ChannelPublisher.o src/tron2/coms/ChannelPublisher.cpp

${OBJECTDIR}/src/tron2/coms/ChannelServer.o: src/tron2/coms/ChannelServer.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/ChannelServer.o src/tron2/coms/ChannelServer.cpp

${OBJECTDIR}/src/tron2/coms/ChannelSubscriber.o: src/tron2/coms/ChannelSubscriber.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/ChannelSubscriber.o src/tron2/coms/ChannelSubscriber.cpp

${OBJECTDIR}/src/tron2/coms/talker/ChannelTalker.o: src/tron2/coms/talker/ChannelTalker.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms/talker
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/talker/ChannelTalker.o src/tron2/coms/talker/ChannelTalker.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
