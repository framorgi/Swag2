/*
*  Generic panel interface
*/
#ifndef I_PANEL_H
#define I_PANEL_H

class i_panel
{
    public:
    i_panel();
    virtual void TryAttach()=0;
    

    private:
    bool attached_;
}

#endif  //I_PANEL_H