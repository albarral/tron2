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
	${OBJECTDIR}/src/tron2/language/Language.o \
	${OBJECTDIR}/src/tron2/language/Theme.o \
	${OBJECTDIR}/src/tron2/language/categories/FeaturesCategory.o \
	${OBJECTDIR}/src/tron2/language/categories/ObjectsCategory.o \
	${OBJECTDIR}/src/tron2/language/features/DirectionsTheme.o \
	${OBJECTDIR}/src/tron2/language/features/LengthTheme.o \
	${OBJECTDIR}/src/tron2/language/features/QuantityTheme.o \
	${OBJECTDIR}/src/tron2/language/features/SizeTheme.o \
	${OBJECTDIR}/src/tron2/language/features/SpeedTheme.o \
	${OBJECTDIR}/src/tron2/language/objects/FiguresTheme.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_language.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_language.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_language.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron2/language/Language.o: src/tron2/language/Language.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/language
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/language/Language.o src/tron2/language/Language.cpp

${OBJECTDIR}/src/tron2/language/Theme.o: src/tron2/language/Theme.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/language
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/language/Theme.o src/tron2/language/Theme.cpp

${OBJECTDIR}/src/tron2/language/categories/FeaturesCategory.o: src/tron2/language/categories/FeaturesCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/language/categories
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/language/categories/FeaturesCategory.o src/tron2/language/categories/FeaturesCategory.cpp

${OBJECTDIR}/src/tron2/language/categories/ObjectsCategory.o: src/tron2/language/categories/ObjectsCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/language/categories
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/language/categories/ObjectsCategory.o src/tron2/language/categories/ObjectsCategory.cpp

${OBJECTDIR}/src/tron2/language/features/DirectionsTheme.o: src/tron2/language/features/DirectionsTheme.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/language/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/language/features/DirectionsTheme.o src/tron2/language/features/DirectionsTheme.cpp

${OBJECTDIR}/src/tron2/language/features/LengthTheme.o: src/tron2/language/features/LengthTheme.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/language/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/language/features/LengthTheme.o src/tron2/language/features/LengthTheme.cpp

${OBJECTDIR}/src/tron2/language/features/QuantityTheme.o: src/tron2/language/features/QuantityTheme.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/language/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/language/features/QuantityTheme.o src/tron2/language/features/QuantityTheme.cpp

${OBJECTDIR}/src/tron2/language/features/SizeTheme.o: src/tron2/language/features/SizeTheme.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/language/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/language/features/SizeTheme.o src/tron2/language/features/SizeTheme.cpp

${OBJECTDIR}/src/tron2/language/features/SpeedTheme.o: src/tron2/language/features/SpeedTheme.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/language/features
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/language/features/SpeedTheme.o src/tron2/language/features/SpeedTheme.cpp

${OBJECTDIR}/src/tron2/language/objects/FiguresTheme.o: src/tron2/language/objects/FiguresTheme.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/language/objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/language/objects/FiguresTheme.o src/tron2/language/objects/FiguresTheme.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_language.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
