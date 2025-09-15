#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment)
    : Employee{name, id}, // inicializa la clase base
      yearlyPayment{yearlyPayment} // inicializa el miembro de esta clase

 double SalariedEmployee::getYearlyPayment() const{
    return yearlyPayment;
 }
/*TODO: calculate Payment */

/* IMPLEMENT GETTERS*/