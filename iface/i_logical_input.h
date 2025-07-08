#ifndef I_LOGICAL_INPUT_H
#define I_LOGICAL_INPUT_H


class i_logical_input
{
    public:
    virtual void update()=0;
    virtual bool state() const = 0; // Read the logical input state
    virtual bool was_just_released() const = 0; // Check if the input was just released
    virtual bool was_just_pressed() const = 0; // Check if the input was just pressed
    virtual ~i_logical_input() = default; // Virtual destructor for proper cleanup
};

#endif  // I_LOGICAL_INPUT_H