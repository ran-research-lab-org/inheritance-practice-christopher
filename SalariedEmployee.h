#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"
using namespace std;
class SalariedEmployee : public Employee {
private:
    double yearlyPayment;
public:
    SalariedEmployee();
    SalariedEmployee(const string& name, int id, double yearlyPayment);
    double getYearlyPayment()const;
    double calculatePay() const override;
};

#endif

