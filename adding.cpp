// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This program can add 2 numbers together
//   numbers are given by user

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the sum of two intergers
    int first_number;
    int second_number;
    int total;

    // input
    std::cout << "Enter the first number to add (interger): ";
    std::cin >> first_number;
    std::cout << "Enter the secound nymber to add (interger): ";
    std::cin >> second_number;
    std::cout << "" << std::endl;

    // process
    total = first_number + second_number;

    // output
    std::cout << first_number << " + " << second_number << " = " << total;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
