#pragma once
using namespace std;
struct bike {
	string brand, suspension, type; // type-> either: downhill, enduro or cross-country
	int year;
};

class info_Rider {
public:
	info_Rider();
	~info_Rider();
	void Display();
	void edit_Info();
private:
};
