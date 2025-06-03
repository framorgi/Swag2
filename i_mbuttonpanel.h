/*
*  Momentary  buttons panel interface
*/

#ifndef I_MBUTTON_PANEL_H
#define I_MBUTTON_PANEL_H
#include "i_panel.h"

class i_mbuttonpanel :i_panel
{
    public:
    i_mbuttonpanel();
    void GetStatus();
    

    private:

    void Process();

}

#endif  //I_MBUTTON_PANEL_H