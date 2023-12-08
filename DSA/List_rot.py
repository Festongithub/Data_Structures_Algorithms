#!/usr/bin/python3

def print_upper(s):
    for i in s:
        print(i.upper())

s = "Hello"
print_upper(s)

def print_lower(a):
    nums = []
    for a in nums:
        print(a.lower())

nums = ["a","b"]
print_lower(nums)


# using a generator to create a generator object , which does not create the data, but creates data on demand

lst = [34, 56, 78,32, 21]

gen1 = (9 ** i for i  in lst)
print(gen1)

for x in gen1: print(x)


nums = [45, 21, 67, 32, 12, 89, 43, 90, 987]
gen2 = (5 * i  for i in nums)
print(gen2)

for y in gen2: print(y)

total = [gen1] + [gen2]

gen3 =(2 ** i for i in total)
print(gen3)

for z in total: print(z)


class Employee(object):
    numEmployee = 0
    def __init__(self, name, rate):
        self.owed = 0
        self.name = name
        self.rate = rate
        Employee.numEmployee  += 1

    def __del__(self):
        Employee.numEmployee -= 1

    def hours(self, numHours):
        self.owed += numHours *self .rate
        return ("%.2f hours worked " % numHours)

    def pay(self):
        self.owed = 0
        return ("payed %s " % self.name)

emp1=Employee("Jill", 18.50)

print(dir(Employee))

emp1 = Employee("Jill", 18.50)
emp2 = Employee("Jack", 15.50)

Employee.numEmployee

print(emp1.hours(20))
