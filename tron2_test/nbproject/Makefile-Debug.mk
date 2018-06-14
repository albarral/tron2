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
	${OBJECTDIR}/src/TestComs.o \
	${OBJECTDIR}/src/TestRobot.o \
	${OBJECTDIR}/src/TestTivy.o \
	${OBJECTDIR}/src/aux/JointChannelServer.o \
	${OBJECTDIR}/src/aux/TestPlot.o \
	${OBJECTDIR}/src/main.o


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
LDLIBSOPTIONS=-llog4cxx -lopencv_core -lopencv_highgui -Wl,-rpath,../tron2_coms/dist/Debug/GNU-Linux -L../tron2_coms/dist/Debug/GNU-Linux -ltron2_coms -Wl,-rpath,../tron2_robot/dist/Debug/GNU-Linux -L../tron2_robot/dist/Debug/GNU-Linux -ltron2_robot -Wl,-rpath,../tron2_tivy/dist/Debug/GNU-Linux -L../tron2_tivy/dist/Debug/GNU-Linux -ltron2_tivy -Wl,-rpath,../../tron/tron_tools/dist/Debug/GNU-Linux -L../../tron/tron_tools/dist/Debug/GNU-Linux -ltron_tools -Wl,-rpath,../../tron/tron_util/dist/Debug/GNU-Linux -L../../tron/tron_util/dist/Debug/GNU-Linux -ltron_util -Wl,-rpath,../../tron/tron_wire/dist/Debug/GNU-Linux -L../../tron/tron_wire/dist/Debug/GNU-Linux -ltron_wire -Wl,-rpath,../../tron/tron_wire2/dist/Debug/GNU-Linux -L../../tron/tron_wire2/dist/Debug/GNU-Linux -ltron_wire2 -Wl,-rpath,../../amy/amy_interface/dist/Debug/GNU-Linux -L../../amy/amy_interface/dist/Debug/GNU-Linux -lamy_interface -Wl,-rpath,../../roly/roly_interface/dist/Debug/GNU-Linux -L../../roly/roly_interface/dist/Debug/GNU-Linux -lroly_interface

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test: ../tron2_coms/dist/Debug/GNU-Linux/libtron2_coms.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test: ../tron2_robot/dist/Debug/GNU-Linux/libtron2_robot.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test: ../tron2_tivy/dist/Debug/GNU-Linux/libtron2_tivy.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test: ../../tron/tron_tools/dist/Debug/GNU-Linux/libtron_tools.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test: ../../tron/tron_util/dist/Debug/GNU-Linux/libtron_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test: ../../tron/tron_wire/dist/Debug/GNU-Linux/libtron_wire.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test: ../../tron/tron_wire2/dist/Debug/GNU-Linux/libtron_wire2.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test: ../../amy/amy_interface/dist/Debug/GNU-Linux/libamy_interface.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test: ../../roly/roly_interface/dist/Debug/GNU-Linux/libroly_interface.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/src/TestComs.o: src/TestComs.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_coms/src -I../tron2_robot/src -I../tron2_tivy/src -I../../tron/tron_tools/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../amy/amy_interface/src -I../../roly/roly_interface/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/TestComs.o src/TestComs.cpp

${OBJECTDIR}/src/TestRobot.o: src/TestRobot.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_coms/src -I../tron2_robot/src -I../tron2_tivy/src -I../../tron/tron_tools/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../amy/amy_interface/src -I../../roly/roly_interface/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/TestRobot.o src/TestRobot.cpp

${OBJECTDIR}/src/TestTivy.o: src/TestTivy.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_coms/src -I../tron2_robot/src -I../tron2_tivy/src -I../../tron/tron_tools/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../amy/amy_interface/src -I../../roly/roly_interface/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/TestTivy.o src/TestTivy.cpp

${OBJECTDIR}/src/aux/JointChannelServer.o: src/aux/JointChannelServer.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/aux
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_coms/src -I../tron2_robot/src -I../tron2_tivy/src -I../../tron/tron_tools/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../amy/amy_interface/src -I../../roly/roly_interface/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/aux/JointChannelServer.o src/aux/JointChannelServer.cpp

${OBJECTDIR}/src/aux/TestPlot.o: src/aux/TestPlot.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/aux
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_coms/src -I../tron2_robot/src -I../tron2_tivy/src -I../../tron/tron_tools/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../amy/amy_interface/src -I../../roly/roly_interface/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/aux/TestPlot.o src/aux/TestPlot.cpp

${OBJECTDIR}/src/main.o: src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../tron2_coms/src -I../tron2_robot/src -I../tron2_tivy/src -I../../tron/tron_tools/src -I../../tron/tron_util/src -I../../tron/tron_wire/src -I../../tron/tron_wire2/src -I../../amy/amy_interface/src -I../../roly/roly_interface/src -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/main.o src/main.cpp

# Subprojects
.build-subprojects:
	cd ../tron2_coms && ${MAKE}  -f Makefile CONF=Debug
	cd ../tron2_robot && ${MAKE}  -f Makefile CONF=Debug
	cd ../tron2_tivy && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_tools && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_wire && ${MAKE}  -f Makefile CONF=Debug
	cd ../../tron/tron_wire2 && ${MAKE}  -f Makefile CONF=Debug
	cd ../../amy/amy_interface && ${MAKE}  -f Makefile CONF=Debug
	cd ../../roly/roly_interface && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/tron_test

# Subprojects
.clean-subprojects:
	cd ../tron2_coms && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../tron2_robot && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../tron2_tivy && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_tools && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_wire && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../tron/tron_wire2 && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../amy/amy_interface && ${MAKE}  -f Makefile CONF=Debug clean
	cd ../../roly/roly_interface && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
