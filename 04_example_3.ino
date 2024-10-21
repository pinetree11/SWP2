int led = 10;        // the PWM pin the LED is attached to
int brightness = 255;  // how bright the LED is
int fadeAmount = 5;  // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);
  brightness = brightness - fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
