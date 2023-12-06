#!/usr/bin/python3
class Robot:
    
    def __init__(self, city):
        self.city = city
        
    @our_property
    def city(self):
        print("The Property 'city' will be returned now:")
        return self.__city
    
    @city.setter
    def city(self, city):
        print("'city' will be set")
        self.__city = city

