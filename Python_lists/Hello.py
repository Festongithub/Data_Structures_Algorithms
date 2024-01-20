#!/usr/bin/python3
from dis import dis
def myfunc(alist):
    return len(alist)

print(dis(myfunc))
