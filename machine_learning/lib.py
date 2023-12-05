#!/usr/bin/python3

import sys

try:
    f = open('plot.R')
    s = f.readline()
    i = int(s.strip())
except OSError as err:
    print("Os Error:", err)
except ValueError:
    print("could not convert data into intege.")
except Exception as err:
    print(f"Unexpected {err=}, {type(err)=}")
    raise
while True:
    try:
        x = int(input("Please enter a number:"))
        y = int (input("Please enter a number"))
        z = x *  y
        print(z)
        break
    except ValueError:
        print("Invalid Number , Try again...")

try:
    raise Exception('spam', 'eggs')
except Exception as inst:
    print(type(inst))
    print(inst.args)
    print(inst)

    x, y = inst.args
    print('x = ', y)
    print('y =', x)

try:
    raise Exception('int', 'char')
except Exception as test:
    print(type(test))
    print(test.args)
    print(test)

    x, y =  test.args
    print('x = ', y)
    print('y = ', x)

