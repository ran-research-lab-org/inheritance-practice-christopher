#include "SalariedEmployee.h"

// Constructor de la clase SalariedEmployee
SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment)
    : Employee{name, id}, // inicializa la clase base
      yearlyPayment{yearlyPayment} // inicializa el miembro de esta clase

 // Función que devuelve el pago anual del empleado
double SalariedEmployee::getYearlyPayment() const{
    return yearlyPayment;
 }

//Función que calcula el pago del período (mensual) del empleado 
double SalariedEmployee::calculatePay() const {
    return yearlyPayment / 12.0;
}