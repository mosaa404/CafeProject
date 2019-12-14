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
		double befTotal=total;
		ofstream outfile("customer.dat", ios::app);
		if (dcount(total) == 1) {
			total=discout;
		}
		else {
			total=befTotal;
			
		}
			cout << "Your Pill is  " << befTotal << " AFTER  DISCOUNT " << (total) << endl;
		outfile << "name : " << name << " total : " << total << endl;
		outfile.close();
	}



