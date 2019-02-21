#pragma once
using namespace std;
struct trail {
	string place;
	int name;

};

class mountainBike {
public:
	mountainBike();
	~mountainBike();
	void addRide();
	int numberRides();
	void Display();
	void editRide();
	void Save();
private:

};
