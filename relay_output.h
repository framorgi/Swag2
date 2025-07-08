#ifndef RELAY_OUTPUT_H
#define RELAY_OUTPUT_H

#include "i_logical_output.h"
#include "i_digital_writer.h"
#include <memory>
class relay_output : public i_logical_output
{
private:

    std::shared_ptr<i_digital_writer> writer_; // Pointer to the digital writer
    bool current_state_; // Current state of the RELAY output
    bool active_value_; // The value that represents the RELAY being "on" (usually HIGH)

public:
    relay_output(std::shared_ptr<i_digital_writer> writer, bool active_val = true); // Constructor with optional active value

    void set(bool val) override; // Set the logical output state
    bool is_active() const override; // Get the current logical output state
    void toggle() override; // Toggle the logical output state

    ~relay_output() override; // Virtual destructor for proper cleanup
};
#endif  // RELAY_OUTPUT_H