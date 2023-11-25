/**
 * @file main.cpp
 * @brief A simple C++ script with Doxygen documentation.
 */

#include <iostream>

/**
 * @class MyClass
 * @brief A simple class with a constructor and a member function.
 */
class MyClass {
public:
    /**
     * @brief Constructor for MyClass.
     * @param value An integer value to initialize the class with.
     */
    MyClass(int value) : data(value) {}

    /**
     * @brief A member function that prints the value of the class data member.
     */
    void printValue() const {
        std::cout << "Value: " << data << std::endl;
    }

private:
    int data; /**< An integer data member. */
};

/**
 * @brief The main function.
 * @return 0 on success.
 */
int main() {
    // Create an instance of MyClass
    MyClass myObject(42);

    // Call the member function to print the value
    myObject.printValue();

    return 0;
}
