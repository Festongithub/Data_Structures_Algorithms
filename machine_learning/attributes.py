#!/usr/bin/python3

class A():
    def __init__(self, x, y):
        self.__x =x
        self.__y = y
    def GetX(self):
        return self.__x
    def GetY(self):
        return self.__y
    def SetX(self, x):
        self.__x = x
    def SetY(self, y):
        self.__y = y
