#!/usr/bin/python3

class my_list(list):
    def __init__(self, l):
        list.__init__(self, l)
    def push(self, item):
        self.append(item)
    def prod(self, nums):
        for i in self.nums:
            print(i ** i )
if __name__ == "__main__":
    x = my_list([34, 56, 78, 90])
    x.push(99)
    prod(x[1], x[2])
    print(x)
