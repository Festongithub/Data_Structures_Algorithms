#!/usr/bin/python3

import os 

command = ""
while (command != "exit"):
    command = input("Command: ")
    handle = os.popne(command)
    line = " "
    while line:
        line = handle.read()
        print(line)
    handle.cloe()
print("Ciao that is it ")
