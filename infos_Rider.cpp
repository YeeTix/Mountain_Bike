#include<string>
#include<iostream>
#include<fstream>
#include<vector>
#include<array>
#include"MTB.h"
#include"infos_Rider.h"
using namespace std;

info_Rider::info_Rider() {
	bike my_Data[4];
	int i;
	cout << "Brand: ";  cin >> my_Data[i].brand;
	cout << "Suspension: "; cin >> my_Data[i].suspension;
	cout << "Type: "; cin >> my_Data[i].type;
	cout << "Year: "; cin >> my_Data[i].year;
}

info_Rider::~info_Rider() {

}

void info_Rider::edit_Info() { // edit and save 

}

void info_Rider::Display(bike a[4]) {

}