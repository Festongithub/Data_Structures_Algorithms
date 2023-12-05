#!/usr/bin/python3

class Robot:
    __counter = 0
    __build_year = 2014
    def __init__(self):
        type(self).__counter += 1
        type(self).__build_year += 1
        type(self).__age += 0.5
        type(self).__energy -= 1.2
    @staticmethod
    def RobotInstances():
        return Robot.__counter
    @staticmethod
    def checkage():
        return Robot.__age
    @classmethod
    def RobotInstances(cls):
        return cls, Robot.__counter
    @classmethod
    def Robotyears(cls):
        return cls, Robot.__build_year
    @classmethod
    def energycheck(cls):
        print(Robot.__energy)
if __name__ == "__main__":
    print(Robot.RobotInstances())
    x = Robot()
    print(x.RobotInstances())
    y = Robot()
    print(y.Robotyears())
    print(Robot.Robotyears())
    print(Robot.checkage())
