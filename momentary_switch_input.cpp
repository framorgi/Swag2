#include "momentary_switch_input.h"


momentary_switch_input::momentary_switch_input(std::shared_ptr<i_digital_reader> reader)
    : reader_(reader), 
    debounce_ms_(50),
    current_state_(false), 
    previous_state_(false), 
    last_debounce_time_(0), 
    pressed_event_(false),
    released_event_(false),
    debounce_state_(0)
{
}

void momentary_switch_input::update()
{
    bool read_value = reader_->read();
    unsigned long now_time = millis();

      
    switch (debounce_state_)
    {
    case 0:
        { //STATE 0: Initial state, waiting for a change
            if (read_value != previous_state_) 
            {
                // If the read value has changed, start the debounce process
                last_debounce_time_ = now_time;
                debounce_state_=1;
            
            }
        break;
    case 1:
        { //STATE 1: Valid debounce state
            if ((now_time - last_debounce_time_) > debounce_ms_) {

            debounce_state_ = 2; // Reset to initial state
        }
        }
        break;     
    case 2:
        { //STATE 2: Set current state
            if (read_value !=current_state_) 
            {
                current_state_=read_value;
                pressed_event_ = current_state_;
                released_event_ = !current_state_;
            }
            else {
                // If the read value has not changed, reset to initial state
                debounce_state_ = 0;
                pressed_event_ = false;
                released_event_ = false;
            }
        } 

    default:
        break;
    }
}
}

bool momentary_switch_input::state() const
{
    return current_state_;
}
bool momentary_switch_input::was_just_released() const
{
    return released_event_;
}
bool momentary_switch_input::was_just_pressed() const
{
    return pressed_event_;
}   