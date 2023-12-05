#!/usr/bin/R

x <- 45
class(x)
#  numbers in R include 
# Numeric , Integers, Complex
# Test for Abs

abs(-9.89)

y = 56.8907

# the ceiling function rounds number upwards to the nearest integers
# the floor function riunds number downwards to the nearest intgers 
floor(x)
ceiling(y)

# Assing a string to a variable 
 str = "Hello World"
str

Test = "welocme dear \"Vikings\"user for the event of the day"
Test 


latin  <- "Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua."
# line breaks 
cat(latin)
# get string length 

nchar(latin)

# string checker 
grepl("l" , latin)

str1 = "Hello Guys "
str2 = "Welcome to the games"
paste(str1, str2)


# The nested  if statement

x <- 41

if ( x > 10)
{
	sum = x * x 
	print(sum);
}
if ( x > 20)
{
	test = 20 * x
	print(test)
}


a <- 200
b <- 33
c <- 500

if ( a > b & c > a)
{
	print("conditions are ture")
}

if ( a > b | a > c)
{
	print("Test proves")
}

if ( a * c > b | b * c > a)
{
	tes = a * c
	print(tes)
}

# while statements

i <- 100
while (i < 600) {
  print(i)
  i <- i  + 34
}


counties  <- 0
while (counties < 600)
{
	counties <-  counties + 34
	if ( counties == 3)
	{
		next 
	}
	print(counties)
}

Marks  <- 100
while ( Marks < 50)
{
	Marks <- Marks + 1
	if ( Marks == 50)
	{
		next
	}
	print(Marks)
}


# for statements

for ( x in  1: 1000)
{
	t = x * x / 1000000
	print(t)
}


dice <- c (34, 56, 78, 89, 54, 32)
for ( x in dice ){
	if (x == 89) {
		break
	}
	print(x *x )
}


# functions

my_function  <- function(name="John"){
	paste ("hello", name)
}
my_function("Peter")
my_function("Jane")



# return values

add_numbers <- function(a, b)
{
	return ( a * b)
}
add_numbers(45, 321)

Outer_func <- function(x)
{
	Inner_func <- function(y)
	{
		a <- x + y
		return (a)
	}
	return (Inner_func)
}
 output <- Outer_func(3)
output(55)

div_numbers <- function(i, j)
{
	if ( i == 0)
	{
		print("Error")
	} else if ( i  > 1)
	{
		return ( i / j)
	}
}
div_numbers(0, 6)
div_numbers(0.9, 30)


name_city <- function(name)
{
	city_name <- function(city)
	{
		paste(name, city)
	}
	paste("hello", name)
}
state <-  name_city("Nairobi")
print(state())

