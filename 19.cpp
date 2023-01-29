#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double quarters, dimes, nickels, pennies;

	cout << "Please enter the number of quarters: ";
	cin >> quarters;
	cout << "Please enter the number of dimes: ";
	cin >> dimes;
	cout << "Please enter the number of : ";
	cin >> nickels;

	pennies = (quarters * 25) + (dimes * 10) + (nickels * 5);
	cout << "Total number of pennies are " << pennies << endl;

	system("pause");
	return 0;
}