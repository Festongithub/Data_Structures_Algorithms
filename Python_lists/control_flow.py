#!/usr/bin/python3

def cheeseshop(kind, *arguments, **keywords):
    print("--- Do you have any", kind, "?")
    print("--- soorry, we are all out of", kind)
    for arg in arguments:
        print(arg)
    print("-" * 40)
    for kw in keywords:
        print(kw, ":", keywords[kw])
cheeseshop("Limburger", "Very runny, sir", "Really very, VERY runny, sir.",shopkeeper="Michael Palin",client="John Cleese",sketch="Cheese Shop Sketch")

x = int(input("Please enter a numbers:"))

if x < 0:
    x = 0
    print("Negative changed to zero")
elif x == 0:
    print('zero')
elif x == 1:
    print('positive')
else: 
    print('More')

l = [67, 89, 90, 43, 21, 900]
for i in l:
    print(i)

cities = ["Nairobi", "Paris", "New York", "Shanghai"]

for city in cities:
    print(city, len(city))

nums = list(range(80))
for i  in nums:
    print(i)

for n in range(2, 200):
    if n % 2 == 0:
        print("Even number", n)
        continue
    print("Odd number", n)
