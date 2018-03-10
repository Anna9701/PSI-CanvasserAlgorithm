##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PSILaboratory
ConfigurationName      :=Debug
WorkspacePath          :=/home/user/Documents/psi1/PSILaboratory
ProjectPath            :=/home/user/Documents/psi1/PSILaboratory
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=user
Date                   :=03/06/18
CodeLitePath           :=/home/user/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o -pthread
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="PSILaboratory.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -Wall -pthread -std=c++0x $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/komiwojazer_BruteForce.cpp$(ObjectSuffix) $(IntermediateDirectory)/komiwojazer_NearestNeigbor.cpp$(ObjectSuffix) $(IntermediateDirectory)/komiwojazer_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/komiwojazer_Node.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/komiwojazer_BruteForce.cpp$(ObjectSuffix): komiwojazer/BruteForce.cpp $(IntermediateDirectory)/komiwojazer_BruteForce.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/user/Documents/psi1/PSILaboratory/komiwojazer/BruteForce.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/komiwojazer_BruteForce.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/komiwojazer_BruteForce.cpp$(DependSuffix): komiwojazer/BruteForce.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/komiwojazer_BruteForce.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/komiwojazer_BruteForce.cpp$(DependSuffix) -MM komiwojazer/BruteForce.cpp

$(IntermediateDirectory)/komiwojazer_BruteForce.cpp$(PreprocessSuffix): komiwojazer/BruteForce.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/komiwojazer_BruteForce.cpp$(PreprocessSuffix) komiwojazer/BruteForce.cpp

$(IntermediateDirectory)/komiwojazer_NearestNeigbor.cpp$(ObjectSuffix): komiwojazer/NearestNeigbor.cpp $(IntermediateDirectory)/komiwojazer_NearestNeigbor.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/user/Documents/psi1/PSILaboratory/komiwojazer/NearestNeigbor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/komiwojazer_NearestNeigbor.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/komiwojazer_NearestNeigbor.cpp$(DependSuffix): komiwojazer/NearestNeigbor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/komiwojazer_NearestNeigbor.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/komiwojazer_NearestNeigbor.cpp$(DependSuffix) -MM komiwojazer/NearestNeigbor.cpp

$(IntermediateDirectory)/komiwojazer_NearestNeigbor.cpp$(PreprocessSuffix): komiwojazer/NearestNeigbor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/komiwojazer_NearestNeigbor.cpp$(PreprocessSuffix) komiwojazer/NearestNeigbor.cpp

$(IntermediateDirectory)/komiwojazer_main.cpp$(ObjectSuffix): komiwojazer/main.cpp $(IntermediateDirectory)/komiwojazer_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/user/Documents/psi1/PSILaboratory/komiwojazer/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/komiwojazer_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/komiwojazer_main.cpp$(DependSuffix): komiwojazer/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/komiwojazer_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/komiwojazer_main.cpp$(DependSuffix) -MM komiwojazer/main.cpp

$(IntermediateDirectory)/komiwojazer_main.cpp$(PreprocessSuffix): komiwojazer/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/komiwojazer_main.cpp$(PreprocessSuffix) komiwojazer/main.cpp

$(IntermediateDirectory)/komiwojazer_Node.cpp$(ObjectSuffix): komiwojazer/Node.cpp $(IntermediateDirectory)/komiwojazer_Node.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/user/Documents/psi1/PSILaboratory/komiwojazer/Node.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/komiwojazer_Node.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/komiwojazer_Node.cpp$(DependSuffix): komiwojazer/Node.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/komiwojazer_Node.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/komiwojazer_Node.cpp$(DependSuffix) -MM komiwojazer/Node.cpp

$(IntermediateDirectory)/komiwojazer_Node.cpp$(PreprocessSuffix): komiwojazer/Node.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/komiwojazer_Node.cpp$(PreprocessSuffix) komiwojazer/Node.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


