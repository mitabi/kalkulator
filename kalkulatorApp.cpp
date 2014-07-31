/***************************************************************
 * Name:      kalkulatorApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2014-07-28
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "kalkulatorApp.h"
#include "kalkulatorMain.h"

IMPLEMENT_APP(kalkulatorApp);

bool kalkulatorApp::OnInit()
{
    kalkulatorFrame* frame = new kalkulatorFrame(0L);
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();

    return true;
}
