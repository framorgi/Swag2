#ifndef I_DIGITAL_READER_H
#define I_DIGITAL_READER_H


class i_digital_reader
{
    public:
    virtual bool read() const=0;
    virtual ~i_digital_reader()=default;
}

#endif  //I_DIGITAL_READER_H