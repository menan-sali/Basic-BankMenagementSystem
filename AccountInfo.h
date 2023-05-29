#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H

#include "Person.h"
#include "Security.h"

// Structure to store account information
struct AccountInfo {
    Person person; // Information about the person associated with the account
    Security security; // Security details for the account

    // Setter functions

    // Set the Personal Identification Number (PIN) for the account
    void setPIN(int new_pin);

    // Set the nationality of the person associated with the account
    void setNationality(const std::string& new_nationality);
};

#endif  // ACCOUNTINFO_H
