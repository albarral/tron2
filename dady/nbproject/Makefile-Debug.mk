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
	${OBJECTDIR}/src/dady/DadyCommander2.o \
	${OBJECTDIR}/src/dady/main.o


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
LDLIBSOPTIONS=-llog4cxx -Wl,-rpath,../../tron/tron_util/dist/Debug/GNU-Linux -L../../tron/tron_util/dist/Debug/GNU-Linux -ltron_util -Wl,-rpath,../../tron/tron_wire/dist/Debug/GNU-Linux -L../../tron/tron_wire/dist/Debug/GNU-Linux -ltron_wire -Wl,-rpath,../../tron/tron_wire2/dist/Debug/GNU-Linux -L../../tron/tron_wire2/dist/Debug/GNU-Linux -ltron_wire2 -Wl,-rpath,../../tron/tron_tools/dist/Debug/GNU-Linux -L../../tron/tron_tools/dist/Debug/GNU-Linux -ltron_tools -Wl,-rpath,../tron2_robot/dist/Debug/GNU-Linux -L../tron2_robot/dist/Debug/GNU-Linux -ltron2_robot -Wl,-rpath,../tron2_talky/dist/Debug/GNU-Linux -L../tron2_talky/dist/Debug/GNU-Linux -ltron2_talky

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/dady

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/dady: ../../tron/tron_util/dist/Debug/GNU-Linux/libtron_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/dady: ../../tron/tron_wire/dist/Debug/GNU-Linux/libtron_wire.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/dady: ../../tron/tron_wire2/dist/Debug/GNU-Linux/libtron_wire2.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/dady: ../../tron/tron_tools/dist/Debug/GNU-Linux/libtron_tools.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/dady: ../tron2_robot/dist/Debug/GNU-Linux/libtron2_robot.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/dady: ../tron2_talky/dist/Debug/GNU-Linux/libtron2_talky.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/dady: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/dady ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/src/dady/DadyCommander2.o: src/dady/DadyCommander2.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/dady
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -I../tron2_talky/src -I../tron2_robot/src -I../tron2_talky/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/dady/DadyCommander2.o src/dady/DadyCommander2.cpp

${OBJECTDIR}/src/dady/main.o: src/dady/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/dady
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../tron/tron_tools/src -I../tron2_talky/src -I../tron2_robot/src -I../tron2_talky/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/dady/main.o src/dady/main.cpp

# Subprojects
.build-subprojects:
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_wire && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_wire2 && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_tools && ${MAKE}  -f Makefile CONF=Debug
	cd ../tron2_robot && ${MAKE}  -f Makefile CONF=Debug
	cd ../tron2_talky && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/dady

# Subprojects
.clean-subprojects:
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_wire && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_wire2 && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_tools && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../tron2_robot && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../tron2_talky && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc