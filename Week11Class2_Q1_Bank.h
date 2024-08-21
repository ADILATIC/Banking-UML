/* Week 11 Q1 Banking UML

 @Adi Latic

 4/1/2024

 Global space -- Header Files
*/

#include <iostream>
#include <string>

using namespace std;

class Bank
{
	
public :

	Bank(string cname, int cid, double cbalance) {
	
		Name = cname;
		ID = cid;
		Balance = cbalance;
	}

	void deposit(double cdeposit) {
		Balance = Balance + cdeposit;
	}
	void withdraw(double cwithdrawl) {
		Balance = Balance - cwithdrawl;
	}
	void display() {
		cout << Name;
		cout << "\t" << ID;
		cout << "\t" << Balance;
		cout << "\n\n";
	}


private:
	string Name = "Adi";
	int ID = 105299;
	double Balance = 100.00;

};