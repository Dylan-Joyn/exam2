#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    string dateOfBirth;

public:
    Person(string fName, string lName, string dob);

    string getFirstName() const;
    string getLastName() const;
    string getDateOfBirth() const;
};

#endif 
