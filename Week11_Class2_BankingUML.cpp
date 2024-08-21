

#include <iostream>
#include <string>
#include "Bank.h"

using namespace std;
char userPick;
int amount = 0;

int main(){
	Bank Adi{ "Adi", 123456, 500.00 };

	Adi.display();

	while(userPick != 'q') {									// Ran a while loop unless q is pressed which will make it default
		cout << "\nWould you like to deposit , withdraw, or quit";	// Prompts the user
		cout << "\n d or w or q";									// Gives user options what to do
		cin >> userPick;
		if (userPick == 'w') {										// Decides wether to deposit or withdraw
			cout << "\nHow much would you like to withdraw?";
			cin >> amount;											// Enter amount to withdraw
			Adi.withdraw(amount);
			Adi.display();											// Display new amount
		}
		else if (userPick == 'd') {
			cout << "\nHow much would you like to deposit?";		// Same concept as above but with deposit
			cin >> amount;
			Adi.deposit(amount);
			Adi.display();
		}
	}
};