#ifndef I_DIGITAL_WRITER_H
#define I_DIGITAL_WRITER_H

class i_digital_writer
{
    public:
    virtual void write(bool val) =0;
    virtual ~i_digital_writer()=default;
}

#endif  //I_DIGITAL_WRITER_H