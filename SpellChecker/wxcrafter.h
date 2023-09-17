//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_SPELLCHECKER_WXCRAFTER_BASE_CLASSES_H
#define _CODELITE_SPELLCHECKER_WXCRAFTER_BASE_CLASSES_H

// clang-format off
#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/hyperlink.h>
#include <wx/textctrl.h>
#include <wx/listbox.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

// clang-format on

class SpellCheckerSettings_base : public wxDialog
{
protected:
    wxPanel* m_panel34;
    wxStaticText* m_staticText2;
    wxDirPickerCtrl* m_pDirPicker;
    wxHyperlinkCtrl* m_pHyperlink;
    wxStaticText* m_staticText4;
    wxTextCtrl* m_pCurrentLanguage;
    wxListBox* m_pLanguageList;
    wxCheckBox* m_pCaseSensitiveUserDictionary;
    wxButton* m_buttonClearIgnoreList;
    wxStdDialogButtonSizer* m_stdBtnSizer12;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnInitDialog(wxInitDialogEvent& event) { event.Skip(); }
    virtual void OnDirChanged(wxFileDirPickerEvent& event) { event.Skip(); }
    virtual void OnLanguageSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearIgnoreList(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOk(wxCommandEvent& event) { event.Skip(); }
    virtual void OnUpdateOk(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxDirPickerCtrl* GetPDirPicker() { return m_pDirPicker; }
    wxHyperlinkCtrl* GetPHyperlink() { return m_pHyperlink; }
    wxStaticText* GetStaticText4() { return m_staticText4; }
    wxTextCtrl* GetPCurrentLanguage() { return m_pCurrentLanguage; }
    wxListBox* GetPLanguageList() { return m_pLanguageList; }
    wxCheckBox* GetPCaseSensitiveUserDictionary() { return m_pCaseSensitiveUserDictionary; }
    wxButton* GetButtonClearIgnoreList() { return m_buttonClearIgnoreList; }
    wxPanel* GetPanel34() { return m_panel34; }
    SpellCheckerSettings_base(wxWindow* parent, wxWindowID id = wxID_ANY,
                              const wxString& title = _("SpellChecker Settings"),
                              const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                              long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~SpellCheckerSettings_base();
};

class CorrectSpellingDlg_base : public wxDialog
{
protected:
    wxStaticText* m_staticText1;
    wxTextCtrl* m_pMisspelling;
    wxStaticText* m_staticText2;
    wxListBox* m_pSuggestions;
    wxButton* m_button1;
    wxButton* m_button2;
    wxButton* m_button4;
    wxButton* m_button5;
    wxButton* m_button3;

protected:
    virtual void OnInitDialog(wxInitDialogEvent& event) { event.Skip(); }
    virtual void OnSuggestionSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDblClickSuggestions(wxCommandEvent& event) { event.Skip(); }
    virtual void OnChangeClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnIgnoreClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddClick(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSuggestClick(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxTextCtrl* GetPMisspelling() { return m_pMisspelling; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxListBox* GetPSuggestions() { return m_pSuggestions; }
    wxButton* GetButton1() { return m_button1; }
    wxButton* GetButton2() { return m_button2; }
    wxButton* GetButton4() { return m_button4; }
    wxButton* GetButton5() { return m_button5; }
    wxButton* GetButton3() { return m_button3; }
    CorrectSpellingDlg_base(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Misspelling found!"),
                            const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                            long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~CorrectSpellingDlg_base();
};

#endif
