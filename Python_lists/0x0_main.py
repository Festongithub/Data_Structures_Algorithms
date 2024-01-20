#!/usr/bin/python3

import random
import math 

List = [[2] * 10 for i in range(10)]

for i in range(10):
    for j in range(10):
        List[i][j] = "{} : {}".format(i, j)


for i in range(10):
    for j in range(10):
        print(List[i][j], end=" || ")

    print()
