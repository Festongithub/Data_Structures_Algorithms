#!/usr/bin/python3

from Test_one import ImmutableRobot
from Robot import Robot
class our_property:

    def __init__(self, fget=None, fset=None, fdel=None, doc=None):
        self.fget = fget
        self.fset = fset
        self.fdel = fdel
        if doc is none and fget is not None:
             doc = fget.__doc__
             self.__doc__ = doc

    def __get__(self, obj, objtype=None):
        if obj  is None:
            return sefl
        if self.fget is None:
            raise AttributeError("Unreadable attribute")
        return self.fget(obj)

    def  __set__(self, obj, value):
        if self.fset is NOne:
            raise AttributeError("can't set attribute")
        self.fset(obj, value)

    def __delete__(self, obj):
        if self.fdel is None:
            raise AttributeError("can't delete attribute")
        self.fdel(obj)

    def getter(self, fget):
        return type(self)(fget, self.fset, self.fdel, self.__doc__)

    def settert(self, fset):
        return type(self)(self.fget, fset, self.fdel, self.__doc__)

    def deleter(self, fdel):
        return type(self)(self.fget, fset, self.fdel, self.__doc__)


