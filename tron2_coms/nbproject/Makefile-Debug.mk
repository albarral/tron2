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
	${OBJECTDIR}/src/tron2/coms/ChannelClient.o \
	${OBJECTDIR}/src/tron2/coms/ChannelCommunicator.o \
	${OBJECTDIR}/src/tron2/coms/ChannelPublisher.o \
	${OBJECTDIR}/src/tron2/coms/ChannelServer.o \
	${OBJECTDIR}/src/tron2/coms/ChannelSubscriber.o \
	${OBJECTDIR}/src/tron2/coms/arm/ArmClient.o \
	${OBJECTDIR}/src/tron2/coms/arm/ArmListener.o \
	${OBJECTDIR}/src/tron2/coms/arm/ChannelSubscriber4Axes.o \
	${OBJECTDIR}/src/tron2/coms/arm/ChannelSubscriber4Joints.o \
	${OBJECTDIR}/src/tron2/coms/body/BodyClient.o


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
LDLIBSOPTIONS=-Wl,-rpath,../tron2_robot2/dist/Debug/GNU-Linux -L../tron2_robot2/dist/Debug/GNU-Linux -ltron2_robot2 -Wl,-rpath,../tron2_talky/dist/Debug/GNU-Linux -L../tron2_talky/dist/Debug/GNU-Linux -ltron2_talky -Wl,-rpath,../../tron/tron_util/dist/Debug/GNU-Linux -L../../tron/tron_util/dist/Debug/GNU-Linux -ltron_util -Wl,-rpath,../../tron/tron_tools/dist/Debug/GNU-Linux -L../../tron/tron_tools/dist/Debug/GNU-Linux -ltron_tools -Wl,-rpath,../../tron/tron_wire/dist/Debug/GNU-Linux -L../../tron/tron_wire/dist/Debug/GNU-Linux -ltron_wire -Wl,-rpath,../../tron/tron_wire2/dist/Debug/GNU-Linux -L../../tron/tron_wire2/dist/Debug/GNU-Linux -ltron_wire2

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}: ../tron2_robot2/dist/Debug/GNU-Linux/libtron2_robot2.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}: ../tron2_talky/dist/Debug/GNU-Linux/libtron2_talky.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}: ../../tron/tron_util/dist/Debug/GNU-Linux/libtron_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}: ../../tron/tron_tools/dist/Debug/GNU-Linux/libtron_tools.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}: ../../tron/tron_wire/dist/Debug/GNU-Linux/libtron_wire.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}: ../../tron/tron_wire2/dist/Debug/GNU-Linux/libtron_wire2.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron2/coms/ChannelClient.o: src/tron2/coms/ChannelClient.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_robot2/src -I../tron2_talky/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/ChannelClient.o src/tron2/coms/ChannelClient.cpp

${OBJECTDIR}/src/tron2/coms/ChannelCommunicator.o: src/tron2/coms/ChannelCommunicator.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_robot2/src -I../tron2_talky/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/ChannelCommunicator.o src/tron2/coms/ChannelCommunicator.cpp

${OBJECTDIR}/src/tron2/coms/ChannelPublisher.o: src/tron2/coms/ChannelPublisher.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_robot2/src -I../tron2_talky/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/ChannelPublisher.o src/tron2/coms/ChannelPublisher.cpp

${OBJECTDIR}/src/tron2/coms/ChannelServer.o: src/tron2/coms/ChannelServer.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_robot2/src -I../tron2_talky/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/ChannelServer.o src/tron2/coms/ChannelServer.cpp

${OBJECTDIR}/src/tron2/coms/ChannelSubscriber.o: src/tron2/coms/ChannelSubscriber.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_robot2/src -I../tron2_talky/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/ChannelSubscriber.o src/tron2/coms/ChannelSubscriber.cpp

${OBJECTDIR}/src/tron2/coms/arm/ArmClient.o: src/tron2/coms/arm/ArmClient.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms/arm
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_robot2/src -I../tron2_talky/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/arm/ArmClient.o src/tron2/coms/arm/ArmClient.cpp

${OBJECTDIR}/src/tron2/coms/arm/ArmListener.o: src/tron2/coms/arm/ArmListener.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms/arm
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_robot2/src -I../tron2_talky/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/arm/ArmListener.o src/tron2/coms/arm/ArmListener.cpp

${OBJECTDIR}/src/tron2/coms/arm/ChannelSubscriber4Axes.o: src/tron2/coms/arm/ChannelSubscriber4Axes.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms/arm
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_robot2/src -I../tron2_talky/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/arm/ChannelSubscriber4Axes.o src/tron2/coms/arm/ChannelSubscriber4Axes.cpp

${OBJECTDIR}/src/tron2/coms/arm/ChannelSubscriber4Joints.o: src/tron2/coms/arm/ChannelSubscriber4Joints.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms/arm
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_robot2/src -I../tron2_talky/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/arm/ChannelSubscriber4Joints.o src/tron2/coms/arm/ChannelSubscriber4Joints.cpp

${OBJECTDIR}/src/tron2/coms/body/BodyClient.o: src/tron2/coms/body/BodyClient.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/coms/body
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_robot2/src -I../tron2_talky/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/coms/body/BodyClient.o src/tron2/coms/body/BodyClient.cpp

# Subprojects
.build-subprojects:
	cd ../tron2_robot2 && ${MAKE}  -f Makefile CONF=Debug
	cd ../tron2_talky && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_tools && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_wire && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_wire2 && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_coms.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:
	cd ../tron2_robot2 && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../tron2_talky && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_tools && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_wire && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_wire2 && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
