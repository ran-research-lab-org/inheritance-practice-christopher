#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, 
                                double payPerHour, double workedHours){
 
}
HourlyEmployee::double calculatePay() const override{
    return workedHours * payPerHour;
};

HourlyEmployee::double getpayPerHour(){
    return payPerHour;
};

HourlyEmployee::double getworkedHours(){
    return workedHours;
}

/*TODO: calculate Payment */

