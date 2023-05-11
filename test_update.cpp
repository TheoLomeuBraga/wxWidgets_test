#include <wx/wx.h>
#include <iostream>



class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
    {
        Connect(wxEVT_PAINT, wxPaintEventHandler(MyFrame::update));
    }
    void update(wxPaintEvent &event){
        std::cout << "update\n";
    }
};

class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {
        MyFrame *frame = new MyFrame("Hello World", wxPoint(50, 50), wxSize(450, 340));
        frame->Show(true);
        wxPanel *panel = new wxPanel(frame, wxID_ANY);

        return true;
    }
};

int main(int argc, char **argv)
{
    MyApp app;
    std::cout << "Hello World!\n";
    return wxEntry(argc, argv);
}

// wxIMPLEMENT_APP(MyApp);