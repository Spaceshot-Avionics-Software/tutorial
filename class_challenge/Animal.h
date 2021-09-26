// This is our header file for the animal class
#include <iostream>

class Animal {
    public:

        /**
         * @brief Constructs a new Animal object
         * 
         * @param type the type of animal (ex dog or cat)
         * @param name the household name of the animal
         * @param age the age of the animal
         */
        Animal(std::string type, std::string name, int age);

        /**
         * @brief Gets the name of the animal
         * 
         * @return the name of the animal
         */
        std::string get_name();

        /**
         * @brief Get the type of animal
         * 
         * @return the type of animal 
         */
        std::string get_type();

        /**
         * @brief Get the age of the animal
         * 
         * @return int value for age of animal
         */
        int get_age();

        /**
         * @brief It's the animal's birthday!
         * 
         * Add 1 to age
         * Print out "Happy birthday, <name>!"
         * 
         */
        void birthday();

    private:
        // YOUR CODE HERE
        // Put your private variables here. You will have 3 called type_, name_, and age_.
};