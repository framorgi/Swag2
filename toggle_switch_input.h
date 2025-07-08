#ifndef TOGGLE_SWITCH_INPUT_H
#define TOGGLE_SWITCH_INPUT_H

#include "i_logical_input.h"
#include <memory>

class toggle_switch_input: public i_logical_input
{
private:
    std::shared_ptr<i_digital_reader> reader_; // Pointer to the digital reader
    bool current_state_; // Current state of the toggle switch
    bool previous_state_; // Previous state of the toggle switch
    bool toggled_off_;  
    bool toggled_on_;  

    
public:
    toggle_switch_input(std::shared_ptr<i_digital_reader> reader);;

    void update()override;
    bool state() const override;// Read the logical input state
    bool was_just_released() const override; // Check if the input was just released
    bool was_just_pressed() const override; // Check if the input was just pressed
   

    ~toggle_switch_input();
};


#endif  //TOGGLE_SWITCH_INPUT_H