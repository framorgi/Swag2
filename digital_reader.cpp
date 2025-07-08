#include "digital_reader.h"

digital_reader::digital_reader(uint8_t pin) :
    pin_(pin)
{
}

bool digital_reader::read() const
{
    return digitalRead(pin_)==HIGH;
}

digital_reader::~digital_reader()
{
}
