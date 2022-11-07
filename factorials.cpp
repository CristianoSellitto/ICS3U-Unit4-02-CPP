// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds the factorial of a number

#include <iostream>
#include <string>

int integer;

int main() {
    // Finds the factorial of a number

    std::string number;
    std::cout << "Enter a number to calculate the factorial: ";
    std::cin >> number;
    std::cout << std::endl;
    try {
        integer = std::stoi(number);
        if (integer > 0) {
            std::string text = "1";
            int answer = 1;
            int counter = 1;
            do {
                answer = answer * counter;
                counter = counter + 1;
            } while (counter < integer);
            answer = integer * answer;
            std::cout << integer << "! = " << answer;
        } else if (integer == 0) {
            std::cout << "0! = 1";
        } else {
            std::cout << "Error: " << integer << " is a negative integer.";
        }
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Error: " << number << " is not an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
