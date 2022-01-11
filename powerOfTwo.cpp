// Copyright (c) 2021 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Date: Jan 10, 2022
// This program asks the user for a positive integer. It
// then uses a loop to calculate and display the square of that number.
#include <iostream>
#include <cmath>

int main() {
  // initialize the powerOfTwo
  int counter;
  int powerOfTwo = 0;
  int userNum;
  std::string userNumString;

  // get the user number as a string
  std::cout << "Enter a postive number: ";
  std::cin >> userNumString;
  std::cout << std::endl;

  try {
        // convert the user's guess to an int
        userNum = std::stoi(userNumString);
        std::cout << "" << std::endl;

        // check if the guess is correct
        if (userNum > 0) {
            // calculate the sum of all numbers from 0 to user number
            for (counter = 0; counter <= userNum; counter++) {
                powerOfTwo =  pow(counter, 2);
                std::cout << counter << "^2 = " << powerOfTwo << std::endl;
            }
        } else {
            std::cout << "You entered a negative number, please try again.";
    }
        // Tells the user that they didn't input an integer
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << userNumString << " \033[1;35;38mis "
                                              "not an integer.\n";
        std::cout << "" << std::endl;
        std::cout << "\033[1;35;38mThanks for Playing.";
    }
}
