# Macropad
3X3 Macropad with Rotary encoder.
![WhatsApp Image 2025-11-30 at 06 06 51 (3)](https://github.com/user-attachments/assets/e9f153c9-e902-496c-a1a6-f96d4da75cc2)


A fully custom 3×3 macropad with rotary encoder designed, routed, soldered, and programmed from scratch. 

 

Overview:

This project is a compact macropad that allows a single key press to execute long or complex keyboard shortcuts. It includes: 

1. 9 mechanical keys 
2. Rotary encoder with push button 
3. Multiple programmable layers 
4. Custom PCB designed in KiCad 
5. Coded with QMK firmware on Arduino Pro Micro 


Motivation:

I use keyboard shortcuts constantly, and remembering long combinations became tedious. 
Instead of buying a keyboard with extra keys, I designed and built a complete macropad from scratch, learning PCB design, matrix scanning, and embedded firmware in the process. 

 

Hardware Design 

PCB (KiCad) 

Fully custom schematic 

Hand-routed 2-layer design 

Diode-protected 3×3 matrix 

Rotary encoder footprint 

Pro Micro integration 

Files included: 

macropad.kicad_sch 

macropad.kicad_pcb 

Gerber files 

3D renders (front/back) 

<img src="PCB/PCB Design.jpeg" width="400">  

 

 

Firmware (QMK) 

Firmware written using QMK, including: 

Custom keymap 

Multiple layers 

Encoder handling (volume, navigation, shortcuts) 

Macros for multi-key shortcuts 

Row/column matrix configuration 

Key files: 

keyboard.json 

keymap.c 

 

Assembly 

All components soldered manually 

Diodes, encoder legs, headers installed by hand 

Debugged row/column issues 

Verified footprint alignment and tolerances 

Pictures in the Pictures/ folder. 

 

Skills Demonstrated 

PCB Design (KiCad) 

Schematic creation 

Routing & DRC checks 

QMK firmware (C) 

Embedded systems debugging 

Rotary encoder integration 

Soldering (fine components) 

GitHub project documentation 

 

Final Result 

A fully functional macropad with tactile keys, rotary encoder, and multiple layers designed and built entirely from scratch. 

 

How to Use 

Flash firmware using QMK Toolbox 

Connect via USB 

Use layer key + encoder for shortcut switching 

Modify keymap.c to customize shortcuts 

 
