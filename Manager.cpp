#include "Manager.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

	Manager::Manager() {
		cout << "Welcome Manager In Cafe" << endl;
	}

	void Manager::add_waiter(string name, string adress, string age, string sal) {
		this->name = name;
		this->adress = adress;
		this->age = age;
		this->sal = sal;
			}

	int Manager::calc_salary(int time) {
		if(time<20&&time>0){
			cout<<"You get no salary for this time :  ";
			return 0;
		}
		else if (time == 20) {
			return time * 70;
		}
		else if (time > 20 && time < 30) {
			return time * 80;
		}
		else if (time >= 30 && time < 40) {
			return time * 90;
		}
		else if (time >= 40) {
			return time * 100;
		}
		else {
			return 0;
		}
	}

	void Manager::calc_promoted(int time) {
		if (time >= 50) {
			cout << "Congratulations You Have Been Promoted  \n";
		}
		else {
			cout << "Try To Work Hard\n ";
		}
	}

	void Manager::print() {
		ifstream  openFile("customer.dat");
		string line;
		
		while (!openFile.eof()) {

			getline(openFile, line);
			cout << line<<endl;
		}
		openFile.close();

	}






