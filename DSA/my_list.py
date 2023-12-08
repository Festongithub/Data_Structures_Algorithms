#!/usr/bin/python3

def double_elements(my_list):
    return[ x * 2 for x in my_list]

original_list = [45, 32, 56, 78]
doubled_list = double_elements(original_list)

print(doubled_list)

def product(my_list):
    return [x * x for x in my_list]

list_t = [89, 32, 56, 32, 78]
pro_list = product(list_t)
print(pro_list)

def find_max(my_list):
    return max(my_list)

max_list = [67,32, 45, 67, 89, 32, 900, 1000, 11001]
t_list = find_max(max_list)
print(t_list)


def reverse_list(my_list):
    return my_list[::-1]

new_list = [40, 41, 42, 43, 44,45, 46, 47, 48, 49, 50]
rev_list = reverse_list(new_list)

print(rev_list)



from collections import deque, ChainMap
dq = deque('Build the world')

print(dq)

dq.append('get it done')

print(dq)

print(dq.pop())


default={'theme': 'Default', 'language':'eng', 'showIndex': True, 'showFooter':True}

cm=ChainMap(default)
print(cm)

cm2 = cm.new_child({'theme': 'bluesky'})
print(cm2['theme'])

cm2.pop('theme')
print(cm2['theme'])


def factorial(n):
    if n == 0:
        return 1
    f = n * factorial(n-1)

    print(f)
    return(f)
factorial(89)



def find_sum(a, b):
    return a * b
print(find_sum(90, 45))

def bitstr(n, s):
    if n == 1: return s

    return  digit + bits for digits for digit bitstsr(1, s)for bits in bitstr(n -1 , s)

print(bitstr(3, 'xyz'))
