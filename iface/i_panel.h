/*
*  Generic panel interface
*/
#ifndef I_PANEL_H
#define I_PANEL_H

class i_panel
{
    public:
   
    virtual void TryAttach()=0;
    virtual void Attached()=0;
    


}

#endif  //I_PANEL_H