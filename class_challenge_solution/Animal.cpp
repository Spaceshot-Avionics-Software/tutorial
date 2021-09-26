#include "Animal.h"

Animal::Animal(std::string type, std::string name, int age) {
    type_ = type;
    name_ = name;
    age_ = age;
}

std::string Animal::get_name() {
    return this->name_;
}

std::string Animal::get_type() {
    return this->type_;
}

int Animal::get_age() {
    return this->age_;
}

void Animal::birthday() {
    std::cout << "Happy birthday, " << name_ << "!" << std::endl;
    ++age_;
}
 