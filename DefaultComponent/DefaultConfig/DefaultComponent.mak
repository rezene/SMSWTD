
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  block_1.obj \
  block_3.obj \
  block_20.obj \
  block_22.obj \
  Drones.obj \
  SMSWTD.obj \
  Authority.obj \
  Data_Acquisition_System.obj \
  UnderWaterSensor.obj \
  Satellites.obj \
  User.obj \
  Maintainer.obj \
  Experts.obj \
  Government.obj \
  DataAcquisition.obj \
  StormDetection.obj \
  StormPrediction.obj \
  StormTracking.obj \
  WeatherUpdate.obj \
  WeatherDashboard.obj \
  Drone.obj \
  Satellite.obj \
  CommunicationInterface.obj \
  sendDroneDataInterface.obj \
  sendSatelliteDataInterface.obj \
  SatelliteInterface.obj \
  DroneInterface.obj \
  sendCommunicationDroneDataInterface.obj \
  sendCommunicationSatelliteDataInterface.obj \
  WMFSystem.obj \
  WMFSystemInterface.obj \
  WMFSystemSatelliteDataInterface.obj \
  Default.obj \
  FUNCTIONAL.obj \
  SYSTEM_CONTEXT.obj \
  SERVICES_UCS.obj \
  Blocks.obj \
  Mission.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






block_1.obj : block_1.cpp block_1.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"block_1.obj" "block_1.cpp" 



block_3.obj : block_3.cpp block_3.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"block_3.obj" "block_3.cpp" 



block_20.obj : block_20.cpp block_20.h    FUNCTIONAL.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"block_20.obj" "block_20.cpp" 



block_22.obj : block_22.cpp block_22.h    FUNCTIONAL.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"block_22.obj" "block_22.cpp" 



Drones.obj : Drones.cpp Drones.h    SYSTEM_CONTEXT.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Drones.obj" "Drones.cpp" 



SMSWTD.obj : SMSWTD.cpp SMSWTD.h    SYSTEM_CONTEXT.h Drones.h UnderWaterSensor.h Satellites.h Maintainer.h User.h Authority.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD.obj" "SMSWTD.cpp" 



Authority.obj : Authority.cpp Authority.h    SYSTEM_CONTEXT.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Authority.obj" "Authority.cpp" 



Data_Acquisition_System.obj : Data_Acquisition_System.cpp Data_Acquisition_System.h    SYSTEM_CONTEXT.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Data_Acquisition_System.obj" "Data_Acquisition_System.cpp" 



UnderWaterSensor.obj : UnderWaterSensor.cpp UnderWaterSensor.h    SYSTEM_CONTEXT.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UnderWaterSensor.obj" "UnderWaterSensor.cpp" 



Satellites.obj : Satellites.cpp Satellites.h    SYSTEM_CONTEXT.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Satellites.obj" "Satellites.cpp" 



User.obj : User.cpp User.h    SYSTEM_CONTEXT.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User.obj" "User.cpp" 



Maintainer.obj : Maintainer.cpp Maintainer.h    SYSTEM_CONTEXT.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Maintainer.obj" "Maintainer.cpp" 



Experts.obj : Experts.cpp Experts.h    SERVICES_UCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Experts.obj" "Experts.cpp" 



Government.obj : Government.cpp Government.h    SERVICES_UCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Government.obj" "Government.cpp" 



DataAcquisition.obj : DataAcquisition.cpp DataAcquisition.h    Mission.h WMFSystemInterface.h WMFSystemSatelliteDataInterface.h sendCommunicationSatelliteDataInterface.h sendCommunicationDroneDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataAcquisition.obj" "DataAcquisition.cpp" 



StormDetection.obj : StormDetection.cpp StormDetection.h    Mission.h StormTracking.h StormPrediction.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StormDetection.obj" "StormDetection.cpp" 



StormPrediction.obj : StormPrediction.cpp StormPrediction.h    Mission.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StormPrediction.obj" "StormPrediction.cpp" 



StormTracking.obj : StormTracking.cpp StormTracking.h    Mission.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StormTracking.obj" "StormTracking.cpp" 



WeatherUpdate.obj : WeatherUpdate.cpp WeatherUpdate.h    Mission.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WeatherUpdate.obj" "WeatherUpdate.cpp" 



WeatherDashboard.obj : WeatherDashboard.cpp WeatherDashboard.h    Mission.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WeatherDashboard.obj" "WeatherDashboard.cpp" 



Drone.obj : Drone.cpp Drone.h    Mission.h sendDroneDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Drone.obj" "Drone.cpp" 



Satellite.obj : Satellite.cpp Satellite.h    Mission.h sendSatelliteDataInterface.h Blocks.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Satellite.obj" "Satellite.cpp" 



CommunicationInterface.obj : CommunicationInterface.cpp CommunicationInterface.h    Mission.h DroneInterface.h SatelliteInterface.h sendCommunicationSatelliteDataInterface.h sendCommunicationDroneDataInterface.h sendDroneDataInterface.h sendSatelliteDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CommunicationInterface.obj" "CommunicationInterface.cpp" 



sendDroneDataInterface.obj : sendDroneDataInterface.cpp sendDroneDataInterface.h    Mission.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"sendDroneDataInterface.obj" "sendDroneDataInterface.cpp" 



sendSatelliteDataInterface.obj : sendSatelliteDataInterface.cpp sendSatelliteDataInterface.h    Mission.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"sendSatelliteDataInterface.obj" "sendSatelliteDataInterface.cpp" 



SatelliteInterface.obj : SatelliteInterface.cpp SatelliteInterface.h    Mission.h sendCommunicationSatelliteDataInterface.h sendSatelliteDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SatelliteInterface.obj" "SatelliteInterface.cpp" 



DroneInterface.obj : DroneInterface.cpp DroneInterface.h    Mission.h sendCommunicationDroneDataInterface.h sendDroneDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DroneInterface.obj" "DroneInterface.cpp" 



sendCommunicationDroneDataInterface.obj : sendCommunicationDroneDataInterface.cpp sendCommunicationDroneDataInterface.h    Mission.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"sendCommunicationDroneDataInterface.obj" "sendCommunicationDroneDataInterface.cpp" 



sendCommunicationSatelliteDataInterface.obj : sendCommunicationSatelliteDataInterface.cpp sendCommunicationSatelliteDataInterface.h    Mission.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"sendCommunicationSatelliteDataInterface.obj" "sendCommunicationSatelliteDataInterface.cpp" 



WMFSystem.obj : WMFSystem.cpp WMFSystem.h    Mission.h StormDetection.h WeatherDashboard.h WeatherUpdate.h WMFSystemInterface.h WMFSystemSatelliteDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WMFSystem.obj" "WMFSystem.cpp" 



WMFSystemInterface.obj : WMFSystemInterface.cpp WMFSystemInterface.h    Mission.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WMFSystemInterface.obj" "WMFSystemInterface.cpp" 



WMFSystemSatelliteDataInterface.obj : WMFSystemSatelliteDataInterface.cpp WMFSystemSatelliteDataInterface.h    Mission.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WMFSystemSatelliteDataInterface.obj" "WMFSystemSatelliteDataInterface.cpp" 



Default.obj : Default.cpp Default.h    block_1.h block_3.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Default.obj" "Default.cpp" 



FUNCTIONAL.obj : FUNCTIONAL.cpp FUNCTIONAL.h    block_20.h block_22.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"FUNCTIONAL.obj" "FUNCTIONAL.cpp" 



SYSTEM_CONTEXT.obj : SYSTEM_CONTEXT.cpp SYSTEM_CONTEXT.h    Drones.h SMSWTD.h Authority.h Data_Acquisition_System.h UnderWaterSensor.h Satellites.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SYSTEM_CONTEXT.obj" "SYSTEM_CONTEXT.cpp" 



SERVICES_UCS.obj : SERVICES_UCS.cpp SERVICES_UCS.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SERVICES_UCS.obj" "SERVICES_UCS.cpp" 



Blocks.obj : Blocks.cpp Blocks.h    SERVICES_UCS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Blocks.obj" "Blocks.cpp" 



Mission.obj : Mission.cpp Mission.h    DataAcquisition.h StormDetection.h StormPrediction.h StormTracking.h WeatherUpdate.h WeatherDashboard.h Drone.h Satellite.h CommunicationInterface.h sendDroneDataInterface.h sendSatelliteDataInterface.h SatelliteInterface.h DroneInterface.h sendCommunicationDroneDataInterface.h sendCommunicationSatelliteDataInterface.h WMFSystem.h WMFSystemInterface.h WMFSystemSatelliteDataInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Mission.obj" "Mission.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist block_1.obj erase block_1.obj
	if exist block_3.obj erase block_3.obj
	if exist block_20.obj erase block_20.obj
	if exist block_22.obj erase block_22.obj
	if exist Drones.obj erase Drones.obj
	if exist SMSWTD.obj erase SMSWTD.obj
	if exist Authority.obj erase Authority.obj
	if exist Data_Acquisition_System.obj erase Data_Acquisition_System.obj
	if exist UnderWaterSensor.obj erase UnderWaterSensor.obj
	if exist Satellites.obj erase Satellites.obj
	if exist User.obj erase User.obj
	if exist Maintainer.obj erase Maintainer.obj
	if exist Experts.obj erase Experts.obj
	if exist Government.obj erase Government.obj
	if exist DataAcquisition.obj erase DataAcquisition.obj
	if exist StormDetection.obj erase StormDetection.obj
	if exist StormPrediction.obj erase StormPrediction.obj
	if exist StormTracking.obj erase StormTracking.obj
	if exist WeatherUpdate.obj erase WeatherUpdate.obj
	if exist WeatherDashboard.obj erase WeatherDashboard.obj
	if exist Drone.obj erase Drone.obj
	if exist Satellite.obj erase Satellite.obj
	if exist CommunicationInterface.obj erase CommunicationInterface.obj
	if exist sendDroneDataInterface.obj erase sendDroneDataInterface.obj
	if exist sendSatelliteDataInterface.obj erase sendSatelliteDataInterface.obj
	if exist SatelliteInterface.obj erase SatelliteInterface.obj
	if exist DroneInterface.obj erase DroneInterface.obj
	if exist sendCommunicationDroneDataInterface.obj erase sendCommunicationDroneDataInterface.obj
	if exist sendCommunicationSatelliteDataInterface.obj erase sendCommunicationSatelliteDataInterface.obj
	if exist WMFSystem.obj erase WMFSystem.obj
	if exist WMFSystemInterface.obj erase WMFSystemInterface.obj
	if exist WMFSystemSatelliteDataInterface.obj erase WMFSystemSatelliteDataInterface.obj
	if exist Default.obj erase Default.obj
	if exist FUNCTIONAL.obj erase FUNCTIONAL.obj
	if exist SYSTEM_CONTEXT.obj erase SYSTEM_CONTEXT.obj
	if exist SERVICES_UCS.obj erase SERVICES_UCS.obj
	if exist Blocks.obj erase Blocks.obj
	if exist Mission.obj erase Mission.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
