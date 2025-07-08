#ifndef DIGITAL_READER_H
#define DIGITAL_READER_H
#include "i_digital_reader.h"

class digital_reader : public i_digital_reader
{
private:
    uint8_t pin_;
public:
    digital_reader( uint8_t pin);
    bool read() const override;
    ~digital_reader() override;
};



#endif  // DIGITAL_READER_H