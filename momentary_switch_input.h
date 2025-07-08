#ifndef MOMENTARY_SWITCH_INPUT_H
#define MOMENTARY_SWITCH_INPUT_H

#include "i_logical_input.h"
#include <memory>

class momentary_switch_input: public i_logical_input
{
private:
    std::shared_ptr<i_digital_reader> reader_; // Pointer to the digital reader
    bool current_state_; // Current state of the MOMENTARY switch
    bool previous_state_; // Previous state of the MOMENTARY switch
    unsigned long last_debounce_time_;  
    bool debounce_ms_;  
    bool pressed_event_;
    bool released_event_;
    int debounce_state_;
    
public:
    momentary_switch_input(std::shared_ptr<i_digital_reader> reader);;

    void update()override;
    bool state() const override;// Read the logical input state
    bool was_just_released() const override; // Check if the input was just released
    bool was_just_pressed() const override; // Check if the input was just pressed
   

    ~momentary_switch_input();
};


#endif  //MOMENTARY_SWITCH_INPUT_H