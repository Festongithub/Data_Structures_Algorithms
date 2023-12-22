#!/usr/bin/python3

class Length:
    __metric = {
        "mm" : 0.001, "cm" : 0.01, "m" : 1, "km" : 1000,
        "in": 0.0254, "ft" : 0.3048, "yd": 0.9144, "mi": 1609.344
        }
    def __init__(self, value, unit = "m"):
        self.value = value
        self.unit = unit
    def Converse2Meters(self):
        return self.value * Length.__metric[self.unit]
    
    def __add__(self, other):
        l = self.Converse2Meters() + other.Converse2Meters()
        return Length(l / Length.__metric[self.unit], self.unit) 
    def __str__(self):
        return str(self.Converse2Meters())
    def __repr__(self):
        return "Length(" + str(self.value) + ", '" + self.unit + " ')"
    
    def __iadd__(self, other):
        l = self.Converse2Meters() + other.Converse2Meters()
        self.value = l / Length.__metric[self.unit]
        return self
if __name__ == "__main__":
    X = Length(4)
    print(X)
    y = eval(repr(X))
    z = Length(4.5, "yd") + Length(1)
    print(repr(z))
    print(z)