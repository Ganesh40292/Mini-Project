# Bin Beacon – Smart Waste Monitoring System

Bin Beacon is an automated waste management project that monitors garbage levels in dustbins using an ultrasonic sensor and sends SMS alerts through a GSM module when the bin becomes full. The system helps in maintaining cleanliness, reducing manual inspection, and improving efficiency in waste collection.

---

## 📌 Project Overview

Traditional waste management depends on fixed schedules and manual checking of bins. This often results in overflowing garbage and unhygienic surroundings. Bin Beacon provides a smart and low-cost solution by continuously monitoring bin status and notifying authorities only when cleaning is required.

The project demonstrates how embedded systems and wireless communication can be used to solve real-world problems in an efficient and practical way.

---

## 🛠 Technologies Used

### Hardware Components
- Arduino Uno  
- HC-SR04 Ultrasonic Sensor  
- SIM900A GSM Module  
- 12V Adapter for GSM  
- Power Bank / USB Power for Arduino  
- Breadboard and Jumper Wires  

### Software Tools
- Arduino IDE  
- Embedded C Programming  
- GSM AT Commands  

---

## ⚙ Working Principle

1. The ultrasonic sensor measures the distance between the sensor and the garbage level.
2. Arduino processes this distance value.
3. If the distance crosses the predefined threshold, the bin is considered full.
4. The GSM module automatically sends SMS alerts to registered mobile numbers.
5. After the bin is emptied, the system resets and continues monitoring.

---

## 🔧 System Architecture


---

## 📂 Repository Files

The repository contains the following files:

- **GSM Check.ino** – Code used to test GSM module communication and SMS functionality  
- **Main code.ino** – Final integrated code for the Bin Beacon system  
- **Mini-Project-Demo-By-Group-7.mp4** – Project demonstration video  
- **Mini_Project_Report - Group - 7.pdf** – Complete project report  
- **README.md** – Project documentation  

---

## 🚀 Key Features

- Real-time garbage level detection  
- Automatic SMS alert notification  
- Google Maps location sharing in message  
- Works without internet connectivity  
- Low cost and easy to implement  
- Portable and practical design  

---

## 📝 How to Use the System

1. Assemble all hardware components according to the circuit connections.  
2. Insert a working SIM card into the GSM module.  
3. Upload **Main code.ino** to Arduino using Arduino IDE.  
4. Power Arduino using USB or power bank.  
5. Power GSM module using a 12V adapter.  
6. Place the ultrasonic sensor inside the bin lid.  
7. Test the system by filling the bin – SMS will be received when full.

---

## 🧪 Output

- When the bin becomes full, an SMS alert is sent to all saved numbers.  
- The message includes:
  - Bin full notification  
  - Google Maps location link  
- After the bin is emptied, the system resets automatically and monitors again.

---

## 🌟 Future Enhancements

- IoT-based centralized monitoring dashboard  
- Mobile application for real-time tracking  
- GPS module integration  
- Cloud data logging and analytics  
- Smart route optimization for waste collection  
- Solar-powered standalone system  

---

## 👨‍💻 Team Members

- Ganesh Prasad  
- Chirag S Poojary  
- Chaithanya Maiya
- Sneha Ganesh

---

## 🙏 Acknowledgement

We sincerely thank our project guide and department for their valuable guidance and support throughout the development of this project.

---

## 📄 License

This project is developed for academic purposes and can be freely used for learning and research.
