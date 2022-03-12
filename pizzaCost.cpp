// Copyright (c) 2022 Hertz Antonella All rights reserved.
//
// Created by: Hertz Antonella
// Date: Mar 11, 2022
// This program asks the user for the diameter of the
// pizza. It then calculates and displays the total cost
// of the pizza with tax
#include <iostream>
#include <cmath>

// declare constants
const float HST = 0.13;
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.50;

// declare variables
float tax, subtotal, diameter, final1, total;

int main() {
    // get user input, diameter
    std::cout << "Enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // calculate subtotal and tax
    subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    tax = HST * subtotal;
    total = subtotal + tax;

    // calculate total cost
    total = subtotal + tax;
    final1 = static_cast<int>(total * 100 + 0.5);
    total = final1/100;

    // display final cost
    std::cout << "\n";
    std::cout <<"The final cost is: " << total <<"\n";
}
