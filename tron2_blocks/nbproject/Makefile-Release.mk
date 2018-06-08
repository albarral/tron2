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
	${OBJECTDIR}/src/tron2/blocks/Action.o \
	${OBJECTDIR}/src/tron2/blocks/Behaviour.o \
	${OBJECTDIR}/src/tron2/blocks/Module.o \
	${OBJECTDIR}/src/tron2/blocks/NodeConnector.o \
	${OBJECTDIR}/src/tron2/blocks/brooks/control.o \
	${OBJECTDIR}/src/tron2/blocks/brooks/control1.o \
	${OBJECTDIR}/src/tron2/blocks/brooks/control2.o \
	${OBJECTDIR}/src/tron2/blocks/brooks/control3.o \
	${OBJECTDIR}/src/tron2/blocks/brooks/inhibition.o \
	${OBJECTDIR}/src/tron2/blocks/brooks/sensor.o \
	${OBJECTDIR}/src/tron2/blocks/brooks/sensor2.o \
	${OBJECTDIR}/src/tron2/blocks/brooks/sensor3.o \
	${OBJECTDIR}/src/tron2/blocks/extra/Sensor2Led.o \
	${OBJECTDIR}/src/tron2/blocks/operators/ControlAdder3.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_blocks.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_blocks.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_blocks.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron2/blocks/Action.o: src/tron2/blocks/Action.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/Action.o src/tron2/blocks/Action.cpp

${OBJECTDIR}/src/tron2/blocks/Behaviour.o: src/tron2/blocks/Behaviour.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/Behaviour.o src/tron2/blocks/Behaviour.cpp

${OBJECTDIR}/src/tron2/blocks/Module.o: src/tron2/blocks/Module.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/Module.o src/tron2/blocks/Module.cpp

${OBJECTDIR}/src/tron2/blocks/NodeConnector.o: src/tron2/blocks/NodeConnector.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/NodeConnector.o src/tron2/blocks/NodeConnector.cpp

${OBJECTDIR}/src/tron2/blocks/brooks/control.o: src/tron2/blocks/brooks/control.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks/brooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/brooks/control.o src/tron2/blocks/brooks/control.cpp

${OBJECTDIR}/src/tron2/blocks/brooks/control1.o: src/tron2/blocks/brooks/control1.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks/brooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/brooks/control1.o src/tron2/blocks/brooks/control1.cpp

${OBJECTDIR}/src/tron2/blocks/brooks/control2.o: src/tron2/blocks/brooks/control2.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks/brooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/brooks/control2.o src/tron2/blocks/brooks/control2.cpp

${OBJECTDIR}/src/tron2/blocks/brooks/control3.o: src/tron2/blocks/brooks/control3.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks/brooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/brooks/control3.o src/tron2/blocks/brooks/control3.cpp

${OBJECTDIR}/src/tron2/blocks/brooks/inhibition.o: src/tron2/blocks/brooks/inhibition.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks/brooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/brooks/inhibition.o src/tron2/blocks/brooks/inhibition.cpp

${OBJECTDIR}/src/tron2/blocks/brooks/sensor.o: src/tron2/blocks/brooks/sensor.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks/brooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/brooks/sensor.o src/tron2/blocks/brooks/sensor.cpp

${OBJECTDIR}/src/tron2/blocks/brooks/sensor2.o: src/tron2/blocks/brooks/sensor2.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks/brooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/brooks/sensor2.o src/tron2/blocks/brooks/sensor2.cpp

${OBJECTDIR}/src/tron2/blocks/brooks/sensor3.o: src/tron2/blocks/brooks/sensor3.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks/brooks
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/brooks/sensor3.o src/tron2/blocks/brooks/sensor3.cpp

${OBJECTDIR}/src/tron2/blocks/extra/Sensor2Led.o: src/tron2/blocks/extra/Sensor2Led.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks/extra
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/extra/Sensor2Led.o src/tron2/blocks/extra/Sensor2Led.cpp

${OBJECTDIR}/src/tron2/blocks/operators/ControlAdder3.o: src/tron2/blocks/operators/ControlAdder3.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/blocks/operators
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/blocks/operators/ControlAdder3.o src/tron2/blocks/operators/ControlAdder3.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_blocks.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
