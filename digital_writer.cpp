#include "digital_writer.h"

digital_writer::digital_writer(uint8_t pin)
    : pin_(pin)
{
    pinMode(pin_, OUTPUT);
    write(false;) // Initialize to LOW
}


void digital_writer::write(bool val) 
{
    if (val)
        digitalWrite(pin_, HIGH);
    else
        digitalWrite(pin_, LOW);

}

digital_writer::~digital_writer()
{
}
