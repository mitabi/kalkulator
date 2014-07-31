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
#include "wx/combobox.h"
#include "wx/textctrl.h"
#include "GUIFrame.h"

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
    wxMessageBox("Kalkulator wersja: " FULLVERSION_STRING
                 "\n Data kompilacji: " YEAR "." MONTH "." DATE, _("Info"));
}
/*
 * FUNKCJA OBLICZAJ¥CA DANE
 */

void kalkulatorFrame::Oblicz(wxCommandEvent& event)
{



    float kCyl=0, kTlocz=0, kCisZas=0;
    double Wynik =0;
    //wxString mm="mm";

    if ( comJednCyl -> GetString( comJednCyl-> GetCurrentSelection()) == "mm")
    {
        kCyl=0.001;
    }

    else
    {
        if (comJednCyl -> GetString( comJednCyl-> GetCurrentSelection()) =="cm")
        {
            kCyl=0.01;
        }
        else
        {
            if (comJednCyl -> GetString( comJednCyl-> GetCurrentSelection()) =="m")
            {
                kCyl=1;
            }
            {

            }
        }
    }

    if (comJednTlocz -> GetString( comJednTlocz-> GetCurrentSelection()) =="mm")
    {
        kTlocz=0.001;
    }
    else
    {
        if (comJednTlocz -> GetString( comJednTlocz-> GetCurrentSelection())=="cm")
        {
            kTlocz=0.01;
        }
        else
        {
            if (comJednTlocz -> GetString( comJednTlocz-> GetCurrentSelection())=="m")
            {
                kTlocz=1;
            }

        }
    }

    if (comJednCisZas -> GetString( comJednCisZas-> GetCurrentSelection())=="kPa")
    {
        kCisZas=1000;
    }
    else
    {
        if (comJednCisZas -> GetString( comJednCisZas-> GetCurrentSelection())=="MPa")
        {
            kCisZas=1000000;
        }
        else
        {
            if (comJednCisZas -> GetString( comJednCisZas-> GetCurrentSelection())=="atm")
            {
                kCisZas=98066.5; // definicja atmosfery technicznej
            }
            else
            {
                if (comJednCisZas -> GetString( comJednCisZas-> GetCurrentSelection())=="Pa")
                {
                    kCisZas=1;
                }
            }

        }
    }

   // Wynik=kCyl*(sldSrCyl->GetValue())*kTlocz*(sldSrTlocz->GetValue())*kCisZas*(sldCisZas -> GetValue());
 Wynik=3.1415926*kCyl*(sldSrCyl->GetValue())/4*kCisZas*(sldCisZas -> GetValue());
    textLog -> AppendText( wxString::Format(wxT("%"), Wynik )+"\n");
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

void kalkulatorFrame::CisZas_Onscroll(wxScrollEvent& event)
{
    textCisZas->SetValue(wxString::Format(wxT("%i"),sldCisZas->GetValue()));
    Refresh();
}

void kalkulatorFrame::CleanLog(wxCommandEvent& event)
{
    textLog->Clear();
}

void kalkulatorFrame::OnStart(wxActivateEvent& event)
{
    textSrCyl -> SetValue(wxString::Format(wxT("%i"),sldSrCyl->GetValue()));
    textSrTlocz -> SetValue(wxString::Format(wxT("%i"),sldSrTlocz->GetValue()));
    textCisZas -> SetValue(wxString::Format(wxT("%i"),sldCisZas->GetValue()));
}


void kalkulatorFrame::SrCyl_OnSpin(wxSpinEvent& event)
{
    sldSrCyl-> SetValue(textSrCyl->GetValue());
}






