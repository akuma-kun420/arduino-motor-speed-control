#include <Arduino.h>

const int potPin = A0;

// L298N pins
const int ENA = 9;
const int IN1 = 8;
const int IN2 = 7;

// LED pins
const int LED1 = 5;   // RED
const int LED2 = 6;   // GREEN

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  // Motor direction
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  Serial.begin(9600);
}

void loop() {

  // Read potentiometer
  int potValue = analogRead(potPin);

  // Convert 0–1023 to 0–255 PWM
  int pwmValue = map(potValue, 0, 1023, 0, 255);

  // Control motor speed
  analogWrite(ENA, pwmValue);

  // LED indication
  if (potValue == 0) {
    // Pot at zero → RED ON
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  }
  else {
    // Pot increased → GREEN ON
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
  }

  // Serial Monitor
  Serial.print("Pot: ");
  Serial.print(potValue);
  Serial.print("  PWM: ");
  Serial.println(pwmValue);

  delay(20);
}
