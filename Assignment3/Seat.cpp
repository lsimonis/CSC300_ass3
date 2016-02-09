#include "Seat.h"

Seat::Seat()
{
}

Seat::Seat(Passenger *p)
{
}

Seat::~Seat()
{
	delete _passenger;
}

Passenger * Seat::getPassenger() {
	// TODO - implement Seat::getPassenger
	throw "Not yet implemented";
}

void Seat::setPassenger(Passenger * p) {
	// TODO - implement Seat::setPassenger
	throw "Not yet implemented";
}

int Seat::getRowNumber() {
	// TODO - implement Seat::getRowNumber
	throw "Not yet implemented";
}

void Seat::setRowNumber(int rn) {
	// TODO - implement Seat::setRowNumber
	throw "Not yet implemented";
}

char Seat::getSeatLetter() {
	// TODO - implement Seat::getSeatLetter
	throw "Not yet implemented";
}

void Seat::setSeatLetter(char sl) {
	// TODO - implement Seat::setSeatLetter
	throw "Not yet implemented";
}

bool Seat::getIsAisle() {
	// TODO - implement Seat::getIsAisle
	throw "Not yet implemented";
}

void Seat::setIsAisle(bool a) {
	// TODO - implement Seat::setIsAisle
	throw "Not yet implemented";
}

bool Seat::getIsWindow() {
	// TODO - implement Seat::getIsWindow
	throw "Not yet implemented";
}

void Seat::setIsWindow(bool w) {
	// TODO - implement Seat::setIsWindow
	throw "Not yet implemented";
}

