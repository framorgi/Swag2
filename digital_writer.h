#ifndef DIGITAL_WRITER_H
#define DIGITAL_WRITER_H

#include "i_digital_writer.h"

class digital_writer : public i_digital_writer
{
private:
    uint8_t pin_;

public:
    digital_writer(uint8_t pin);
    void write(bool val)  override;
    ~digital_writer() override;
};
#endif // DIGITAL_WRITER_H