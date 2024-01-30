#!/usr/bin/python3

# Real World Object: Attributes and Capabilities
# Dog Attributes (Fields/Variables) : Height, Weight, Favorite food
# Dog Capabilities (Methods/ Functions) : Run, Walk, Eat

class Dog:
    def __init__(self, name="", height=0, weight=0):
        self.name = name
        self.height = height
        self.weight = weight
    
    def run(self):
        print("{} the dog runs".format(self.name))
    def bark(self):
        print("{} the dog barks".format(self.name))
    def eat(self):
        print("{} the dog eats".format(self.name))
    def measure_height(self):
        if self.height < 0:
            print("{} is not for {}".format(self.height, self.name))
        elif self.height > 0:
                  print("{} is {} meters".format(self.name, self.height))
        else:
            print("{} is to small for {}".format(self.height, self.name))
    
def main():

    spot = Dog("Spot", 66, 26)

    spot.bark()
    spot.eat()

    bowser = Dog("Bowser", 78, 45)
    bowser.bark()
    bowser.measure_height()

    Tusker = Dog("Tukser", 0, 78)
    Tusker.measure_height()
main()
