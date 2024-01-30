#!/usr/bin/python3

def mult_by_2(num):
    return num * num

test_by_2 = mult_by_2

print("Result is ", test_by_2(4))


def do_math_nums(mult_by_2, num):
    return mult_by_2(num)
print("Result is", do_math_nums(mult_by_2, 89))

def greet_user(name):
    return name

print("Name is ", greet_user("Joy"))

def check_user(greet_user, user):
    return greet_user(user)

print("User is ", greet_user("Ahassante"))


def get_value_by_2(num):

    def num_by_2(value):
        return num * value

    return num_by_2

gen_func = get_value_by_2(67)

print("67 * 67 = ", gen_func(67))



listofFunc = [gen_func]

print("Results is ", listofFunc[0](9))
