#ifndef SEAT_H
#define SEAT_H

#include "Passenger.h"

class Seat {

public:
	Seat();
	Seat(Passenger *p);
	~Seat();

	Passenger * getPassenger();
	void setPassenger(Passenger * p);
	int getRowNumber();
	void setRowNumber(int rn);
	char getSeatLetter();
	void setSeatLetter(char sl);
	bool getIsAisle();
	void setIsAisle(bool a);
	bool getIsWindow();
	void setIsWindow(bool w);



protected:
	Passenger * _passenger;
	int _rowNumber;
	char _seatLetter;
	bool _isAisle;
	bool _isWindow;



};
#endif // !SEAT_H