#include <SoftwareSerial.h>

SoftwareSerial serialToController(8, 9); // RX, TX

void setup() {
  Serial.begin(1200);
  serialToController.begin(1200);
}

void loop() {
  if (Serial.available()) {
    serialToController.write(Serial.read());
  }

  if (serialToController.available()) {
    Serial.write(serialToController.read());
  }
}
