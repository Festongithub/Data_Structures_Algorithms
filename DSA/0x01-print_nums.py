#!/usr/bin/python3

# with the walrus operator
#n = int(input("Please give a number:"))
#m = int(input("please give a number:"))

#res = n * m
#if res > 0:
    #print("The number is greater than 0")
    #print(f"The res  is {res}")

#def f(x):
    #return x ** 5

#nums = [34, 56, 78, 90]
#odd_nums = [f(x) for x in nums if  f(x) % 2]
#odd_nums

x = 45
y = x
print(id(x), id(y))


def my_function(a:int, b:str)->int:
    return a + ord(b)

print(my_function(3, 'a'))


def letters(z:str, y:str) -> str:
    return ord(z) + ord(y)

print(letters('s', 't'))


beg_char ='A'
end_char = 'Z'

s = ord(beg_char)
t = ord(end_char)

test_range = range(s, t + 1)

for i in test_range:
    char = chr(i)
    print(i)



 # sequential data types

text = "List and strings can be accessed via indices"
t_bytes = text.encode('utf-8')
print(t_bytes)

mess = "Hello world"
m = mess.encode('utf-8')
print(m)


marks = [67, 56, 89, 43, 23, 67, 89]
print(len(marks))

print(marks[4] + marks[5])
for i in marks:
    if i %  2 == 0:
        print("{} is even".format(i))
    else:
        print("{} is odd".format(i))

av = sum(marks) // len(marks)

print ("the average of marks is {}". format( av))

print(marks.append(av))
print("{} is  the popped element".format(marks.pop(0)))
# tuples are immutable lists

t = ("Python", "is", "fun")
for i in t:
    print(i)

nums = [90,56, 78, 43, 56, 78]
nums1 = marks
nums.extend(nums1)
print(nums)

# alternative to appending and Extending a list
total = nums + marks
print(total)
print(len(total))


# removing an element from the list
print(total.remove(67))
freq = sum(nums) // len(nums)
print(freq)

print("{} is position of 56 ".format(total.index(67)))
# insert 
total.insert(3, 78)
print(total)
# Test approaches 

import time

n = 10000

start_time = time.time()
l = []
for i in range(n):
    l = l + [i * 2]
print(time.time() - start_time)

