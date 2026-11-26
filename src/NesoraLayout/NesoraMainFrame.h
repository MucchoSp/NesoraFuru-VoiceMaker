// 音諳零号機四型
// Copyright (c) 2026 MucchoSP
// SPDX-License-Identifier: MIT
#pragma once
#include <wx/wx.h>

#include <NesoraFuru.h>

#ifndef NESORA_MAIN_FRAME_H
#define NESORA_MAIN_FRAME_H

enum {
    ID_Hello = 1
};

class NesoraFuruMainFrame : public wxFrame {
public:
    NesoraFuruMainFrame();
 
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

    nesora::NesoraFuru furu{"",""};
};
 
#endif // NESORA_MAIN_FRAME_H