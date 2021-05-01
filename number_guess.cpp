// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: April 2021
// This program lets the user guess a number from 1-10

#include <iostream>

int main() {
    // This function adds two numbers
    int guessedNumber;
    const int ANSWER = 9;

    // Input
    std::cout << "Guess a number from 1-10: ";
    std::cin >> guessedNumber;

    // Process
    if (guessedNumber == ANSWER) {
        std::cout << "\nCorrect! You guessed it!" << std::endl;
    }
    if (guessedNumber != ANSWER) {
        std::cout << "\nIncorrect! You guessed wrong." << std::endl;
    }

    // Output
    std::cout << "\nDone." << std::endl;
}
