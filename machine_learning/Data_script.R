#!/usr/bin/r

Data <- read.csv("GenderClassification.csv", stringsAsFactors = TRUE)

set.seed(10)

# Cleaning the data set
Data$Favorite.Color <- as.numeric
                          (Data$Favorite.Color)
Data$Favorite.Music.Genre <- as.numeric
                          (Data$Favorite.Music.Genre)
Data$Favorite.Beverage <- as.numeric
                          (Data$Favorite.Beverage)
Data$Favorite.Soft.Drink <- as.numeric
                          (Data$Favorite.Soft.Drink)

# Split into train and test data set
TrainingSize <- createDataPartition(Data$Gender,
                                    p = 0.8,
                                    list = FALSE)
TrainingData <- Data[TrainingSize,]
TestingData <- Data[-TrainingSize,]
