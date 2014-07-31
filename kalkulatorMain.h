/***************************************************************
 * Name:      kalkulatorMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2014-07-28
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef KALKULATORMAIN_H
#define KALKULATORMAIN_H



#include "kalkulatorApp.h"
#include <wx/msgdlg.h>

#include "GUIFrame.h"

class kalkulatorFrame: public GUIFrame
{
public:
    kalkulatorFrame(wxFrame *frame);
    ~kalkulatorFrame();
private:
    virtual void OnClose(wxCloseEvent& event);
    virtual void OnQuit(wxCommandEvent& event);
    virtual void OnAbout(wxCommandEvent& event);
    virtual void Oblicz(wxCommandEvent& event);
    virtual void sldSrCyl_Onscroll( wxScrollEvent& event ) ;
    virtual void sldSrTlocz_Onscroll( wxScrollEvent& event ) ;
    virtual void CleanLog( wxCommandEvent& event );
    virtual void CisZas_Onscroll( wxScrollEvent& event ) ;
    virtual void OnStart(wxActivateEvent& event);
    virtual void SrCyl_OnSpin(wxSpinEvent& event);


};

#endif // KALKULATORMAIN_H
