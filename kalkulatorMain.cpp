/***************************************************************
 * Name:      kalkulatorMain.cpp
 * Purpose:   Code for Application Frame
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

#include "kalkulatorMain.h"

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


kalkulatorFrame::kalkulatorFrame(wxFrame *frame)
    : GUIFrame(frame)
{
#if wxUSE_STATUSBAR
    statusBar->SetStatusText(_("Hello Code::Blocks user!"), 0);
    statusBar->SetStatusText(wxbuildinfo(short_f), 1);
#endif
}

kalkulatorFrame::~kalkulatorFrame()
{
}

void kalkulatorFrame::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void kalkulatorFrame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void kalkulatorFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
void kalkulatorFrame::Oblicz(wxCommandEvent& event)
{
   long srCyl;
    wxString SrCyl = textSrCyl -> GetValue();
    wxString number(wxT("3.14159"));
 textLog -> AppendText(textSrCyl -> GetValue()+"\n");
}

void kalkulatorFrame::sldSrCyl_Onscroll(wxScrollEvent& event)
{
    textSrCyl->SetValue(wxString::Format(wxT("%i"),sldSrCyl->GetValue()));
    Refresh();
}

void kalkulatorFrame::sldSrTlocz_Onscroll(wxScrollEvent& event)
{
    textSrTlocz->SetValue(wxString::Format(wxT("%i"),sldSrTlocz->GetValue()));
    Refresh();
}

void kalkulatorFrame::CleanLog(wxCommandEvent& event)
{
    textLog->Clear();
}






