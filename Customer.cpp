#include "Customer.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


	Customer::Customer() {
		cout << "Hi I hope you spend a Good time in Our cafe  " << endl;
	}


	int Customer::dcount(float total) {
		if (total >= 100) {
			return 1;
		}
		else {
			return 0;
		}
	}

	void Customer::add_pill(string name, float total){
		double discout= (total - ((0.1) * total));
		ofstream outfile("customer.dat", ios::app);
		if (dcount(total) == 1) {
			cout << "Your pill is " << total << " AFTER  DISCOUNT " << discout << endl;  //discount is 10%
			outfile << "name : " << name << " total : " << discount << endl;
		}
		else {
			cout << "Your Pill is  " << total << " AFTER  DISCOUNT " << (total) << endl;
			outfile << "name : " << name << " total : " << total << endl;
		}
		outfile.close();
	}



