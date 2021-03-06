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
	${OBJECTDIR}/src/tron2/tivy/DualWindow.o \
	${OBJECTDIR}/src/tron2/tivy/ImageSave.o \
	${OBJECTDIR}/src/tron2/tivy/SharedDisplay.o \
	${OBJECTDIR}/src/tron2/tivy/history/Click.o \
	${OBJECTDIR}/src/tron2/tivy/history/History.o \
	${OBJECTDIR}/src/tron2/tivy/history/History2D.o \
	${OBJECTDIR}/src/tron2/tivy/plot/DiscPlot.o \
	${OBJECTDIR}/src/tron2/tivy/plot/HistoryPlot.o \
	${OBJECTDIR}/src/tron2/tivy/plot/Plot.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_tivy.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_tivy.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_tivy.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron2/tivy/DualWindow.o: src/tron2/tivy/DualWindow.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/tivy
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/tivy/DualWindow.o src/tron2/tivy/DualWindow.cpp

${OBJECTDIR}/src/tron2/tivy/ImageSave.o: src/tron2/tivy/ImageSave.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/tivy
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/tivy/ImageSave.o src/tron2/tivy/ImageSave.cpp

${OBJECTDIR}/src/tron2/tivy/SharedDisplay.o: src/tron2/tivy/SharedDisplay.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/tivy
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/tivy/SharedDisplay.o src/tron2/tivy/SharedDisplay.cpp

${OBJECTDIR}/src/tron2/tivy/history/Click.o: src/tron2/tivy/history/Click.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/tivy/history
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/tivy/history/Click.o src/tron2/tivy/history/Click.cpp

${OBJECTDIR}/src/tron2/tivy/history/History.o: src/tron2/tivy/history/History.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/tivy/history
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/tivy/history/History.o src/tron2/tivy/history/History.cpp

${OBJECTDIR}/src/tron2/tivy/history/History2D.o: src/tron2/tivy/history/History2D.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/tivy/history
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/tivy/history/History2D.o src/tron2/tivy/history/History2D.cpp

${OBJECTDIR}/src/tron2/tivy/plot/DiscPlot.o: src/tron2/tivy/plot/DiscPlot.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/tivy/plot
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/tivy/plot/DiscPlot.o src/tron2/tivy/plot/DiscPlot.cpp

${OBJECTDIR}/src/tron2/tivy/plot/HistoryPlot.o: src/tron2/tivy/plot/HistoryPlot.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/tivy/plot
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/tivy/plot/HistoryPlot.o src/tron2/tivy/plot/HistoryPlot.cpp

${OBJECTDIR}/src/tron2/tivy/plot/Plot.o: src/tron2/tivy/plot/Plot.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/tivy/plot
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/tivy/plot/Plot.o src/tron2/tivy/plot/Plot.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_tivy.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
