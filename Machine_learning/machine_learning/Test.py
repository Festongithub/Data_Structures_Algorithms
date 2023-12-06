#!/usr/bin/python3

def  add_nums(a, b):
    result = a* b
    return result 

mult = add_nums(890, 890)
print(mult)


def div_nums(a, b):
    if (  b == 0):
        print("Error")
    else:
        res = a / b
        return res 

test = div_nums(8, 0)
print(test)

# test input 

def  get_list(my_list):
    for w in my_list:
        print(w, len(w))

words = [ 'cat', 'window', 'defense']
get_list(words)



def square_nums(nums):
    for num in nums:
        print(num * num)


sets = [89, 56, 43, 90, 123, 567]
square_nums(sets)


def print_fruits(items):
    for i in items:
        print(f" The fruits include : ", i)

f = ["Oranges", "Kales", "Cabbages", "Lemons"]
print_fruits(f)


# print a ranges

def range_list(lst):
    for i in  range(lst):
        print(i)

# get length 

def get_length(lst):
    for i in range(len(lst)):
        print(i, a[i])

a = ['mary', 'had', 'a', 'little', 'lamb']

get_length(a)


# create a list 

def create_list(squares):
    squares = []
    for x in range(10):
        squares.append(x ** 2)
        return squares

tes = range(10)
create_list(tes)
