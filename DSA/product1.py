#!/usr/bin/python3

from product import Robot

first_generation = (Robot("Johnny"),
                    Robot("Optimus Prime"), 
                    Robot("BumbleBee"))
gen1 = first_generation
babies =[ gen1[0] + gen1[1] + gen1[2] ]
babies.append(babies[0] + babies[1])
for baby in babies:
    baby.say_hi()
