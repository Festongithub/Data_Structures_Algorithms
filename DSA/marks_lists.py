#!/usr/bin/python3

cel = [39.3, 56, 78, 89, 21, 678]
Farenheit = [ (( float(9) / 5) * x + 32) for x in cel]
print(Farenheit)

x = [90, 45, 34, 56, 78, 89]
y = ['A', 'B', 'C', 'D', 'E', 'F']
z = [ (a, b) for a in x for b in y]
print(z)

alpha = range (10, 100)
num = range(1, 28)

pro = [ (i, j) for i in alpha for j in num]
print(pro)


from math import sqrt
def primes(n):
    if n== 0:
        return []
    elif n == 1:
        return []
    else:
        p = primes(int(sqrt(n)))
        no_p = { j for i  in p for j in range(i * 2, n+1, i)}
        p = { x for x in range(2, n+1) if x not in no_p}
    return p
for i in range(1, 50):
    print(i, primes(i))
