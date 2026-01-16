// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <string>

#define CAPACITY 5000
// #define DEBUG

int main(){

    int32_t large = CAPACITY;
    uint8_t small = 4;

#ifdef DEBUG
    std::cout << "About to perform the addition..." << std::endl;
#endif

    large += small;
    std::cout << "The large number is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
