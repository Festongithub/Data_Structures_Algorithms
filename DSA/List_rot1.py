#!/usr/bin/python3

from List_rot import Employee

class specialEmployee(Employee):

    def __init__(self, name, rate, bonus):
        Employee.__init__(self, name, rate)
        self.bonus = bonus

    def hours(self, numHours):
        self.owed += numHours * self.rate  + self.bonus
        return ("%.2f hours worked " % numHours)
