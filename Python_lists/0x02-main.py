#!/usr/bin/python3

def random_func(name: str, age: int, weight: float) ->str:
    print("Name:", name)
    print("Age:", age)
    print("weight",weight)

    return "{} is {} years old and {} pounds".format(name, age, weight)

print(random_func("Jane", 24, 123.45))

print(random_func(89 , "Jane", "Turtle"))
print(random_func.__annotations__)

sum = lambda x, y: x + y

print("sum" , sum(90, 89))

can_vote = lambda age: True if age >= 18 else False
print("Can vote: ", can_vote(12))
print("Can vote: ", can_vote(78))


powerList = [lambda x: x ** 8,
             lambda x: x ** 9,
             lambda x: x ** 10]

for i in powerList:
    print(i(90))



random_bet = range(1, 110)

def bet_slip(num):
    return num * 0.5

print(list(map(bet_slip,random_bet)))



import random

my_list = random.randint(1, 100)

print("List is", my_list)


marks = range(0, 100)

for i in  marks:
    if i % 2 == 0:
        print("{} is even".format(i))
    elif i % 2 != 0:
        print("{} is odd".format(i))
    else:
        print("{} is neither even nor odd".format(i))
sum_marks = list(map((lambda x : x + x),range(1, 200)))
print("Sum is", sum_marks)


print(list(filter((lambda x: x % 2 == 0), range(1, 2000))))


div_three = list(filter((lambda x: x % 3 == 0),range(1, 101)))

print("{} is divisible by three".format(div_three))
