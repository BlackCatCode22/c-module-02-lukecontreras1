//
//  reversedStrings.cpp
//  Module 2
//
//  Created by Luke Contreras on 2/6/25.
//

#include <iostream>
#include <string>
#include <algorithm>  // for std::reverse

int main() {
    std::string input;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);  // Reads the full line including spaces

    // Reverse the string
    std::reverse(input.begin(), input.end());

    std::cout << "Reversed string: " << input << std::endl;
    
    return 0;
}
