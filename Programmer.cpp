#include "Programmer.h"

// TODO: finish this constructor
Programmer::Programmer(string nameParam, bool busPassParam) : Employee(nameParam) {
	busPass = busPassParam;
	setName(nameParam);
	setSalary(this->getSalary()+20000);
}

// TODO: finish this function
bool Programmer::getBusPass() const {
	return this->busPass; // TODO: fix this
}

// TODO: finish this function
void Programmer::setBusPass(bool newBusPass) {
	 this->busPass = newBusPass;
}

// TODO: finish this function
string Programmer::toStringStaticBind() const {
	return Employee::toStringStaticBind() + " Employee type: Programmer Bus pass: " + to_string(busPass); // TODO: fix this
}

// TODO: finish this function
string Programmer::toStringDynamicBind() const {
	return Employee::toStringStaticBind() + " Employee type: Programmer Bus pass: " + to_string(busPass); // TODO: fix this
	 // TODO: fix this
}
