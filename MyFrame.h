#ifndef __MYFRAME_WX__
#define __MYFRAME_WX__

class MyFrame : public wxFrame
{
private:
	/* data */
	DECLARE_EVENT_TABLE()
public:
	MyFrame(const wxString& title);
	~MyFrame();
	void OnQuit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
};




#endif // !__MYFRAME_WX__