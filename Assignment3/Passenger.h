#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

using namespace std;

class Passenger {

public:
	Passenger();
	Passenger(string fn, string ln);
	~Passenger();

	//---setters and getters--//
	string getFirstName();
	void setFirstName(string fn);
	string getLastName();
	void setLastName(string ln);


private:
	string _firstName;
	string _lastName;

};

#endif // !PASSENGER_H