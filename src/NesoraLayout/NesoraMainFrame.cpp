// 音諳零号機四型
// Copyright (c) 2026 MucchoSP
// SPDX-License-Identifier: MIT
 
#include "NesoraMainFrame.h"
 
NesoraFuruMainFrame::NesoraFuruMainFrame()
    : wxFrame(NULL, wxID_ANY, "Hello World")
{
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
 
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
 
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
 
    SetMenuBar( menuBar );
 
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
 
    Bind(wxEVT_MENU, &NesoraFuruMainFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &NesoraFuruMainFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &NesoraFuruMainFrame::OnExit, this, wxID_EXIT);
}
 
void NesoraFuruMainFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}
 
void NesoraFuruMainFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets Hello World example",
                 "About Hello World", wxOK | wxICON_INFORMATION);
}
 
void NesoraFuruMainFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}
