#include "Person.h"

Person::Person(string fName, string lName, string dob)
    : firstName(fName), lastName(lName), dateOfBirth(dob) {}

string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const { 
    return lastName;
}

string Person::getDateOfBirth() const { 
    return dateOfBirth;
}

