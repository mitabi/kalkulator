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
#include "wx/dialog.h"
#include "wx/filename.h"
#include "wx/filedlg.h"
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
    /* #if wxUSE_STATUSBAR
     *     statusBar->SetStatusText(_("Hello Code::Blocks user!"), 0);
     *     statusBar->SetStatusText(wxbuildinfo(short_f), 1);
     * #endif
     */
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
                 "\nData kompilacji: " YEAR "." MONTH "." DATE
                 "\n" + wxbuildinfo(short_f), _("Info"));

}
/*
 * FUNKCJA OBLICZAJACA DANE
 */

void kalkulatorFrame::Oblicz(wxCommandEvent& event)
{




    float kCyl=0, kTlocz=0, kCisZas=0;
    float Wynik =0;
    float powCyl =0, powTlocz = 0;

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
    powCyl = 3.1415926*(kCyl*(sldSrCyl->GetValue()))*(kCyl*(sldSrCyl->GetValue()))/4;
    powTlocz = 3.1415926*((kTlocz*(sldSrTlocz->GetValue()))*(kTlocz*(sldSrTlocz->GetValue())))/4;
    Wynik = 0.001*powCyl*kCisZas*(sldCisZas -> GetValue());

    textLog -> AppendText( wxString::Format(wxT("Powierzchnia cylindra: %f"), powCyl )+"m2\n");
    textLog -> AppendText( wxString::Format(wxT("Powierzchnia tłoczyska: %f"), powTlocz)+"m2\n");
    textLog -> AppendText( wxString::Format(wxT("Siła pchająca: %f"), Wynik)+"kN\n");
    textLog -> AppendText( wxString::Format(wxT("Siła ciągu: %f"),
                                            (0.001*(powCyl-powTlocz)*kCisZas*(sldCisZas -> GetValue())))
                           + "kN\n\n");

}
void kalkulatorFrame::sldSrTlocz_Onscroll(wxScrollEvent& event)
{
    if ((sldSrTlocz->GetValue())>(sldSrCyl->GetValue()))
    {
        sldSrTlocz-> SetValue(sldSrCyl->GetValue());
    }
    textSrTlocz->SetValue(wxString::Format(wxT("%i"),sldSrTlocz->GetValue()));

    Refresh();
}
void kalkulatorFrame::sldSrCyl_Onscroll(wxScrollEvent& event)
{

    if ((sldSrTlocz->GetValue())>(sldSrCyl->GetValue()))
    {
        sldSrTlocz-> SetValue(sldSrCyl->GetValue());
        textSrTlocz->SetValue(wxString::Format(wxT("%i"),sldSrTlocz->GetValue()));
    }
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
    Refresh();
}

void kalkulatorFrame::SrTlocz_OnSpin(wxSpinEvent& event)
{
    sldSrTlocz-> SetValue(textSrTlocz->GetValue());
    Refresh();
}

void kalkulatorFrame::CisZas_OnSpin(wxSpinEvent& event)
{
    sldCisZas-> SetValue(textCisZas->GetValue());
    Refresh();
}

void kalkulatorFrame::SaveFile(wxCommandEvent& WXUNUSED(event))
{
    wxFileDialog * saveFileDialog = new wxFileDialog(this);

    if (saveFileDialog->ShowModal() == wxID_OK)
    {
        wxFileDialog saveFileDialog(this, _("Save XYZ file"), "", "",
                                    "XYZ files (*.xyz)|*.xyz", wxFD_SAVE|wxFD_OVERWRITE_PROMPT);
        if (saveFileDialog.ShowModal() == wxID_CANCEL)
            return; // the user changed idea...
// save the current contents in the file;
// this can be done with e.g. wxWidgets output streams:



    }
}




