#include <SoftwareSerial.h>

SoftwareSerial gsm(10, 11); // RX = 10, TX = 11

void setup() {
  Serial.begin(9600);
  gsm.begin(9600);

  Serial.println("=== GSM TEST STARTED ===");
  delay(2000);

  Serial.println("Sending: AT");
  gsm.println("AT");
  delay(1000);

  Serial.println("Sending: ATE0");
  gsm.println("ATE0");
  delay(1000);

  Serial.println("Checking SIM status...");
  gsm.println("AT+CPIN?");
  delay(2000);

  Serial.println("Checking Network Registration...");
  gsm.println("AT+CREG?");
  delay(2000);

  Serial.println("Setting SMS to TEXT mode...");
  gsm.println("AT+CMGF=1");
  delay(1000);

  Serial.println("Sending SMS...");
  gsm.println("AT+CMGS=\"*************\""); // replace number
  delay(1000);

  gsm.print("GSM Test: SIM900A working!");
  delay(300);

  gsm.write(26); // CTRL+Z

  Serial.println("SMS command sent.");
  Serial.println("=== END ===");
}

void loop() {
}
