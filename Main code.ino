#include <SoftwareSerial.h>

SoftwareSerial gsm(10, 11); // RX = 10, TX = 11

// Ultrasonic Pins
#define TRIG 8
#define ECHO 9

long duration;
int distance;
bool smsSent = false;

// LOCATION LINK — Edit if needed
String locationLink = "https://maps.app.goo.gl/UAsBud5MV4ULcfLL7";

// FUNCTION TO SEND SMS
void sendSMS(String number, String message) {
  Serial.print("Sending alert to: ");
  Serial.println(number);

  gsm.print("AT+CMGS=\"");
  gsm.print(number);
  gsm.println("\"");
  delay(1000);

  gsm.print(message);
  delay(300);
  
  gsm.write(26);
  Serial.println("Message sent to this contact.");

  delay(7000);
}

void setup() {
  Serial.begin(9600);
  gsm.begin(9600);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  Serial.println("Starting Smart Bin system.");
  delay(3000);

  Serial.println("Initializing GSM module.");
  gsm.println("AT");
  delay(1000);

  gsm.println("ATE0");
  delay(1000);

  gsm.println("AT+CMGF=1");
  delay(1000);

  Serial.println("System initialization complete.");
  Serial.println("Monitoring bin level.");
}

void loop() {

  // Ultrasonic reading
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH, 30000);
  if (duration == 0) {
    Serial.println("No sensor reading. Please check the sensor.");
    delay(1000);
    return;
  }

  distance = duration * 0.034 / 2;

  Serial.print("Current bin distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // BIN FULL CHECK
  if (distance <= 5 && smsSent == false) {

    Serial.println("Bin is full. Sending alerts with location.");

    sendSMS("+918088239071", "Smart Bin Alert: The bin is full. Location: " + locationLink);
    sendSMS("+916363581583", "Smart Bin Alert: The bin is full. Location: " + locationLink);
    sendSMS("+917022433574", "Smart Bin Alert: The bin is full. Location: " + locationLink);
    sendSMS("+919353093769", "Smart Bin Alert: The bin is full. Location: " + locationLink);

    smsSent = true;

    Serial.println("All alert messages sent successfully.");
  }

  // RESET WHEN BIN CLEARED
  if (distance >= 14) {

    if (smsSent == true) {
      Serial.println("Bin has been emptied. System reset.");
    }

    smsSent = false;
  }

  delay(1000);
}
