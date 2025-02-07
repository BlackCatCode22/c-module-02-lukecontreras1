//
//  funWithFunctions.cpp
//  Module 2
//
//  Created by Luke Contreras on 2/6/25.
//

#include <iostream>

// Function prototypes
int getAnIntFromTheUser();
int sumTwoInts(int a, int b);
void compareTwoInts(int a, int b);

int main() {
    std::cout << "Let's work with two integers." << std::endl;
    
    // Get two integers from the user
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();

    // Calculate and display the sum of the two integers
    int sum = sumTwoInts(num1, num2);
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    // Compare the two integers and display the result
    compareTwoInts(num1, num2);

    return 0;
}

// Prompts the user to enter an integer and returns it.
int getAnIntFromTheUser() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    return num;
}

// Returns the sum of two integers.
int sumTwoInts(int a, int b) {
    return a + b;
}

// Compares two integers and outputs which one is greater or if they are equal.
void compareTwoInts(int a, int b) {
    if (a > b) {
        std::cout << a << " is greater than " << b << "." << std::endl;
    } else if (b > a) {
        std::cout << b << " is greater than " << a << "." << std::endl;
    } else {
        std::cout << "Both numbers are equal." << std::endl;
    }
}
