///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );

    mbar = new wxMenuBar( 0 );
    fileMenu = new wxMenu();
    wxMenuItem* menuFileSave;
    menuFileSave = new wxMenuItem( fileMenu, wxID_ANY, wxString( wxT("&Zapisz") ) + wxT('\t') + wxT("Ctrl+S"), wxEmptyString, wxITEM_NORMAL );
    fileMenu->Append( menuFileSave );

    wxMenuItem* menuFileQuit;
    menuFileQuit = new wxMenuItem( fileMenu, idMenuQuit, wxString( wxT("&Wyjście") ) + wxT('\t') + wxT("Alt+F4"), wxT("Quit the application"), wxITEM_NORMAL );
    fileMenu->Append( menuFileQuit );

    mbar->Append( fileMenu, wxT("&Plik") );

    helpMenu = new wxMenu();
    wxMenuItem* menuHelpAbout;
    menuHelpAbout = new wxMenuItem( helpMenu, idMenuAbout, wxString( wxT("&O programie") ) + wxT('\t') + wxT("F1"), wxT("Show info about this application"), wxITEM_NORMAL );
    helpMenu->Append( menuHelpAbout );

    mbar->Append( helpMenu, wxT("&Pomoc") );

    this->SetMenuBar( mbar );

    statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );
    wxBoxSizer* bSizer1;
    bSizer1 = new wxBoxSizer( wxVERTICAL );

    m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
    panelSilowniki = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer3;
    bSizer3 = new wxBoxSizer( wxVERTICAL );

    wxFlexGridSizer* fgSizer1;
    fgSizer1 = new wxFlexGridSizer( 5, 4, 0, 0 );
    fgSizer1->SetFlexibleDirection( wxBOTH );
    fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

    lblSrCyl = new wxStaticText( panelSilowniki, wxID_ANY, wxT("Średnica cylindra"), wxDefaultPosition, wxDefaultSize, 0 );
    lblSrCyl->Wrap( -1 );
    fgSizer1->Add( lblSrCyl, 0, wxALL|wxEXPAND, 5 );

    sldSrCyl = new wxSlider( panelSilowniki, wxID_ANY, 100, 1, 999, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    sldSrCyl->SetMinSize( wxSize( 250,-1 ) );

    fgSizer1->Add( sldSrCyl, 0, wxALL|wxEXPAND, 5 );

    textSrCyl = new wxSpinCtrl( panelSilowniki, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 1, 999, 0 );
    fgSizer1->Add( textSrCyl, 0, wxALL|wxEXPAND, 5 );

    wxString comJednCylChoices[] = { wxT("mm"), wxT("cm"), wxT("m") };
    int comJednCylNChoices = sizeof( comJednCylChoices ) / sizeof( wxString );
    comJednCyl = new wxChoice( panelSilowniki, wxID_ANY, wxDefaultPosition, wxSize( 50,-1 ), comJednCylNChoices, comJednCylChoices, 0 );
    comJednCyl->SetSelection( 0 );
    fgSizer1->Add( comJednCyl, 0, wxALL|wxEXPAND, 5 );

    lblSrTlocz = new wxStaticText( panelSilowniki, wxID_ANY, wxT("Średnica tłoczyska"), wxDefaultPosition, wxDefaultSize, 0 );
    lblSrTlocz->Wrap( -1 );
    fgSizer1->Add( lblSrTlocz, 0, wxALL|wxEXPAND, 5 );

    sldSrTlocz = new wxSlider( panelSilowniki, wxID_ANY, 100, 1, 999, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    sldSrTlocz->SetMinSize( wxSize( 250,-1 ) );

    fgSizer1->Add( sldSrTlocz, 0, wxALL|wxEXPAND, 5 );

    textSrTlocz = new wxSpinCtrl( panelSilowniki, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 1, 999, 0 );
    fgSizer1->Add( textSrTlocz, 0, wxALL|wxEXPAND, 5 );

    wxString comJednTloczChoices[] = { wxT("mm"), wxT("cm"), wxT("m") };
    int comJednTloczNChoices = sizeof( comJednTloczChoices ) / sizeof( wxString );
    comJednTlocz = new wxChoice( panelSilowniki, wxID_ANY, wxDefaultPosition, wxSize( 50,-1 ), comJednTloczNChoices, comJednTloczChoices, 0 );
    comJednTlocz->SetSelection( 0 );
    fgSizer1->Add( comJednTlocz, 0, wxALL|wxEXPAND, 5 );

    lblSkokTlocz = new wxStaticText( panelSilowniki, wxID_ANY, wxT("Skok tłoczyska"), wxDefaultPosition, wxDefaultSize, 0 );
    lblSkokTlocz->Wrap( -1 );
    fgSizer1->Add( lblSkokTlocz, 0, wxALL, 5 );

    sldSkokTlocz = new wxSlider( panelSilowniki, wxID_ANY, 100, 1, 999, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    fgSizer1->Add( sldSkokTlocz, 0, wxALL|wxEXPAND, 5 );

    textSkokTlocz = new wxSpinCtrl( panelSilowniki, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
    fgSizer1->Add( textSkokTlocz, 0, wxALL, 5 );

    wxString comJednSkokTloczChoices[] = { wxT("mm"), wxT("cm"), wxT("m") };
    int comJednSkokTloczNChoices = sizeof( comJednSkokTloczChoices ) / sizeof( wxString );
    comJednSkokTlocz = new wxChoice( panelSilowniki, wxID_ANY, wxDefaultPosition, wxSize( 50,-1 ), comJednSkokTloczNChoices, comJednSkokTloczChoices, 0 );
    comJednSkokTlocz->SetSelection( 0 );
    fgSizer1->Add( comJednSkokTlocz, 0, wxALL, 5 );

    lblCisZas = new wxStaticText( panelSilowniki, wxID_ANY, wxT("Ciśnienie zasilania"), wxDefaultPosition, wxDefaultSize, 0 );
    lblCisZas->Wrap( -1 );
    fgSizer1->Add( lblCisZas, 0, wxALL|wxEXPAND, 5 );

    sldCisZas = new wxSlider( panelSilowniki, wxID_ANY, 150, 0, 999, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    fgSizer1->Add( sldCisZas, 0, wxALL|wxEXPAND, 5 );

    textCisZas = new wxSpinCtrl( panelSilowniki, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), wxSP_ARROW_KEYS, 1, 999, 0 );
    fgSizer1->Add( textCisZas, 0, wxALL|wxEXPAND, 5 );

    wxString comJednCisZasChoices[] = { wxT("Pa"), wxT("kPa"), wxT("MPa"), wxT("atm") };
    int comJednCisZasNChoices = sizeof( comJednCisZasChoices ) / sizeof( wxString );
    comJednCisZas = new wxChoice( panelSilowniki, wxID_ANY, wxDefaultPosition, wxSize( 50,-1 ), comJednCisZasNChoices, comJednCisZasChoices, 0 );
    comJednCisZas->SetSelection( 2 );
    fgSizer1->Add( comJednCisZas, 0, wxALL|wxEXPAND, 5 );


    bSizer3->Add( fgSizer1, 1, wxEXPAND, 5 );

    wxBoxSizer* bSizer31;
    bSizer31 = new wxBoxSizer( wxVERTICAL );

    m_textCtrl2 = new wxTextCtrl( panelSilowniki, wxID_ANY, wxT("Wiadomość testowa"), wxDefaultPosition, wxDefaultSize, wxTE_CENTRE|wxNO_BORDER );
    m_textCtrl2->SetForegroundColour( wxColour( 220, 50, 54 ) );
    m_textCtrl2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

    bSizer31->Add( m_textCtrl2, 0, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


    bSizer3->Add( bSizer31, 0, wxEXPAND, 5 );

    buttonOblicz = new wxButton( panelSilowniki, wxID_ANY, wxT("Oblicz"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer3->Add( buttonOblicz, 0, wxEXPAND, 5 );


    panelSilowniki->SetSizer( bSizer3 );
    panelSilowniki->Layout();
    bSizer3->Fit( panelSilowniki );
    m_notebook1->AddPage( panelSilowniki, wxT("Silowniki"), true );
    m_panel3 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    m_notebook1->AddPage( m_panel3, wxT("a page"), false );

    bSizer1->Add( m_notebook1, 1, wxEXPAND, 5 );

    textLog = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), wxTE_MULTILINE );
    textLog->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_CAPTIONTEXT ) );
    textLog->SetMinSize( wxSize( -1,50 ) );

    bSizer1->Add( textLog, 1, wxEXPAND, 5 );

    buttonCleanLog = new wxButton( this, wxID_ANY, wxT("Czyść"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer1->Add( buttonCleanLog, 0, wxEXPAND, 5 );


    this->SetSizer( bSizer1 );
    this->Layout();

    // Connect Events
    this->Connect( wxEVT_ACTIVATE, wxActivateEventHandler( GUIFrame::OnStart ) );
    this->Connect( wxEVT_ACTIVATE_APP, wxActivateEventHandler( GUIFrame::OnStart ) );
    this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
    this->Connect( menuFileSave->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::SaveFile ) );
    this->Connect( menuFileQuit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
    this->Connect( menuHelpAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
    sldSrCyl->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    textSrCyl->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( GUIFrame::SrCyl_OnSpin ), NULL, this );
    textSrCyl->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::SrCyl_OnSpin ), NULL, this );
    textSrCyl->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( GUIFrame::SrCyl_OnSpin ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    textSrTlocz->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( GUIFrame::SrTlocz_OnSpin ), NULL, this );
    textSrTlocz->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::SrTlocz_OnSpin ), NULL, this );
    textSrTlocz->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( GUIFrame::SrTlocz_OnSpin ), NULL, this );
    sldCisZas->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    textCisZas->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( GUIFrame::CisZas_OnSpin ), NULL, this );
    textCisZas->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::CisZas_OnSpin ), NULL, this );
    textCisZas->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( GUIFrame::CisZas_OnSpin ), NULL, this );
    buttonOblicz->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::Oblicz ), NULL, this );
    buttonCleanLog->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::CleanLog ), NULL, this );
}

GUIFrame::~GUIFrame()
{
    // Disconnect Events
    this->Disconnect( wxEVT_ACTIVATE, wxActivateEventHandler( GUIFrame::OnStart ) );
    this->Disconnect( wxEVT_ACTIVATE_APP, wxActivateEventHandler( GUIFrame::OnStart ) );
    this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
    this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::SaveFile ) );
    this->Disconnect( idMenuQuit, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnQuit ) );
    this->Disconnect( idMenuAbout, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUIFrame::OnAbout ) );
    sldSrCyl->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    sldSrCyl->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( GUIFrame::sldSrCyl_Onscroll ), NULL, this );
    textSrCyl->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( GUIFrame::SrCyl_OnSpin ), NULL, this );
    textSrCyl->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::SrCyl_OnSpin ), NULL, this );
    textSrCyl->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( GUIFrame::SrCyl_OnSpin ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    textSrTlocz->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( GUIFrame::SrTlocz_OnSpin ), NULL, this );
    textSrTlocz->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::SrTlocz_OnSpin ), NULL, this );
    textSrTlocz->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( GUIFrame::SrTlocz_OnSpin ), NULL, this );
    sldCisZas->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    sldCisZas->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( GUIFrame::CisZas_Onscroll ), NULL, this );
    textCisZas->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( GUIFrame::CisZas_OnSpin ), NULL, this );
    textCisZas->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::CisZas_OnSpin ), NULL, this );
    textCisZas->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( GUIFrame::CisZas_OnSpin ), NULL, this );
    buttonOblicz->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::Oblicz ), NULL, this );
    buttonCleanLog->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::CleanLog ), NULL, this );

}
