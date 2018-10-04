#include "Arduino.h"                                                            

enum {
    // Pin number for the LED
    LED_PIN = 13,
};

void setup() {
	// Sets pin to output for LED.
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    // Is the LED currently on or off?
    static boolean onOff = false;

    // Set the LED to the desired state.
    digitalWrite(LED_PIN, onOff);

    // Get ready for the next invocation of this functions
    onOff = !onOff;

    delay(1000);
}
