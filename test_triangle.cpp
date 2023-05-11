#include <wx/wx.h>
#include <iostream>



class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
    {
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

        //wxButton *button = new wxButton(panel, wxID_ANY, "Click Me", wxPoint(10, 10), wxSize(150, 30));

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