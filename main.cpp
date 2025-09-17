#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;


// Reads CSV: ID,Name,Type,PayPerHour,WorkedHours,YearlyPayment
void readFile(const string& filename, vector<HourlyEmployee>& hourlyEmployees, vector<SalariedEmployee>& salariedEmployees) {
    ifstream file(filename);
    string line;

    // Read file with employees information
    while (getline(file, line)) {
        stringstream ss(line);
        string name, type, token;
        int id;
        double payPerHour = 0, workedHours = 0, yearlyPayment = 0;

        getline(ss, token, ','); id = stoi(token);
        getline(ss, name, ',');
        getline(ss, type, ',');
        getline(ss, token, ','); payPerHour = stod(token);
        getline(ss, token, ','); workedHours = stod(token);
        getline(ss, token, ','); yearlyPayment = stod(token);

        if (type == "Hourly") {
            hourlyEmployees.emplace_back(name, id, payPerHour, workedHours);
        } else if (type == "Salaried") {
            salariedEmployees.emplace_back(name, id, yearlyPayment);
        }
    }
}

// Función que muestra en pantalla la información de los empleados y recibe los vectores 
void displayEmployees(const vector<HourlyEmployee>& hourlyEmployees,
                      const vector<SalariedEmployee>& salariedEmployees) {
    cout << "Hourly Employees:\n";
    for (const auto& emp : hourlyEmployees) {
        cout << "ID: " << emp.getId()
             << " | Name: " << emp.getName()
             << " | Pay this period: $" << emp.calculatePay() << "\n";
    }

    cout << "\nSalaried Employees:\n";
    for (const auto& emp : salariedEmployees) {
        cout << "ID: " << emp.getId()
             << " | Name: " << emp.getName()
             << " | Pay this period: $" << emp.calculatePay() << "\n";
    }
}

int main() {
    
    vector<HourlyEmployee> hourlyEmployees;
    vector<SalariedEmployee> salariedEmployees;

    // TODO: Add vectors to readFile call, hourly first
    readFile("employee_info.csv", hourlyEmployees, salariedEmployees);
    

    /* Llamar a la función que lee el archivo CSV y llena los vectores
    hourlyEmployees se llenará con los empleados tipo "Hourly"
    salariedEmployees se llenará con los empleados tipo "Salaried"*/
   
    /*
    Llamar a la función que muestra en pantalla la información de los empleados
     Recorre cada vector y muestra ID, nombre y pago calculad
     */
    displayEmployees(hourlyEmployees, salariedEmployees); 
         

    return 0;
}
