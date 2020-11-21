#include <SoftwareSerial.h>

SoftwareSerial serialToController(3, 2); // RX, TX

void setup() {
  Serial.begin(115200);
  serialToController.begin(115200);
}

void loop() {
  if (Serial.available()) {
    serialToController.write(Serial.read());
  }

  if (serialToController.available()) {
    Serial.write(serialToController.read());
  }
}
