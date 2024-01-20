#!/usr/bin/python3
import random
import math

my_list = []

for i in range(5):
    my_list.append(random.randrange(1, 10))

i = len(my_list) - 1

while i > 1:

    j = 0

    while j < i:
        print("\nIs {} > {}".format(my_list[j], my_list[j +1]))
        if my_list[j] > my_list[j + 1]:
              print("Switch")

              temp = my_list[j]
              my_list[j] = my_list[j + 1]
              my_list[j+ 1] = temp
        else:
            print("Don't Swicth")

        j+= 1

        for k in my_list:
              print("Don't swithc")
              print()
    print("END OF ROUND")
    i -= 1

    for k in my_list:
        print(k, end="")

        print()

print(my_list.sort())
print(my_list.reverse())
