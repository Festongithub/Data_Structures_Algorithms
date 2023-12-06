#!/usr/bin/R

# recursion function 
tri_recursion <- function(k) {
	if ( k > 0) {
		result <- k + tri_recursion(k -1)
		print(result)
	} else { 
		result = 0
		return(result)
	}
}
tri_recursion(6)

price <- 1000
revenue_clalc <- function(price , quantity) {
	if ( price > 100) {
		rev  = price * quantity
		print(rev)
	}else {
		price < 100 
	       rev = price *  quantity + 100
return(rev)
	}
}
revenue_clalc(10, 89)
revenue_clalc(10, 20)
revenue_clalc(56, 789)

txt <- "awesome"
andy <- " you Punny motherfuckers"
my_function <- function() {
	paste("R is ", txt, andy)
}
my_function()


test <- "Lets us rise for the game"
getName <- function(){
	test <<- "Is a game"
	paste("This is ", test)
}
getName()

test


# vectors list of items of the same type

fruits <- c("banana", "apple", "orange")
fruits


# the : operator

numbers <-  10: 100
numbers
numbers[-23]  <- 23
numbers
# access numbers
numbers[c(1, 3)] 
length(numbers)
floats <- 9.1: 15.7
floats

#  sort a vector 

sort(fruits)
sort(numbers)

fruits[3]


# repeat vectors

nums <- rep(c(1, 2, 34), each = 3)
nums 
# using the  times number
tes <- rep(c(1, 2, 3), times = 3)
tes 

# repeat each value independently

values <- rep(c(12, 34, 56), times = c(5, 3, 7))
values

# generating sequenced values 

lands <- 1: 10
lands

# sequence  ranges and steps
# define the steps using seq( from, to, by)i
lakes  <- seq(from = 0, to = 100, by = 5)

lakes


# lists in R

sets <- list("Natron", "Amboseli", "Lavia")
sets[1] <- "Nakuru"
"Kapsabet" -> sets[3]
"lavia" -> sets[4]
"Latest" -> sets[5]
append(sets, "Kapsabet")
append(sets, "Latest")
append(sets, "Lavia", after = 2)

sets
length(sets)

#check if items Exists
towns = c(12, 34, 56, 78)
"12" %in% towns
length(towns)


# looping through a list

for (x in fruits){
	print(x)
}

list1 <- list("a", "b", "c")
list2 <- list(1, 2, 3)
list3 <- c(list1, list2)
list3

for (x in list3)
{
	print(x)
}

# Matrix 
thismatrix <- matrix(c(1, 2, 3, 4, 5, 6), nrow = 3, ncol = 2)
thismatrix

groceries <- matrix(c("apple", "banana", "cherry", "orange"), nrow = 2, ncol =  2)
groceries

# Access Matrix items

groceries[, c(1, 2) ]
groceries[2, ]

#Add Rows and Columns

groc <- cbind(groceries, c("strawberry", "blueberry", "raspberry"))

groc

groc <- rbind(groceries, c("pears", "pine", "nuts"))

groc

dim(groc)

# loop Through a matrix

for ( rows in 1 : nrow(groc)){
	for(columns in 1:ncol(groc)){
		print(groc[rows, columns])
	}
}

groc_combined <- rbind(groc, groceries)
groc_combined

groc_combined <- cbind(groc, groceries)
groc_combined
