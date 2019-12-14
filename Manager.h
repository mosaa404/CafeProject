#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Manager{  /* This class to manage cafe */
	   
	public:
		string name, adress, sal;
		int age, time;

		Manager();

		void add_waiter(string name, string adress, int age, int sal);

		int calc_salary(int time);

		void calc_promoted(int time);

		void print();

		
	};


