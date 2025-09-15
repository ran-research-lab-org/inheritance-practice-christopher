#include "Employee.h"

Employee::Employee(const std::string& name, int id, const std::string& type){
  this->name = name;
  this->id = id;
  this->type = type;
}

string Employee::getType(){
  return type;
};

string Employee::getName(){
  return name;
};

/* IMPLEMENT GETTERS*/