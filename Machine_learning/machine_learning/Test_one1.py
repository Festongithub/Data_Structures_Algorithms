#!/usr/bin/python3

def greeting(language):
    if language  == 'eng':
        return 'hello world'
    if language == 'fr' :
        return 'Bonjour le monde'
    if language == 'swa':
        return 'Karibu sana'
    else:
        return 'language not supported'

l = [greeting('eng'), greeting('fr'), greeting('swa')]
print(l[2])


lst = [34, 56, 78, 43, 90]
print(list(map(lambda x: x**3,lst)))

print(list(filter((lambda x: x < 50),lst)))

message = "Hello world"
print(list(map(lambda x: x * 3, message)))
 
l = str.split(message)
print(sorted(l, key=len))

check = l.sort(key=str.lower)
print(check)


# recursion in python3

def recurse(low, high):
    if low <= high:
        print(low)
        recurse(low+1, high)
recurse(90, 100)


def interest(principal, rate):
    if principal >= 10000:
        rate = rate  * 10000
    if principal <= 10000:
        rate = rate * 1000
    else:
        print(principal + 5000, rate)
interest(89000, 5)

