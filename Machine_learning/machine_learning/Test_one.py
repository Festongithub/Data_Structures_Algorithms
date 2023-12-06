#!/usr/bin/python3

class Pet:
    _class_info = "Pet animals"
    _class_age = 3
    def about(self):
        print("This class is about" + self._class_info + "!")
    def age(self):
        print("I am age {}months old".format(self._class_age))
class Dog(Pet):
    _class_info = "mans friend"
class Cat(Pet):
    _class_info = "all kinds of cats"

p = Pet()
p.about()
p.age()
d = Dog()
d.about()
d.age()
c = Cat()
c.about()
c.age()
