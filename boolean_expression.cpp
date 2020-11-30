// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This program is the number guessing game

#include <iostream>

int main()  {
    // this function can tell the user if the number they guessed is correct

    const int NUMBER = 7;
    int guessed_number;

    // input
    std::cout << "Guess a number between 0 to 9: " << std::endl;
    std::cin >> guessed_number;
    std::cout << "" << std::endl;

    // process
    if (guessed_number == NUMBER) {
        // output
        std::cout << "You are correct!! " << guessed_number <<
        " is the correct number." << std::endl;
    }


    if (guessed_number != NUMBER) {
        // output
        std::cout << "You are wrong! Try again" << std::endl;
    }
}
