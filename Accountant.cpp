#include "Accountant.h"

// TODO: finish this constructor
Accountant::Accountant(string nameParam, double parkingAllowanceParam) : Employee(nameParam) {
	setName(nameParam);
	parkingAllowance =parkingAllowanceParam;
}

// TODO: finish this function
double Accountant::getParkingAllowance() const {
	return this->parkingAllowance; // TODO: fix this
}

// TODO: finish this function
void Accountant::setParkingAllowance(double newParkingAllowance) {
	this->parkingAllowance = newParkingAllowance;
}

// TODO: finish this function
string Accountant::toStringStaticBind() const {
	return Employee::toStringStaticBind() + " Employee type: Accountant Parking allowance: $" + to_string(parkingAllowance); // TODO: fix this
}

// TODO: finish this function
string Accountant::toStringDynamicBind() const {
	return Employee::toStringStaticBind() + " Employee type: Accountant Parking allowance: $" + to_string(parkingAllowance); // TODO: fix this
}
