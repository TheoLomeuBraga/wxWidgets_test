#include <wx/wx.h>
#include <iostream>



class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
    {
        wxPanel *panel = new wxPanel(this, wxID_ANY);
        button = new wxButton(panel, wxID_ANY, "say hello", wxPoint(10, 10), wxSize(150, 30));
        button->Bind(wxEVT_BUTTON, &MyFrame::say_hello, this);
    }
    void say_hello(wxCommandEvent& event)
    {
        std::cout << "hello ^_^\n";
    }
private:
    wxButton *button;
};

class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {
        MyFrame *frame = new MyFrame("Hello World", wxPoint(50, 50), wxSize(450, 340));
        frame->Show(true);
        return true;
    }
};

int main(int argc, char **argv)
{
    MyApp app;
    std::cout << "Hello World!\n";
    return wxEntry(argc, argv);
}