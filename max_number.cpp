// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on January 2021
// This program finds the largest number of 10 random numbersw

#include <iostream>
#include <iomanip>
#include <random>
#include <array>


template<size_t N>
int maxValue(std::array<int, N> randomList) {
    // This program finds the largest number

    int maxNum = randomList[0];

    // process
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        if (maxNum >= randomList[loop_counter]) {
            continue;
        } else if (maxNum < randomList[loop_counter]) {
            maxNum = randomList[loop_counter];
        }
    }

    return maxNum;
}


int main() {
    // This program prints 10 random integers and output
    std::cout << "This program finds the highest value of 10 random numbers."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::array<int, 10> randomList;
    int randomNumber;
    int largest_num;

    std::cout << "Here are 10 random numbers:" << std::endl;

    // process
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        // random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumber = idist(rgen);

        randomList[loop_counter] = randomNumber;

        std::cout << randomNumber << std::endl;
    }

    largest_num = maxValue(randomList);

    std::cout << "" << std::endl;
    std::cout << "The largest of these numbers is: " << largest_num
              << std::endl;
}
