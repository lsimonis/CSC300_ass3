#include "Passenger.h"

Passenger::Passenger()
{
}

Passenger::Passenger(string fn, string ln) : _firstName(fn), _lastName(ln)
{
}

Passenger::~Passenger()
{
}

string Passenger::getFirstName() {
	return _firstName;
}

void Passenger::setFirstName(string fn) {
	_firstName = fn;
}

string Passenger::getLastName() {
	return _lastName;
}

void Passenger::setLastName(string ln) {
	_lastName = ln;
}


