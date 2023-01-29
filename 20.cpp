#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double cost, fix_commision, percentage, min, max;

	cout << "Please enter the cost of the car: ";
	cin >> cost;
	cout << "Please enter the fix commision of the salesman: ";
	cin >> fix_commision;
	cout << "Enter the percentage of the commision out of 100%: ";
	cin >> percentage;
	cout << "Enter minimum profit: ";
	cin >> min;
	cout << "Enter maximum profit: ";
	cin >> max;

	cout << "Maximum selling price: " << cost + max << "$\n";
	cout << "Minimum selling price: " << cost + min << "$\n";
	cout << "Commission range: " << (percentage / 100) * (cost + min) << "$ to " << (percentage / 100) * (cost + max) << "$ \n";



	system("pause");
	return 0;
}