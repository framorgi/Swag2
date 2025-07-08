#include "toggle_switch_input.h"

toggle_switch_input::toggle_switch_input(std::shared_ptr<i_digital_reader> reader) : 
                     reader_(std::move(reader)), 
                     current_state_(false), 
                     previous_state_(false), 
                     toggled_off_(false), 
                     toggled_on_(false) 
                     

{



}    
void toggle_switch_input::update() 
{
    previous_state_ = current_state_; 
    bool raw_state= reader_->read();
    if (raw_state =!current_state_)
    {
        current_state_ = raw_state;
    }
    toggled_on_=current_state_;
    toggled_off_ = !current_state_;
    
}

bool toggle_switch_input::state() const {
    return current_state_;
}
bool toggle_switch_input::was_just_released() const {
    return toggled_off_;
}
bool toggle_switch_input::was_just_pressed() const {
    return toggled_on_;
}

toggle_switch_input::~toggle_switch_input() {
    // Destructor implementation if needed
}

