#!/usr/bin/python3

def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1

def ifib(n):
    a, b = 0, 1
    for i in range(n):
        a, b = b, a+b
    return a
if __name__ == "__main__":
    import sys
    fib(int(sys.argv[1]))
