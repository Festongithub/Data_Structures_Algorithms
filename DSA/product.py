#!/usr/bin/python3

import random

class Robot():
    __illegal_names = {"Henry", "Oscar"}
    __crucial_healt_level = 0.6

    def __init__(self, name):
        self.name = name
        self.health_level = random.random()

    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, name):
        if name in Robot.__illegal_names:
            self.__name = "Marvin"
        else:
            self.__name = name

    def __str__(self):
        return self.name + "Robot"

    def __add__(self, other):
        first = self.name.split("-")[0]
        second = other .name.split("-")[0]
        return Robot(first + "-" + second)

    def needs_a_nurse(self):
        if self.health_level < Robot.__crucial_health_level:
            return True
        else:
            return False

def say_hi(self):
    print("Hi, I am " + self.name)
    print("My health level is : " + str(self.health_level))


