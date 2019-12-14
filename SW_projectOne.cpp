#include <iostream>
#include <fstream>
#include <string>

#include "Manager.h"
#include "Customer.h"

using namespace std;

int main(){

	string name, password, user, address;
	int age, time, salary;
	int Choice1, Choice2, Choice3;

	float total;

	cout << "Are you Manager OR Employee ?\nManager = 1\nEmployee = 2\nExit = 3 \nEnter Your Choice :";
	cin >> Choice1;
	while (true) {
		if (Choice1 == 1) {

			/* Manager */

			cout << "Enter The Username :";
			cin >> user;
			cout << "And The Password :";
			cin >> password;

			if (user == "ro" && password == "12") {
				while (true) {

					cout << endl;

					Manager manager1;

					cout << endl;

					cout << "1- add a waiter\n"
						<< "2- Employee Data\n"
						<< "3- calculate the salary \n"
						<< "4- check on Promoted\n"
						<< "5- read Customers file\n"
						<< "6- Back\n"
						<<"7- Exit\n"
						<< "Enter Your choice :";

					cin >> Choice2;

					if (Choice2 == 1) { /* appoint a waiter */

						fstream data_of_waiter("waiter.dat", ios::app);
						cout << "Enter the name\n ";
						cin >> name;
						cout << " address \n ";
						cin >> address;
						cout << " age\n";
						cin >> age;
						cout << "salary\n";
						cin >> salary;

						manager1.add_waiter(name, address, age, salary);
						data_of_waiter << "name : " << name << " adress: " << address << " age : " << age << " salary : " << salary << endl;
						data_of_waiter.close();
					}

					else if (Choice2 == 2) {  /* read DataBase Of Employee */

						fstream ifile("waiter.dat", ios::in);
						string line;
						cout << "Name : Address : Age : Salary\n";
						while (!ifile.eof()) {

							getline(ifile, line);
							cout << line << endl;
							;
						}
						ifile.close();
					}

					else if (Choice2 == 3) { /* calculate the salary */

						cout << "Enter The number of hours that you work ! :";
						cin >> time;
						cout << "The Salaty is : ";
						cout << manager1.calc_salary(time) << endl;
					}

					else if (Choice2 == 4) {  /* check on Promoted */

						cout << "Enter the time :";
						cin >> time;
						manager1.calc_promoted(time);
					}

					else if (Choice2 == 5) { /* read Customers file */
						manager1.print();
					}

					else if(Choice2 == 6) {
											
						break;
					}
					else if (Choice2 == 7) {
						exit(0);
					}
					else {
						cout << "Enter The Correct Choice ,try again\n";
						
					}
				}
			}

			else {
				cout << "Enter The Correct Choice " << endl;
			}
			cout << "Are you Manager OR Employee ?\nManager = 1\nEmployee = 2\nEnter Your Choice :";
			cin >> Choice1;
		}

		/*---------- THE END OF MANAGER ----------- */



		else if (Choice1 == 2) {

			/* Employee */
			while (true) {

				cout << "Do You Want Print Pill Or Exit\nPrint = 1\nBack = 2\nExit = 3 \nEnter your choice :";
				cin >> Choice3;

				if (Choice3 == 1) { /* Printing  Pill */

					Customer customer1;

					cout << "Enter The Name And Total Price  :" << endl;
					cin >> name >> total;
					customer1.add_pill(name, total);

				}

				else if (Choice3 == 2) { /* Exit */
					break;
				}
				else if (Choice3 == 3) {
					exit(0);
				}
				else {
					cout << "Enter The Correct Choice ,try again\n";
					cin >> Choice3;
				}
			}
		}

		/*---------- THE END OF EMPLOYEE ----------- */


		else if (Choice1 == 3) {
			exit(0);
		}

		else {
			cout << "Enter The Correct Choice";
			exit(0);
		}
		cout << "Are you Manager OR Employee ?\nManager = 1\nEmployee = 2\nExit = 3 \nEnter Your Choice :";
		cin >> Choice1;
	}
	return 0;

}


