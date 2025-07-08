#ifndef I_LOGICAL_OUTPUT_H
#define I_LOGICAL_OUTPUT_H


class i_logical_output
{
    public:
    virtual void set(bool val) = 0; // Set the logical output state
    virtual bool is_active() const = 0; // Get the current logical output state
    virtual void toggle() = 0; // Toggle the logical output state
    virtual ~i_logical_output() = default; // Virtual destructor for proper cleanup
};

#endif  // I_LOGICAL_OUTPUT_H