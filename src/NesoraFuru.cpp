// 音諳零号機四型
// Copyright (c) 2026 MucchoSP
// SPDX-License-Identifier: MIT
 
#include "NesoraFuru.h"
 
wxIMPLEMENT_APP(NesoraFuruVoiceMaker);
 
bool NesoraFuruVoiceMaker::OnInit() {
    NesoraFuruMainFrame *frame = new NesoraFuruMainFrame();
    frame->Show(true);
    return true;
}
 