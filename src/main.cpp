#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Shraddha Singh
 * @date 2026-02-21
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

 // TODO 1:
 // Define RED pin (Use 9)
int red_led = 9;

 // TODO 2:
 // Define GREEN pin (Use 10)
int green_led = 10;

 // TODO 3:
 // Define BLUE pin (Use 11)
int blue_led = 11;

void setup() {

    // TODO 4:
    // Initialize Serial communication (9600 baud)
    Serial.begin(9600);

    // TODO 5:
    // Configure RGB pins as OUTPUT
    pinMode(red_led, OUTPUT);
    pinMode(green_led, OUTPUT);
    pinMode(blue_led, OUTPUT);

    // TODO 6:
    // Print initialization message
    Serial.println("RGB LED Control System Initialized");
}

void loop() {

    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)
    digitalWrite(red_led, HIGH);
    digitalWrite(green_led, LOW);
    digitalWrite(blue_led, LOW);
    delay(1000);

    // TODO 8:
    // Turn OFF red
    digitalWrite(red_led, LOW);

    // -------- ANALOG (PWM) MODE --------


    // TODO 9:
    // Set RED brightness using analogWrite()
    analogWrite(red_led, 255);   // Full brightness
    analogWrite(green_led, 0);
    analogWrite(blue_led, 0);

    // TODO 10:
    // Set GREEN brightness using analogWrite()
    analogWrite(red_led, 0);
    analogWrite(green_led, 128); // Medium brightness
    analogWrite(blue_led, 0);

    // TODO 11:
    // Set BLUE brightness using analogWrite()
    analogWrite(red_led, 0);
    analogWrite(green_led, 0);
    analogWrite(blue_led, 64);   // Low brightness
    // TODO 12:
    // Add delay for visible transition
    delay(1000);
}
