#!/usr/bin/python3

import random
class Cloud:
    def __init__(self, name, feature, duration):
        self.name = name
        self.feature = feature
        self.duration =  duration
        self.nums = random.random()
    def greet_user(self):
        print("Welcome to " + self.name)

    def print_feature(self):
        print("this is the " +  self.feature + "version")

    def time_measure(self):
        print("The cloud version is " + self.feature+ "built" + str(self.duration) +  "months")
    def define_dict(self):
        print(Cloud.__dict__)

    def generate_nums(self):
        print("Cloud health is  " + str(self.nums))
class VPC(Cloud):

    def greet_user(self):
        print("Welcome to " + self.name)

class User(Cloud, VPC):
    def dict_det(self):
        return self.__dict__
