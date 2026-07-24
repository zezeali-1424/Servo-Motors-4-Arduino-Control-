# 🤖 4 Servo Motors Arduino Simulation

A Tinkercad simulation project demonstrating the simultaneous control and positional sweeping of four SG90 Servo Motors using an Arduino Uno.

---

## 📌 Project Overview
This project simulates controlling 4 servo motors connected to an Arduino Uno board. The motors are programmed to sweep synchronously across various angles ($0^\circ$, $90^\circ$, and $180^\circ$) with precise timing delays.

---

## 🛠️ Components Used
* **1x** Arduino Uno R3
* **4x** Micro Servo Motors (SG90)
* **1x** Breadboard
* External Power Connections & Jumper Wires

---

## ⚡ Circuit Wiring & Connections

| Component | Pin / Cable | Arduino Connection |
| :--- | :--- | :--- |
| **Servo 1 (Top)** | Signal (Orange) | Digital Pin 3 |
| **Servo 2** | Signal (Orange) | Digital Pin 5 |
| **Servo 3** | Signal (Orange) | Digital Pin 6 |
| **Servo 4 (Bottom)** | Signal (Orange) | Digital Pin 9 |
| **All Servos** | VCC (Red) | 5V (via Power Rail) |
| **All Servos** | GND (Black) | GND (via Ground Rail) |

---

## 💻 Arduino Code
```cpp
#include <Servo.h>

// Create servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // Attach servos to PWM digital pins
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
}

void loop() {
  // Move all servos to 0 degrees
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  delay(1000);

  // Move all servos to 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(1000);

  // Move all servos to 180 degrees
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
  servo4.write(180);
  delay(1000);
}
🔗 Live Simulation & Interactive Demo
👉 Click Here to Test Circuit on Tinkercad
📸 Circuit Layout
