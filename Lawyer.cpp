#include "Lawyer.h"

// TODO: finish this constructor
Lawyer::Lawyer(string nameParam, int stockOptionsParam) : Employee(nameParam) {
stockOptions = stockOptionsParam;
setName(nameParam);
setSalary(this->getSalary()+30000);
}

// TODO: finish this function
int Lawyer::getStockOptions() const {
	return this->stockOptions; // TODO: fix this
}

// TODO: finish this function
void Lawyer::setStockOptions(int newStockOptions) {
	this->stockOptions = newStockOptions;
}

// TODO: finish this function
string Lawyer::toStringStaticBind() const {
	return Employee::toStringStaticBind() + " Employee type: Lawyer Stock options: " + to_string(stockOptions); // TODO: fix this
}

// TODO: finish this function
string Lawyer::toStringDynamicBind() const {
	return Employee::toStringStaticBind() + " Employee type: Lawyer Stock options: " + to_string(stockOptions); // TODO: fix this
}
