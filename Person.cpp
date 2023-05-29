#include "Person.h"

std::string Person::getName() const {
    return first_name + " " + last_name;  // Concatenate the first name and last name with a space in between
}

std::string Person::printInfo() const {
    std::string info = "Name: " + first_name + " " + last_name + "\n";  // Create a string with the person's name
    info += "Gender: " + gender + "\n";  // Append the person's gender to the string
    info += "Date of Birth: " + date_of_birth + "\n";  // Append the person's date of birth to the string
    info += "Nationality: " + nationality + "\n";  // Append the person's nationality to the string
    return info;  // Return the complete information string
}
