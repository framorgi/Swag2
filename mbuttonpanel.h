/*
*  I2C Momentary  buttons panel 
*/

#ifndef MBUTTON_PANEL_H
#define MBUTTON_PANEL_H
#include "i_panel.h"

class mbuttonpanel:i_mbuttonpanel
{
    public:
    mbuttonpanel();
    void GetStatus();
    
    void TryAttach();
    private:
    void Process();

}

#endif  //MBUTTON_PANEL_H