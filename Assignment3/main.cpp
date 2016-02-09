#include <iostream>
#include "Plane.h"

//--for random numbers --//
#include <time.h>		
#include <stdlib.h>		

void addPassenger(bool (&FC)[FCNUMROWS][FCNUMSEATS], bool (&EC)[ECNUMROWS][ECNUMSEATS], Plane &currentPlane) {

	char seattype;
	string first, last;
	int menu, numpassengers, side, seatletter, rownumber;

	cout << "Enter passenger's first name: " << endl;
	cin >> first;

	cout << "Enter passenger's last name: " << endl;
	cin >> last;

	Passenger * passenger = new Passenger(first, last);



	cout << "Please select" << endl
		<< "(1) First Class" << endl
		<< "or (2) Economy" << endl;

	cin >> menu;

	if (menu == 1){
		FirstClassSeat * seat = new FirstClassSeat(passenger);

		cout << "How many passengers will be travelling together?" << endl
			<< "Select 1 - " << FCNUMADJACENT << endl;
		cin >> numpassengers;

		if (numpassengers < 1 || numpassengers > FCNUMADJACENT) {
			throw invalid_argument("Invalid selection");
		}
		else {

			cout << "Enter (w)indow, (c)enter or (a)isle seat: " << endl;
			cin >> seattype;

			if (seattype == 'c' && FCNUMADJACENT < 3) {
				throw invalid_argument("There are no center seats in this class.");
				
			}

			else if (seattype == 'w') {
				side = rand() % 2; //randomly select left or right side of plane.

				if (side == 0) seatletter = 0;
				else seatletter = 3;

				rownumber = rand() % FCNUMROWS; //randomly select row number

				if (FC[rownumber][seatletter] && currentPlane.checkFCSeat(rownumber, seatletter, numpassengers)) {
					currentPlane.addFCReservation(rownumber, seatletter, seat);
					FC[rownumber][seatletter] = false;
				}
			}
		}
	}
	else if (menu == 2) {

	}
	else throw invalid_argument("Not a valid selection");
}

int main() {

	Plane currentPlane;
	int numpassengers, menu1, menu2, side, seatletter, rownumber;
	bool flag=true;
	bool FCSeats[FCNUMROWS][FCNUMSEATS], ECSeats[ECNUMROWS][ECNUMSEATS];

	for (int i = 0; i < FCNUMROWS; ++i) {
		for (int j = 0; j < FCNUMSEATS; ++j) {
			FCSeats[i][j] = true;
		}
	}

	for (int i = 0; i < ECNUMROWS; ++i) {
		for (int j = 0; j < ECNUMSEATS; ++j) {
			ECSeats[i][j] = true;
		}
	}

	while (flag) {

		cout << "Please select an option:" << endl
			<< "(1) Add Passenger(s)" << endl
			<< "(2) Show Seating" << endl
			<< "(3) Quit" << endl;

		cin >> menu1;

		switch (menu1) {
			case 1:

			addPassenger(FCSeats, ECSeats, currentPlane);

			case 2:
				currentPlane.printSeatingChart();
				break;

			case 3:
				cout << "Goodbye." << endl;
				flag = false;
				break;

			default:
				throw invalid_argument("Invalid input.");
				}
			}
	return 0;
}
