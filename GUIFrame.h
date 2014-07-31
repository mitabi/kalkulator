///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIFRAME_H__
#define __GUIFRAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/spinctrl.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/textctrl.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define idMenuQuit 1000
#define idMenuAbout 1001

///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* mbar;
		wxMenu* fileMenu;
		wxMenu* helpMenu;
		wxStatusBar* statusBar;
		wxNotebook* m_notebook1;
		wxPanel* panelSilowniki;
		wxStaticText* lblSrCyl;
		wxSlider* sldSrCyl;
		wxSpinCtrl* textSrCyl;
		wxChoice* comJednCyl;
		wxStaticText* lblSrTlocz;
		wxSlider* sldSrTlocz;
		wxSpinCtrl* textSrTlocz;
		wxChoice* comJednTlocz;
		wxStaticText* lblCisZas;
		wxSlider* sldCisZas;
		wxSpinCtrl* textCisZas;
		wxChoice* comJednCisZas;
		wxButton* buttonOblicz;
		wxPanel* m_panel3;
		wxTextCtrl* textLog;
		wxButton* buttonCleanLog;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnStart( wxActivateEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void sldSrCyl_Onscroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void SrCyl_OnSpin( wxSpinEvent& event ) { event.Skip(); }
		virtual void sldSrTlocz_Onscroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void CisZas_Onscroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void Oblicz( wxCommandEvent& event ) { event.Skip(); }
		virtual void CleanLog( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Kalkulator"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 745,466 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~GUIFrame();
	
};

#endif //__GUIFRAME_H__
