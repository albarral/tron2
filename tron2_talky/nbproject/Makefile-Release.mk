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
	${OBJECTDIR}/src/tron2/talky/Talker.o \
	${OBJECTDIR}/src/tron2/talky/TalkyLanguages.o \
	${OBJECTDIR}/src/tron2/talky/arm/ArmLanguage.o \
	${OBJECTDIR}/src/tron2/talky/body/BodyLanguage.o \
	${OBJECTDIR}/src/tron2/talky/vision/VisionLanguage.o


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

${OBJECTDIR}/src/tron2/talky/Talker.o: src/tron2/talky/Talker.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/Talker.o src/tron2/talky/Talker.cpp

${OBJECTDIR}/src/tron2/talky/TalkyLanguages.o: src/tron2/talky/TalkyLanguages.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/TalkyLanguages.o src/tron2/talky/TalkyLanguages.cpp

${OBJECTDIR}/src/tron2/talky/arm/ArmLanguage.o: src/tron2/talky/arm/ArmLanguage.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/arm
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/arm/ArmLanguage.o src/tron2/talky/arm/ArmLanguage.cpp

${OBJECTDIR}/src/tron2/talky/body/BodyLanguage.o: src/tron2/talky/body/BodyLanguage.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/body
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/body/BodyLanguage.o src/tron2/talky/body/BodyLanguage.cpp

${OBJECTDIR}/src/tron2/talky/vision/VisionLanguage.o: src/tron2/talky/vision/VisionLanguage.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/talky/vision
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/talky/vision/VisionLanguage.o src/tron2/talky/vision/VisionLanguage.cpp

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
