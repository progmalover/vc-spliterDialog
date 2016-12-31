; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CExampleDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "splitTodialog.h"

ClassCount=7
Class1=CSplitTodialogApp
Class2=CSplitTodialogDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_ABOUTBOX
Class5=CmView
Resource2=IDD_EXAMPLEDLG
Class6=CmFormView
Resource3=IDD_SPLITTODIALOG_DIALOG
Resource4=IDR_MAINFRAME
Class4=CDlgFrame
Class7=CExampleDlg
Resource5=IDR_MAINTLBAR

[CLS:CSplitTodialogApp]
Type=0
HeaderFile=splitTodialog.h
ImplementationFile=splitTodialog.cpp
Filter=N

[CLS:CSplitTodialogDlg]
Type=0
HeaderFile=splitTodialogDlg.h
ImplementationFile=splitTodialogDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=splitTodialogDlg.h
ImplementationFile=splitTodialogDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_SPLITTODIALOG_DIALOG]
Type=1
Class=CSplitTodialogDlg
ControlCount=0

[CLS:CDlgFrame]
Type=0
HeaderFile=DlgFrame.h
ImplementationFile=DlgFrame.cpp
BaseClass=CFrameWnd
Filter=T
VirtualFilter=fWC

[CLS:CmView]
Type=0
HeaderFile=mView.h
ImplementationFile=mView.cpp
BaseClass=CView
Filter=C

[MNU:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_DLGMENU
CommandCount=1

[CLS:CmFormView]
Type=0
HeaderFile=mFormView.h
ImplementationFile=mFormView.cpp
BaseClass=CFormView
Filter=D
VirtualFilter=VWC
LastObject=CmFormView

[TB:IDR_MAINTLBAR]
Type=1
Class=?
Command1=ID_SETREADER
Command2=ID_CARDTYPE
Command3=ID_READSCARD_SIM
Command4=ID_WRITESCARD_SIM
Command5=ID_READADN_SIM
Command6=ID_WRITEADN_SIM
Command7=ID_READSMS_SIM
Command8=ID_WRITESMS_SIM
Command9=ID_READOURSCARD_SIM
Command10=ID_WRITEOURSCARD_SIM
Command11=ID_SORTNAME
Command12=ID_EDITITEM
Command13=ID_CLEAR
Command14=ID_DELONE
Command15=ID_MOVETOFIRST
Command16=ID_MOVEPREV
Command17=ID_MOVENEXT
Command18=ID_MOVELAST
CommandCount=18

[CLS:CExampleDlg]
Type=0
HeaderFile=ExampleDlg.h
ImplementationFile=ExampleDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CExampleDlg
VirtualFilter=dWC

[DLG:IDD_EXAMPLEDLG]
Type=1
Class=CExampleDlg
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

