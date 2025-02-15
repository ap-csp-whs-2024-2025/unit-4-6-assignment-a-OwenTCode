/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

int main()
{
    // Complete your homework here
#include <iostream>
#include <vector>
#include <cmath> 
#include <algorithm> 

std::cout << "Question 1\n";

void compare(int input1, int input2) {
    if (input1 > input2) {
        std::cout << input1 << " is greater than " << input2 << std::endl;
    } else if (input1 < input2) {
        std::cout << input1 << " is smaller than " << input2 << std::endl;
    } else {
        std::cout << "the inputs are equal" << std::endl;
    }
}

std::cout << "Question 2\n";

void quadForm(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        std::cout << "The solutions are imaginary." << std::endl;
        return;
    }
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    std::cout << "The answers are " << root1 << " and " << root2 << std::endl;
}

std::cout << "Question 3\n";

std::vector<int> listA = {1, 2, 3};

void minList(const std::vector<int>& list) {

    int minElement = list[0];
    for (int num : list) {
        if (num < minElement) {
            minElement = num;
        } 
}

    std::cout << "The minimum is " << minElement << std::endl;
}
    
    return 0;
}
