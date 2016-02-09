#ifndef PLANE_H
#define PLANE_H

#include "FirstClassSeat.h"
#include "EconomySeat.h"

const int FCNUMROWS = 5;		//number of rows in first class
const int FCNUMSEATS = 4;		//number of seats per row in first class
const int FCNUMADJACENT = 2;	//number of adjacent seats in first class
const int ECNUMROWS = 30;		//number of rows in economy
const int ECNUMSEATS = 6;		//number of seats per row in economy
const int ECNUMADJACENT = 3;	//number of adjacent seats in economy

class Plane {
public:
	Plane();
	~Plane();

	void printSeatingChart();
	void addFCReservation(int r, int s, FirstClassSeat * fcs);
	bool checkFCSeat(int r, int s, int num); //num is number of passengers travelling together


private:
	FirstClassSeat * _firstClassSeatingChart[FCNUMROWS][FCNUMSEATS];
	EconomySeat * _economySeatingChart[ECNUMROWS][ECNUMSEATS];


};
#endif // !PLANE_H
