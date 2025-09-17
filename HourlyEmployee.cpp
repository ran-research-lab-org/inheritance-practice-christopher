#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, 
                                double payPerHour, double workedHours){
 
}
double HourlyEmployee::calculatePay() const override{
    return workedHours * payPerHour;
};

double HourlyEmployee::getpayPerHour()const {
    return payPerHour;
};

double HourlyEmployee::getworkedHours() const{
    return workedHours;
}


