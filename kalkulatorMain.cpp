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
#include "version.h"
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
    wxString msg = FULLVERSION_STRING;
    wxMessageBox("Kalkulator wersja: " FULLVERSION_STRING "\n Data kompilacji: " YEAR "." MONTH "." DATE, _("Info"));
}
void kalkulatorFrame::Oblicz(wxCommandEvent& event)
{
    wxInt32 test1 = sldSrCyl->GetValue();
    wxInt32 test2 =sldSrTlocz->GetValue();
    wxInt32 test = test1*test2;
    textLog -> AppendText( wxString::Format(wxT("%i"),test)+"\n");
}
void kalkulatorFrame::sldSrTlocz_Onscroll(wxScrollEvent& event)
{
    textSrTlocz->SetValue(wxString::Format(wxT("%i"),sldSrTlocz->GetValue()));
    Refresh();
}
void kalkulatorFrame::sldSrCyl_Onscroll(wxScrollEvent& event)
{
    textSrCyl->SetValue(wxString::Format(wxT("%i"),sldSrCyl->GetValue()));
    Refresh();
}



void kalkulatorFrame::CleanLog(wxCommandEvent& event)
{
    textLog->Clear();
}






