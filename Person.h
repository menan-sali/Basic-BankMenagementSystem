#ifndef PERSON_H
#define PERSON_H

#include <string>

// Structure representing a person
struct Person {
    std::string first_name; // First name of the person
    std::string last_name; // Last name of the person
    std::string gender; // Gender of the person
    std::string date_of_birth; // Date of birth of the person
    std::string nationality; // Nationality of the person

    // Get the full name of the person
    std::string getName() const;

    // Print the information about the person
    std::string printInfo() const;
};

#endif  // PERSON_H
