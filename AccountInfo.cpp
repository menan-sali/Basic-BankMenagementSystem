#include "AccountInfo.h"

// Set the Personal Identification Number (PIN) for the account
void AccountInfo::setPIN(int new_pin) {
    security.pin = new_pin;
}

// Set the nationality of the person associated with the account
void AccountInfo::setNationality(const std::string& new_nationality) {
    person.nationality = new_nationality;
}
