# 🚀 Interactive 8x8 LED Matrix Animations
**Status:** 🟡 In Progress | **Tech Stack:** Arduino, C++, MAX7219, Wokwi Simulation

---

## 📌 Project Overview

* **Background & Motivation:** Building interactive visual displays is a great way to master non-blocking code, state machines, and hardware communication protocols. Instead of a basic static display or game, this project focuses on creating dynamic, frame-by-frame LED animations triggered by dedicated tactile push buttons.
* **Technical Goal:** Design, wire, and simulate an Arduino-driven 8x8 LED matrix system that instantly toggles between unique visual animation loops based on button inputs, running seamlessly on a Wokwi browser simulation before optional physical assembly.

---

## 🛠 Tech & Tools Used

* **Hardware Subsystems:** Arduino Uno, 8x8 LED Matrix (MAX7219 driver), Tactile Push Buttons, Pulldown Resistors
* **Software & Tools:** Wokwi Simulator, C/C++ (Arduino IDE), Git/GitHub

---

### 📈 Progression & Log

#### Phase 1: Basic LED Matrix Setup & Static Patterns
* [x] Wired 8x8 MAX7219 LED matrix to Arduino in Wokwi.
* [x] Tested basic code to display simple, stationary patterns and shapes.
* [ ] Verified matrix display pins and brightness configurations.

#### Phase 2: Animations & Multi-Button Inputs
* [ ] Design frame-by-frame bitmaps to create custom loop animations.
* [ ] Wire push buttons to Arduino pins and read button presses.
* [ ] Program each button to trigger a different animation sequence.

#### Phase 3: Code Cleaning & Final Touches
* [ ] Clean up C++ code so it is easy to read and organized.
* [ ] Make sure switching between button animations occurs instantly without delays.
* [ ] Add circuit schematic and Wokwi link to repository documentation.

#### Phase 4: Physical Hardware Assembly (Optional)
* [ ] Gather physical Arduino, MAX7219 matrix display, and push buttons.
* [ ] Build circuit on a breadboard and upload code to hardware.
* [ ] (Optional) Put components together in a physical frame or enclosure.

---

## 📁 Repository Structure & Archives

```text
led-display-project/
├── docs/           # Schematics, block diagrams, and Wokwi pinout maps
├── src/            # Firmware C++ source code & animation bitmasks
└── README.md       # Main project documentation
