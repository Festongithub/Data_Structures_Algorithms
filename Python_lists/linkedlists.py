#!/usr/bin/python3

mess = "Hello world and welcome to the new journey of python\n and we are excited to have you in this journey"

print(mess)

test = r'New games\new challenges'
print(test)
source =  r'C:some\news'
print(source)

new_text = """\ Options: 3 included[]
-a                Check the game
-b                check the points
-c                Check the end 
-d                End the game
-e                Sum up thepoints
-f               finish the line
"""

print(new_text)

print(3 * new_text)

new_mes_text = mess + new_text

print(new_mes_text)

tes = 'Py'
t = 'thon'

print(tes + t)
print(new_mes_text[7:15])


l = "Hello world"
print(l[-9:-4])



# string format and Interpolation
# using the modulo operator % carries two args (format specifier and variables)
print("Hello, %(name)s ! You are %(age)s years old." % {"name": "Jane", "age": 25})


name = "Jane"
type(name)

age = 78

print("User is {} and {} years old".format(name, age))

person = {"name": "Jane","age": 24, "Home":"Nairobi", "Marks": 400}

print("All info is name: {name},age: {age},Home: {Home},Marks: {Marks}".format(**person))

school = "University of Nairobi"

students = 45000

print(f"{school.upper()} number of students :{students}")

print(f"{67 ** 8}")

print(format(5678.544, ".2f"))
