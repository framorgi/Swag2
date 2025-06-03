#ifndef MBUTTON_H
#define MBUTTON_H

typedef enum
{
    on,
    off
} mbuttonstate;


class mbutton
{
    public:
    mbutton();
    
    private:
    mbuttonstate state_;
    void Process();
    void Init():

}

#endif  //MBUTTON_H