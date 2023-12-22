#!/usr/bin/python3

from  Cloud import Cloud, VPC
cl1 = Cloud("Amazon", "E2C", 45)
cl2 = VPC("Azure", "E3C", 56)
cl3 = User
print(cl3)
print(cl1, type(cl1))
print(cl2, type(cl2))
cl1.greet_user()
cl2.greet_user()
cl1.print_feature()
cl2.print_feature()
cl1.time_measure()
cl2.time_measure()
cl2.define_dict()
cl2.generate_nums()
cl1.generate_nums()
# check for instances 

print(isinstance(cl1, Cloud), (cl2, VPC))
print(isinstance(cl2, Cloud))
print(isinstance(cl1, VPC))


def f(x):
    return( x + 1) * (x - 1)

for i in range(1, 10):
    print(f(i))

def f(x, y=None):
    if y :
        return (x - 1) * (y + 1)
    else:
        return x * (x -1)
for i in range(56, 75):
    print(f(i, i))
