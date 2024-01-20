#!/usr/bin/python3
l = [78, 90, 45, 56, 57, 34]

length = len(l)

if length < 0:
    print("Too bad")
elif length > 0:
    print("List is good")
else:
    print("Hello List")

x = l
print(x)
my_next_list = [x, l]
print(my_next_list)


#lists Bubble sort and List comprehensions

import random
import math

randlist = ["string", 1.234, 28]

oneToTen = list(range(10))
print(oneToTen)

randlist = randlist + oneToTen
print(randlist[0])

print("List length: ", len(randlist))

for i in randlist:
    print("{}".format(i))

print(randlist[5] * 3)

print("How many 3s :",randlist.count(3))
print("How many 4s :",randlist.count(4))
print("How many strings :",randlist.count("strin"))
print("Index of 3 :",randlist.index(3))

marks = []

for i in range(5):
    marks.append(random.randrange(1, 50))

print("Sorted list {}".format(marks.sort()))
print("Reversed list {}".format(marks.reverse()))
