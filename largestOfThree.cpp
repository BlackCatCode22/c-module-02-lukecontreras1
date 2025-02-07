//
//  largestOfThree.cpp
//  Module 2
//
//  Created by Luke Contreras on 2/6/25.
//

#include <iostream>

int main() {
    int num1, num2, num3;
    
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;
    
    int largest;
    
    // Find largest number using nested if statements
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else { // num2 is greater than num1
        if (num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }
    
    std::cout << "The largest number is: " << largest << std::endl;
    
    return 0;
}
