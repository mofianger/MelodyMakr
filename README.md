# MelodyMakr

`MelodyMakr` is a frequency tuner utilizing buzzer on **AT89C51**

You can generate notes with specific frequency and play music.

Author: mofianger/ Yutong Li

Created: 2024/08/22

Last updated: 2024/08/22

## Setup

```bash
git clone https://github.com/mofianger/MelodyMakr.git
cd MelodyMakr
```

## Example - Simulation on Keil and Proteus

Set the clock frequency to **11.0592 Mhz** in both Keil and Proteus.

Modify the `sound` variable in `tones.h` to your buzzer port (default is P3^7)

Add `main.c` & `tones.c` to source group in Keil.

Rebuild all target files and generate hex file.

Run simulation on Proteus.

## Usage

- echo(unsigned int hz, unsigned int t)

  to generate notes with `hz` frequency and `t` ms duration

- echo_note(unsigned char note, unsigned int t)

  To generate specific notes with `t` ms duration

- playList(Notes mynotes[], unsigned int size)

  To play a list of notes, i.e.  music.

  `Notes` is a data structure defined in `tones.h`



