int led = 10;         // the PWM pin the LED is attached to
int brightness = 1;  // how bright the LED is
int fadeAmount = 5;  // how many points to fade the LED by
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  analogWrite(led, brightness);
  brightness = brightness - fadeAmount;
  if (brightness >= 0 && brightness <= 255) {
    fadeAmount = +fadeAmount;
  }
  delay(30);
}
