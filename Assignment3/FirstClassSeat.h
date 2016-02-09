#ifndef FIRSTCLASSSEAT_H
#define FIRSTCLASSSEAT_H

#include "Seat.h"

class FirstClassSeat : Seat {


public:
	FirstClassSeat(Passenger *p);

	void assignSeat(int n);
};

#endif // !FIRSTCLASSSEAT_H