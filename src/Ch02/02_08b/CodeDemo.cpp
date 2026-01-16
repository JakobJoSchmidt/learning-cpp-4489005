// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
//#define AGE_LENGTH 4

int main(){
    //const int AGE_LENGTH = 4;
    
    const size_t AGE_LENGTH = 4;
    
    int age[AGE_LENGTH];
    float temperature[] = {31.5, 32.7, 38.9}; 
    // actually the numbers are double bc no f and get converted

    age[0] = 25;
    age[1] = 64;
    age[2] = 18;
    age[3] = 11;

    std::cout << "First element is stored at: " << age << std::endl;
    std::cout << std::endl;

    std::cout << "Age[0]: " << *age << std::endl;
    std::cout << "Age[1]: " << age[1] << std::endl;
    std::cout << "Age[2]: " << *(age + 2) << std::endl;
    std::cout << "Age[3]: " << age[3] << std::endl;

    std::cout << std::endl;
    std::cout << "Temp[0] = " << temperature[0] << std::endl;
    std::cout << "Temp[1] = " << temperature[1] << std::endl;
    std::cout << "Temp[2] = " << temperature[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
