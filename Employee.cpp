#include "Employee.h"
using namespace std;
Employee::Employee(const string& name, int id, const string& type){
  this->name = name;
  this->id = id;
  this->type = type;
}
//función para delvolver el tipo
string Employee::getType(){
  return type;
}

//función para devolver el nombre
string Employee::getName(){
  return name;
}

