#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee {
private:
    double yearlyPayment;
public:
    SalariedEmployee();
    SalariedEmployee(const std::string& name, int id, double yearlyPayment);
    double getYearlyPayment()const;
    double calculatePay() const override;
};

#endif

