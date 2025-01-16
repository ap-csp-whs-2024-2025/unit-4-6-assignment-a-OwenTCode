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

        return 0;
}
