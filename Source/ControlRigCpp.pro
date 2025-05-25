




#TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

#
# below one line project name need to be lowercaes
# the name is same as current folder name(all source files inside this folder)
PRJNAMETOOT = ControlRigCpp
DEFINES += "CONTROLRIGCPP_API"
DEFINES += "CONTROLRIGCPP_API(...)="
#
DEFINES += "UCLASS()=CONTROLRIGCPP_API"
DEFINES += "UCLASS(...)=CONTROLRIGCPP_API"
#
# this is true during development with unreal-editor...

DEFINES += "WITH_EDITORONLY_DATA=1"

## this project only

##


INCLUDEPATH += ../Intermediate/Build/Win64/UnrealEditor/Inc/$$PRJNAMETOOT/UHT
INCLUDEPATH += $$PRJNAMETOOT $$PRJNAMETOOT/Public $$PRJNAMETOOT/Private
#INCLUDEPATH += ../Plugins/NNEPostProcessing/Source/NNEPostProcessing/Public
# we should follow UE project struct to include files, start from prj.Build.cs folder
#
#  The Thirdparty libs
#
#
#
include(defs.pri)
include(inc.pri)
#
## this project only
# INCLUDEPATH += $$UESRCROOT/Runtime/Renderer/Private
##
#
#

DISTFILES += \
    ControlRigCpp.Target.cs \
    ControlRigCpp/ControlRigCpp.Build.cs \
    ControlRigCppEditor.Target.cs

HEADERS += \
    ControlRigCpp/ControlRigCpp.h \
    ControlRigCpp/Public/TootTestControlRig.h

SOURCES += \
    ControlRigCpp/ControlRigCpp.cpp \
    ControlRigCpp/Private/TootTestControlRig.cpp
