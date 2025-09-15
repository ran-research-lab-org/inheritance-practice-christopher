// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
// Attributes
protected:
    string name;
    int id;
    string type; // "Hourly" or "Salaried"

// Methods
public:
	// TODO: Constructor
    Employee();
    Employee(std::string name, int id, std::string type);
   
    virtual ~Employee() {}

    // Virtual function to calculate payment
    virtual double calculatePay() const = 0;

    string getType() const=0;
    string getName() const=0;
    // TODO: Getters
};

#endif

