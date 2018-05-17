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
	${OBJECTDIR}/src/tron2/concepts/Category.o \
	${OBJECTDIR}/src/tron2/concepts/Concept.o \
	${OBJECTDIR}/src/tron2/concepts/Knowledge.o \
	${OBJECTDIR}/src/tron2/concepts/actions/ManipulationCategory.o \
	${OBJECTDIR}/src/tron2/concepts/actions/MovementCategory.o \
	${OBJECTDIR}/src/tron2/concepts/objects/BodyCategory.o \
	${OBJECTDIR}/src/tron2/concepts/objects/ShapesCategory.o \
	${OBJECTDIR}/src/tron2/concepts/qualifiers/AffirmationCategory.o \
	${OBJECTDIR}/src/tron2/concepts/qualifiers/ColorCategory.o \
	${OBJECTDIR}/src/tron2/concepts/qualifiers/DirectionCategory.o \
	${OBJECTDIR}/src/tron2/concepts/qualifiers/LocationCategory.o \
	${OBJECTDIR}/src/tron2/concepts/qualifiers/ProximityCategory.o \
	${OBJECTDIR}/src/tron2/concepts/qualifiers/QuantityCategory.o \
	${OBJECTDIR}/src/tron2/concepts/qualifiers/SpeedCategory.o


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
LDLIBSOPTIONS=-Wl,-rpath,../../tron/tron_util/dist/Debug/GNU-Linux -L../../tron/tron_util/dist/Debug/GNU-Linux -ltron_util

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_concepts.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_concepts.${CND_DLIB_EXT}: ../../tron/tron_util/dist/Debug/GNU-Linux/libtron_util.so

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_concepts.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_concepts.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/src/tron2/concepts/Category.o: src/tron2/concepts/Category.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/Category.o src/tron2/concepts/Category.cpp

${OBJECTDIR}/src/tron2/concepts/Concept.o: src/tron2/concepts/Concept.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/Concept.o src/tron2/concepts/Concept.cpp

${OBJECTDIR}/src/tron2/concepts/Knowledge.o: src/tron2/concepts/Knowledge.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/Knowledge.o src/tron2/concepts/Knowledge.cpp

${OBJECTDIR}/src/tron2/concepts/actions/ManipulationCategory.o: src/tron2/concepts/actions/ManipulationCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/actions
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/actions/ManipulationCategory.o src/tron2/concepts/actions/ManipulationCategory.cpp

${OBJECTDIR}/src/tron2/concepts/actions/MovementCategory.o: src/tron2/concepts/actions/MovementCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/actions
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/actions/MovementCategory.o src/tron2/concepts/actions/MovementCategory.cpp

${OBJECTDIR}/src/tron2/concepts/objects/BodyCategory.o: src/tron2/concepts/objects/BodyCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/objects
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/objects/BodyCategory.o src/tron2/concepts/objects/BodyCategory.cpp

${OBJECTDIR}/src/tron2/concepts/objects/ShapesCategory.o: src/tron2/concepts/objects/ShapesCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/objects
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/objects/ShapesCategory.o src/tron2/concepts/objects/ShapesCategory.cpp

${OBJECTDIR}/src/tron2/concepts/qualifiers/AffirmationCategory.o: src/tron2/concepts/qualifiers/AffirmationCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/qualifiers
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/qualifiers/AffirmationCategory.o src/tron2/concepts/qualifiers/AffirmationCategory.cpp

${OBJECTDIR}/src/tron2/concepts/qualifiers/ColorCategory.o: src/tron2/concepts/qualifiers/ColorCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/qualifiers
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/qualifiers/ColorCategory.o src/tron2/concepts/qualifiers/ColorCategory.cpp

${OBJECTDIR}/src/tron2/concepts/qualifiers/DirectionCategory.o: src/tron2/concepts/qualifiers/DirectionCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/qualifiers
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/qualifiers/DirectionCategory.o src/tron2/concepts/qualifiers/DirectionCategory.cpp

${OBJECTDIR}/src/tron2/concepts/qualifiers/LocationCategory.o: src/tron2/concepts/qualifiers/LocationCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/qualifiers
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/qualifiers/LocationCategory.o src/tron2/concepts/qualifiers/LocationCategory.cpp

${OBJECTDIR}/src/tron2/concepts/qualifiers/ProximityCategory.o: src/tron2/concepts/qualifiers/ProximityCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/qualifiers
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/qualifiers/ProximityCategory.o src/tron2/concepts/qualifiers/ProximityCategory.cpp

${OBJECTDIR}/src/tron2/concepts/qualifiers/QuantityCategory.o: src/tron2/concepts/qualifiers/QuantityCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/qualifiers
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/qualifiers/QuantityCategory.o src/tron2/concepts/qualifiers/QuantityCategory.cpp

${OBJECTDIR}/src/tron2/concepts/qualifiers/SpeedCategory.o: src/tron2/concepts/qualifiers/SpeedCategory.cpp 
	${MKDIR} -p ${OBJECTDIR}/src/tron2/concepts/qualifiers
	${RM} "$@.d"
	$(COMPILE.cc) -g -Isrc -I../../tron/tron_util/src -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/tron2/concepts/qualifiers/SpeedCategory.o src/tron2/concepts/qualifiers/SpeedCategory.cpp

# Subprojects
.build-subprojects:
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtron2_concepts.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:
	cd ../../tron/tron_util && ${MAKE}  -f Makefile CONF=Debug clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
