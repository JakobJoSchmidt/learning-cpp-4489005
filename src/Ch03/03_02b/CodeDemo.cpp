// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string cow_name, int cow_age, cow_purpose cow_purp){
        name = cow_name;
        age = cow_age;
        purpose = cow_purp;
    }  

    /*
    cow(std::string cow_name, int cow_age, cow_purpose cow_purp) 
    : name(cow_name), age(cow_age), purpose(cow_purp) {}
    */
    std::string get_name() const {
        return name;
    }
    int get_age() const {
        return age;
    }
    cow_purpose get_purpose() const {
        return purpose;
    }
    void set_age(int cow_age){
        age = cow_age;
    }

private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Betsy", 5, cow_purpose::pet);
    my_cow.set_age(6);

    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;

    std::cout << std::endl << std::endl; 
    return (0);
}
