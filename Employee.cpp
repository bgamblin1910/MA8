#include "Employee.h"

// TODO: finish this constructor
Employee::Employee(string nameParam) {
     name = nameParam;
	 salary = 40000.0;
}

// TODO: finish this function
string Employee::getName() const {
	return this->name; // TODO: fix this
}

// TODO: finish this function
void Employee::setName(string newName) {
	this->name = newName;
}

// TODO: finish this function
double Employee::getSalary() const {
	return this->salary; // TODO: fix this
}

// TODO: finish this function
void Employee::setSalary(double newSalary) {
	this->salary = newSalary;
}

// TODO: finish this function
string Employee::toStringStaticBind() const {
	return "Employee name: " + name + " Salary: $"+to_string(salary); // TODO: fix this
}

// TODO: finish this function
string Employee::toStringDynamicBind() const {
	return "Employee name: " + name + " Salary: $"+to_string(salary); // TODO: fix this
}
