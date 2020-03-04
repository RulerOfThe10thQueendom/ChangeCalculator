#include <iostream>
using namespace std;

int main()
{
	int cents, quarters, dimes, pennies;
	const int QUARTER = 25;
	const int DIME = 10;
	const int PENNY = 1;

	cout << "How many cents do you have: ";
	cin >> cents;

	quarters = cents / QUARTER;
	cents = cents % QUARTER;

	dimes = cents / DIME;
	cents = cents % DIME;

	pennies = cents / PENNY;
	cents = cents % PENNY;

	cout << "Quarters: " << quarters << endl << "Dimes: " << dimes << endl << "Pennies: " << pennies << endl;

	return 0;
}
