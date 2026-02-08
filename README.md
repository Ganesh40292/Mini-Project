# Bin Beacon – Smart Waste Monitoring System

Bin Beacon is an automated waste management project designed to monitor garbage levels in dustbins and send SMS alerts using a GSM module when the bin becomes full. The system helps prevent overflow, improves cleanliness, and reduces the need for manual checking.

---

## 📌 Overview

In most places, garbage collection is done on fixed schedules without knowing the actual status of bins. This often leads to overflowing dustbins and unhygienic surroundings. Bin Beacon provides a smart solution by continuously monitoring the bin level and notifying authorities only when cleaning is required.

---

## 🛠 Technologies Used

**Hardware**
- Arduino Uno  
- HC-SR04 Ultrasonic Sensor  
- SIM900A GSM Module  
- 12V Adapter for GSM  
- Power Bank / USB Power for Arduino  
- Jumper Wires and Breadboard  

**Software**
- Arduino IDE  
- Embedded C Programming  
- GSM AT Commands  

---

## ⚙ Working Principle

1. The ultrasonic sensor measures the distance between the sensor and garbage.
2. Arduino processes the distance value.
3. If the distance crosses the set threshold, the bin is considered full.
4. GSM module sends SMS alerts to registered mobile numbers.
5. Once the bin is emptied, the system resets and starts monitoring again.

---

## 🔧 System Architecture

