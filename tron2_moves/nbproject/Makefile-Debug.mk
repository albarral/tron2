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
	${OBJECTDIR}/src/tron2/moves/BasicMovement.o \
	${OBJECTDIR}/src/tron2/moves/CircularGenerator.o \
	${OBJECTDIR}/src/tron2/moves/CyclicFactory.o \
	${OBJECTDIR}/src/tron2/moves/CyclicMovement.o \
	${OBJECTDIR}/src/tron2/moves/Move.o \
	${OBJECTDIR}/src/tron2/moves/Posture.o \
	${OBJECTDIR}/src/tron2/moves/SequentialFactory.o \
	${OBJECTDIR}/src/tron2/moves/SequentialMovement.o \
	${OBJECTDIR}/src/tron2/moves/WaveGenerator.o


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
LDLIBSOPTIONS=-Wl,-rpath,../../tron/tron_math/dist/Debug/GNU-Linux -L../../tron/tron_math/dist/Debug/GNU-Linux -ltron_math

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_moves.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_moves.${CND_DLIB_EXT}: ../../tron/tron_math/dist/Debug/GNU-Linux/libtron_math.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_moves.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_moves.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron2/moves/BasicMovement.o: src/tron2/moves/BasicMovement.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/moves
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_math/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/moves/BasicMovement.o src/tron2/moves/BasicMovement.cpp

${OBJECTDIR}/src/tron2/moves/CircularGenerator.o: src/tron2/moves/CircularGenerator.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/moves
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_math/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/moves/CircularGenerator.o src/tron2/moves/CircularGenerator.cpp

${OBJECTDIR}/src/tron2/moves/CyclicFactory.o: src/tron2/moves/CyclicFactory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/moves
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_math/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/moves/CyclicFactory.o src/tron2/moves/CyclicFactory.cpp

${OBJECTDIR}/src/tron2/moves/CyclicMovement.o: src/tron2/moves/CyclicMovement.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/moves
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_math/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/moves/CyclicMovement.o src/tron2/moves/CyclicMovement.cpp

${OBJECTDIR}/src/tron2/moves/Move.o: src/tron2/moves/Move.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/moves
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_math/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/moves/Move.o src/tron2/moves/Move.cpp

${OBJECTDIR}/src/tron2/moves/Posture.o: src/tron2/moves/Posture.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/moves
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_math/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/moves/Posture.o src/tron2/moves/Posture.cpp

${OBJECTDIR}/src/tron2/moves/SequentialFactory.o: src/tron2/moves/SequentialFactory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/moves
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_math/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/moves/SequentialFactory.o src/tron2/moves/SequentialFactory.cpp

${OBJECTDIR}/src/tron2/moves/SequentialMovement.o: src/tron2/moves/SequentialMovement.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/moves
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_math/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/moves/SequentialMovement.o src/tron2/moves/SequentialMovement.cpp

${OBJECTDIR}/src/tron2/moves/WaveGenerator.o: src/tron2/moves/WaveGenerator.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/moves
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_math/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/moves/WaveGenerator.o src/tron2/moves/WaveGenerator.cpp

# Subprojects
.build-subprojects:
	cd ../../tron/tron_math && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_moves.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:
	cd ../../tron/tron_math && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
