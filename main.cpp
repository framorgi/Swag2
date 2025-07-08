//********************************** 
/*
 *   Swag Control 2.0    
 *
 */
#include <memory>
#include "Servo.h"
#include "toggle_switch_input.h"
#include "momentary_switch_input.h"
#include "led_output.h"
#include "relay_output.h"
#define SWAG_VERSION "2.0.0"

//********************************** */
// Pin Definitions

#define PIN_BUTTON_1 4
#define PIN_BUTTON_2 5

#define PIN_TOGGLE_SWITCH_1 6
#define PIN_TOGGLE_SWITCH_2 7


#define PIN_SERVO_FIRE_1 8
#define PIN_SERVO_FIRE_2 9

#define PIN_RELAY_FIRE_1 10
#define PIN_RELAY_FIRE_2 11

#define PIN_LED_1 12



//********************************** */ */
// Global Variables
//********************************** */ */

//  Input definitions

std::shared_ptr<i_logical_input> button_1=
    std::make_shared<momentary_switch_input>(
        std::make_shared<digital_reader>(PIN_BUTTON_1));

std::shared_ptr<i_logical_input> button_2=
    std::make_shared<momentary_switch_input>(
        std::make_shared<digital_reader>(PIN_BUTTON_2));

std::shared_ptr<i_logical_input> toggle_switch_1=
    std::make_shared<toggle_switch_input>(
        std::make_shared<digital_reader>(PIN_TOGGLE_SWITCH_1));

std::shared_ptr<i_logical_input> toggle_switch_2=   
    std::make_shared<toggle_switch_input>(
        std::make_shared<digital_reader>(PIN_TOGGLE_SWITCH_2)); 


//  Output definitions

std::shared_ptr<i_logical_output> led_1 =
    std::make_shared<led_output>(
        std::make_shared<digital_writer>(PIN_LED_1));


std::shared_ptr<i_logical_output> relay_fire_1 =
    std::make_shared<relay_output>(
        std::make_shared<digital_writer>(PIN_RELAY_FIRE_1));    

std::shared_ptr<i_logical_output> relay_fire_2 =        
    std::make_shared<relay_output>(
        std::make_shared<digital_writer>(PIN_RELAY_FIRE_2));


void setup()
{
    led_1->set(true);
}
void loop()
{

}