#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Customer {  /* This class to manage customers & cashier : */
	
public:

	string name;
	float total_pill, discount;  

	Customer();

	int dcount(float total_pill);

	void add_pill(string name, float total);

};
