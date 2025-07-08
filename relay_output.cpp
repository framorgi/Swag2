
#include "relay_output.h"

relay_output::relay_output(std::shared_ptr<i_digital_writer> writer,bool active_val) :
    writer_(std::move(writer)),
    current_state_(false),
    active_value_(active_val) // Assuming active value is HIGH for LED
{
}

void relay_output::set(bool val)
{
    current_state_ = val;
    writer_->write(current_state_?active_value_:(!active_value_));
}

bool relay_output::is_active() const
{
    return current_state_;
}

void relay_output::toggle()
{
    current_state_ = !current_state_;
    writer_->write(current_state_?active_value_:(!active_value_));  
}

relay_output::~relay_output()
{
}
