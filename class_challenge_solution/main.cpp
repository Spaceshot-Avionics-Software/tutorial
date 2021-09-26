#include <iostream>
#include "Animal.h"

int main() {
    Animal dog("Dog", "Barry", 3);
    
    std::cout << "Animal Type: " << dog.get_type() << std::endl;
    std::cout << "Animal Name: " << dog.get_name() << std::endl;
    std::cout << "Animal Age: " << dog.get_age() << std::endl;

    dog.birthday();
    
    std::cout << "Animal Age: " << dog.get_age() << std::endl;

    return 1;
}