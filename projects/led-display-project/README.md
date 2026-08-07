# 8x8 LED Display Project
## 🚧 Current Status & In-Progress

---

## 🛠 Tech & Tools Used
* **Hardware:** (e.g., Arduino Uno, Servo Motor, Buttons)
* **Software / Tools:** (e.g., KiCad, Wokwi, C/C++)

---

## 🚀 Key Features
* Feature 1: Description
* Feature 2: Description

---

## 📈 Progression & Timeline

## 📈 Progression & Timeline

### Phase 1: Wokwi Simulation & Basic Control
* [ ] Set up 8x8 LED matrix and Arduino on Wokwi
* [ ] Wire push buttons to digital input pins
* [ ] Write basic code to light up a single custom pattern on the display

### Phase 2: Animation & Multi-Button Logic
* [ ] Design frame-by-frame bitmap arrays for custom animations
* [ ] Implement non-blocking animation timing using `millis()`
* [ ] Add button interrupt or polling logic to switch animations instantly on press
* [ ] Assign unique animations to each button (e.g., Button A = Pulse, Button B = Arrow Shift)

### Phase 3: Code Refactoring & Polish
* [ ] Organize animation frames and pin definitions into modular functions or header files
* [ ] Debounce button inputs to prevent erratic triggers
* [ ] Document full circuit schematic and logic flow in the README

### Phase 4: Hardware Prototyping (Optional)
* [ ] Source physical 8x8 MAX7219 module, push buttons, and breadboard
* [ ] Wire hardware layout and test software on a physical microcontroller
* [ ] (Optional) Draft enclosure or custom PCB layout in KiCad

---

## 📂 Repository Structure
```text
my-new-project/
├── docs/           # Schematics, datasheets, or block diagrams
├── src/            # Firmware / source code
└── README.md       # Project documentation
