#include "Plane.h"
#include <iostream>

Plane::Plane()
{
	for (int i = 0; i < FCNUMROWS; ++i) {
		for (int j = 0; j < FCNUMSEATS; ++j) {
			_firstClassSeatingChart[i][j] = nullptr;
		}
	}

	for (int i = 0; i < ECNUMROWS; ++i) {
		for (int j = 0; j < ECNUMSEATS; ++j) {
			_economySeatingChart[i][j] = nullptr;
		}
	}
}

Plane::~Plane()
{
	for (int i = 0; i < FCNUMROWS; ++i) {
		for (int j = 0; j < FCNUMSEATS; ++j) {
			delete & _firstClassSeatingChart[i][j];
		}
	}

	for (int i = 0; i < ECNUMROWS; ++i) {
		for (int j = 0; j < ECNUMSEATS; ++j) {
			delete & _economySeatingChart[i][j];
		}
	}
}

void Plane::printSeatingChart() {
	// TODO - implement Plane::printSeatingChart
	throw "Not yet implemented";
}

void Plane::addFCReservation(int r, int s, FirstClassSeat * fcs)
{
	this->_firstClassSeatingChart[r][s] = fcs;


	}
bool Plane::checkFCSeat(int r, int s, int num)
{
	bool reserved = true;

	if (this->_firstClassSeatingChart[r][s] ||
		(num == 2 && ((s == 0 || s == 2) && _firstClassSeatingChart[r][s + 1])) ||
		(num == 2 && ((s == 1 || s == 3) && _firstClassSeatingChart[r][s - 1])))
		reserved = false;

	return reserved;
}
