# Macropad
3X3 Macropad with Rotary encoder.
![WhatsApp Image 2025-11-30 at 06 06 51 (3)](https://github.com/user-attachments/assets/14d8b78e-ccfc-45c5-8d05-7af1a8328631)



A fully custom 3×3 macropad with rotary encoder designed, routed, soldered, and programmed from scratch. 

 

Overview:
This project is a compact macropad that allows a single key press to execute long or complex keyboard shortcuts. It includes: 

1. 9 mechanical keys 
2. Rotary encoder with push button (Multiple programmable layers)
3. Custom PCB designed in KiCad 
4. Coded with QMK firmware on Arduino Pro Micro 


Motivation:

I use keyboard shortcuts constantly, and remembering long combinations became tedious. 
Instead of buying a keyboard with extra keys, I designed and built a complete macropad from scratch, learning PCB design, matrix scanning, and embedded firmware in the process. 

 

PCB Design:
1. Using KiCad
2. Fully custom schematic 
3. Hand-routed 2-layer design 
4. Diode-protected 3×3 matrix 
5. Footprints of different parts (i.e Rotary Encoder, Arduino pro micro, etc)

![PCB Design](https://github.com/user-attachments/assets/f84c13a6-9ea3-480e-8874-d562f99d47d8)


Firmware written using QMK, including: 
1. Custom keymap 
2. Encoder handling (Multiple Layers)
3. Macros for multi-key shortcuts 
4. Row/column matrix configuration 

(Code available in *Firmware Code* Folder)

 

Assembly:
1. Diodes, encoder legs, headers installed by hand
2. All components soldered manually 
3. Debugging code
4. Flashing Arduino Pro-Micro

Pictures in the Pictures/ folder. 



![Complete](https://github.com/user-attachments/assets/7b8fdf90-b1e3-4ac1-873d-c2af2b538ee7)


 
Skills Demonstrated:
1. PCB Design (KiCad) 
2. QMK firmware (C) 
3. Embedded systems debugging 
4. Rotary encoder integration 
5. Soldering (fine components) 
6. GitHub project documentation 

 

Final Result:
 A fully functional macropad with tactile keys, rotary encoder, and multiple layers designed and built entirely from scratch. 

 

How to Use:
1. Modify keymap.c to customize shortcuts
2. Connect via USB 
3. Use layer key + encoder for shortcut switching 
4. Flash firmware using QMK Toolbox 

 
