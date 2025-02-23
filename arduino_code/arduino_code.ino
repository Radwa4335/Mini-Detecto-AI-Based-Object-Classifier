#include <Servo.h>

Servo servoMotor;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Attach servo to pin 9
  servoMotor.attach(9);
}

void loop() {
  // Check if data is available to read from serial port
  if (Serial.available() > 0) {
    // Read the incoming byte
    char receivedChar = Serial.read();
    
    // Move servo based on received signal
    if (receivedChar == 'A') {  // Move right for apple
      servoMotor.write(180);  // Adjust angle as needed
    } else if (receivedChar == 'B') {  // Move left for banana
      servoMotor.write(0);  // Adjust angle as needed
    }
  }
}

