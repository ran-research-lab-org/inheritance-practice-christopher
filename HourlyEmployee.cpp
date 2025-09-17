#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, 
                               double payPerHour, double workedHours)
    : Employee{name, id},      // inicializa la clase base
      payPerHour{payPerHour},  // inicializa el miembro payPerHour
      workedHours{workedHours} // inicializa el miembro workedHours
{}

double HourlyEmployee::calculatePay() const override{
    return workedHours * payPerHour;
}

double HourlyEmployee::getpayPerHour()const {
    return payPerHour;
}

double HourlyEmployee::getworkedHours() const{
    return workedHours;
}


