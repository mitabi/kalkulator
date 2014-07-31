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
    fgSizer1 = new wxFlexGridSizer( 3, 4, 0, 0 );
    fgSizer1->SetFlexibleDirection( wxBOTH );
    fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

    lblSrCyl = new wxStaticText( panelSilowniki, wxID_ANY, wxT("Średnica cylindra"), wxDefaultPosition, wxDefaultSize, 0 );
    lblSrCyl->Wrap( -1 );
    fgSizer1->Add( lblSrCyl, 0, wxALL|wxEXPAND, 5 );

    sldSrCyl = new wxSlider( panelSilowniki, wxID_ANY, 100, 1, 999, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    sldSrCyl->SetMinSize( wxSize( 250,-1 ) );

    fgSizer1->Add( sldSrCyl, 0, wxALL|wxEXPAND, 5 );

    textSrCyl = new wxTextCtrl( panelSilowniki, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    textSrCyl->SetMinSize( wxSize( 50,-1 ) );

    fgSizer1->Add( textSrCyl, 0, wxALL|wxEXPAND, 5 );

    comJednCyl = new wxComboBox( panelSilowniki, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
    comJednCyl->Append( wxT("mm") );
    comJednCyl->Append( wxT("cm") );
    comJednCyl->Append( wxT("m") );
    comJednCyl->SetSelection( 0 );
    comJednCyl->SetMinSize( wxSize( 50,-1 ) );

    fgSizer1->Add( comJednCyl, 0, wxALL|wxEXPAND, 5 );

    lblSrTlocz = new wxStaticText( panelSilowniki, wxID_ANY, wxT("Średnica tłoczyska"), wxDefaultPosition, wxDefaultSize, 0 );
    lblSrTlocz->Wrap( -1 );
    fgSizer1->Add( lblSrTlocz, 0, wxALL|wxEXPAND, 5 );

    sldSrTlocz = new wxSlider( panelSilowniki, wxID_ANY, 100, 1, 999, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
    sldSrTlocz->SetMinSize( wxSize( 250,-1 ) );

    fgSizer1->Add( sldSrTlocz, 0, wxALL|wxEXPAND, 5 );

    textSrTlocz = new wxTextCtrl( panelSilowniki, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    textSrTlocz->SetMinSize( wxSize( 50,-1 ) );

    fgSizer1->Add( textSrTlocz, 0, wxALL|wxEXPAND, 5 );

    comJednTlocz = new wxComboBox( panelSilowniki, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
    comJednTlocz->Append( wxT("mm") );
    comJednTlocz->Append( wxT("cm") );
    comJednTlocz->Append( wxT("m") );
    comJednTlocz->SetSelection( 0 );
    comJednTlocz->SetMinSize( wxSize( 50,-1 ) );

    fgSizer1->Add( comJednTlocz, 0, wxALL|wxEXPAND, 5 );


    bSizer3->Add( fgSizer1, 1, wxEXPAND, 5 );

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
    textLog->SetMinSize( wxSize( -1,50 ) );

    bSizer1->Add( textLog, 0, wxALIGN_LEFT|wxEXPAND, 5 );

    buttonCleanLog = new wxButton( this, wxID_ANY, wxT("Czyść"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer1->Add( buttonCleanLog, 0, wxEXPAND, 5 );


    this->SetSizer( bSizer1 );
    this->Layout();

    // Connect Events
    this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
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
    sldSrTlocz->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    buttonOblicz->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::Oblicz ), NULL, this );
    buttonCleanLog->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::CleanLog ), NULL, this );
}

GUIFrame::~GUIFrame()
{
    // Disconnect Events
    this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
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
    sldSrTlocz->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    sldSrTlocz->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( GUIFrame::sldSrTlocz_Onscroll ), NULL, this );
    buttonOblicz->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::Oblicz ), NULL, this );
    buttonCleanLog->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::CleanLog ), NULL, this );

}
