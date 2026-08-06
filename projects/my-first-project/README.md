# 🚀 Controlling Servo Motor With Buttons

*Status:* ⏸️ Concluded / Incomplete | *Tech Stack:* Arduino, C++, Wokwi Simulation

---

### 📝 Project Retrospective & Status Update

While this project wasn't carried through to physical installation—as I found an alternative setup to address the light switch accessibility—it served as a valuable learning experience.

Through building and testing this project, I was able to:

* **Simulate & Wire Dual-Direction Motor Logic:** Designed and validated dual-button servo control logic within Wokwi.
* **Explore Hardware Integration:** Practiced selecting switches and organizing circuit subsystem schematics for practical physical integration.
* **Improve Workflow Documentation:** Built a structured, multi-phase project log and maintained code/schematic archives on GitHub.

*I thoroughly enjoyed building this prototype and applying these electronics concepts!*

---

## 📌 Project Overview
**Goal:** Control the rotation and direction of a servo motor using push-button inputs with Arduino.

---

## 📈 Progression & Log

- [x] **Phase 1: Basic GPIO Input & Output**
  - [x] Wired basic push-button circuit with LED output.
  - [x] Implemented digital read logic for button states.

- [x] **Phase 2: Servo Motor Control (Simulation)**
  - [x] Simulated single-button servo control in Wokwi.
  - [x] Implement dual-button logic to control clockwise and counter-clockwise rotation.

- [ ] **Phase 3: Physical Implementation**
  - [x] Assemble physical Arduino circuit on breadboard.
  - [x] Select alternative switch for improved integration. (Optional)
  - [ ] Mount motor and mechanism for practical light switch control.

---

## 📁 Project Directory Structure

* 💻 **Code Archives:**
  * 📄 [Phase 1: Single-Button Code](./code/phase-1-single-button/single_button_servo.ino) – Basic servo angle toggle.
  * 📄 [Phase 2: Dual-Button Code](./code/phase-2-dual-button/dual_button_servo.ino) – Dual direction control.
- 📐 **Schematics & Demos:**
  - 🖼️ [Phase 1: Single-Button Circuit Demo](./schematics/phase-1-single-button/GIF%20Button%20Controling%20Servo.gif) – Animated simulation of button & servo wiring.
  - 🖼️ [Phase 2: Dual-Button Circuit Demo](./schematics/phase-2-dual-button/dual-button%20schematics.gif) - Animated simulation of dual-button & servo wiring.
- 📐 **Phase 3: Physical Assembly Schematics & Demos:**
  - 🖼️ [Motor Wiring & Driver Setup](./schematics/phase-3-physcial-implementation/physical-schematic.gif) – Circuit schematic for the standalone motor drive subsystem.
  - 🖼️ [Updated Switch Wiring](./schematics/phase-3-physcial-implementation/alter-switch-fixture.jpeg) – Side-by-side layout highlighting the new switch hardware integration.
  - 🎥 [Integrated System Demo](./schematics/phase-3-physical/3-system-integration-demo.mp4) – Demonstration of the motor and switch mechanism working together.
* 🌐 **[Live Wokwi Simulation](https://wokwi.com/projects/471278532232662017)** – Interactive browser simulation for the servo control circuit.
