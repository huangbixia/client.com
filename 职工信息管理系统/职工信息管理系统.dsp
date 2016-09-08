# Microsoft Developer Studio Project File - Name="职工信息管理系统" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=职工信息管理系统 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "职工信息管理系统.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "职工信息管理系统.mak" CFG="职工信息管理系统 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "职工信息管理系统 - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "职工信息管理系统 - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "职工信息管理系统 - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386

!ELSEIF  "$(CFG)" == "职工信息管理系统 - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "职工信息管理系统 - Win32 Release"
# Name "职工信息管理系统 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\Add_Data.c
# End Source File
# Begin Source File

SOURCE=.\AvgSalary.c
# End Source File
# Begin Source File

SOURCE=.\AvgSall.c
# End Source File
# Begin Source File

SOURCE=.\AvgSdept.c
# End Source File
# Begin Source File

SOURCE=.\Check.c
# End Source File
# Begin Source File

SOURCE=.\CountCall.c
# End Source File
# Begin Source File

SOURCE=.\CountCdept.c
# End Source File
# Begin Source File

SOURCE=.\CountClerk.c
# End Source File
# Begin Source File

SOURCE=.\CountCsex.c
# End Source File
# Begin Source File

SOURCE=.\CountSalary.c
# End Source File
# Begin Source File

SOURCE=.\CountSall.c
# End Source File
# Begin Source File

SOURCE=.\CountSdept.c
# End Source File
# Begin Source File

SOURCE=.\DataGraph.c
# End Source File
# Begin Source File

SOURCE=.\Delete_Data.c
# End Source File
# Begin Source File

SOURCE=.\DeleteName.c
# End Source File
# Begin Source File

SOURCE=.\DeleteNo.c
# End Source File
# Begin Source File

SOURCE=.\DeleteNumber.c
# End Source File
# Begin Source File

SOURCE=.\end.c
# End Source File
# Begin Source File

SOURCE=.\Finput_Data.c
# End Source File
# Begin Source File

SOURCE=.\Foutput_Data.c
# End Source File
# Begin Source File

SOURCE=.\Get_length.c
# End Source File
# Begin Source File

SOURCE=.\Init.c
# End Source File
# Begin Source File

SOURCE=.\main.c
# End Source File
# Begin Source File

SOURCE=.\menu.c
# End Source File
# Begin Source File

SOURCE=.\Query.c
# End Source File
# Begin Source File

SOURCE=.\QueryDept.c
# End Source File
# Begin Source File

SOURCE=.\QueryName.c
# End Source File
# Begin Source File

SOURCE=.\QueryNo.c
# End Source File
# Begin Source File

SOURCE=.\QueryNumb.c
# End Source File
# Begin Source File

SOURCE=.\QuerySex.c
# End Source File
# Begin Source File

SOURCE=.\Show_Data.c
# End Source File
# Begin Source File

SOURCE=.\Sort.c
# End Source File
# Begin Source File

SOURCE=.\SortAge.c
# End Source File
# Begin Source File

SOURCE=.\SortSalary.c
# End Source File
# Begin Source File

SOURCE=.\UpdateData.c
# End Source File
# Begin Source File

SOURCE=.\User.c
# End Source File
# Begin Source File

SOURCE=.\welcom.c
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\header.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
