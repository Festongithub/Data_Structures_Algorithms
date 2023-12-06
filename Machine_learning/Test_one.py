#!/usr/bin/python3

class ImmutableRobot:

    def __init__(self, name, brandname, built_year):
        self.__name = name
        self.__brandname = brandname
        self.__built_year = built_year


    @property
    def name(self):
        print(self.__name)
    @property
    def brandname(self):
        print(self.__brandname)
    @property
    def built_year(self):
        return self.__built_year

robot = ImmutableRobot(name="Robox", brandname="Tesla", built_year = 2018)

print(robot.built_year)
print(robot.name)


try:
    robot.name = "TeslaBox"
except AttributeError as e:
    print(e)

try:
    robot.built_year = "Checkstar"
except AttributeError as e:
    print(e)

