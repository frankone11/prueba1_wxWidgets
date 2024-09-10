#include <wx/wx.h>
#include "MyApp.h"
#include "MyFrame.h"

MyApp::MyApp(/* args */)
{
}

MyApp::~MyApp()
{
}

bool MyApp::OnInit()
{
	// Create the main application window
	MyFrame *frame = new MyFrame(wxT("Minimal wxWidget App"));

	// Show it
	frame->Show(true);

	//Startthe event loop
	return true;
}