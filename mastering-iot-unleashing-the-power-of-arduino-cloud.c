/*
 * Course: Mastering Iot Unleashing The Power Of Arduino Cloud
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Mastering Iot Unleashing The Power Of Arduino Cloud" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/mastering-iot-unleashing-the-power-of-arduino-cloud/
 * Repository: https://github.com/engasm89/mastering-iot-unleashing-the-power-of-arduino-cloud
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: Mastering Iot Unleashing The Power Of Arduino Cloud
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Mastering Iot Unleashing The Power Of Arduino Cloud
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Illustrative serial
#include <string.h> // String handling

#define OUTPUT 1 // Output mode
#define INPUT 0 // Input mode

// Pins for a mock sensor
static const int TEMP_SENSOR_PIN = 0; // A0 temperature sensor

// Stubs
void pinMode(int pin, int mode) { /* set */ } // Configure pin
int analogRead(int pin) { return 600; } // Read analog value
void delay(int ms) { /* wait */ } // Delay
void Serial_begin(long baud) { printf("Serial start %ld\n", baud); } // Serial
void Serial_println(const char *s) { printf("%s\n", s); } // Println

float toCelsius(int raw) { // Convert analog to Celsius (mock)
  return (float)raw * 0.1f; // Simple scaling
}

void setup(void) { // Initialize
  pinMode(TEMP_SENSOR_PIN, INPUT); // Sensor input
  Serial_begin(9600); // Serial
  Serial_println("Arduino Cloud demo ready"); // Status
}

void loop(void) { // Main loop
  int raw = analogRead(TEMP_SENSOR_PIN); // Read sensor
  float C = toCelsius(raw); // Convert to Celsius
  char json[64]; // Buffer for JSON
  snprintf(json, sizeof(json), "{\"temp_c\": %.2f}", C); // Prepare JSON
  Serial_println(json); // Publish over serial (representing cloud publish)
  delay(1000); // 1s interval
}

// Main routine: orchestrates the mastering iot unleashing the power of arduino cloud scenario
int main(void) { // Program entry point point
  setup(); // Init
  for (int i = 0; i < 5; ++i) { // Simulated cycles
    loop(); // Execute
  } // End
  return 0; // Exit
}

