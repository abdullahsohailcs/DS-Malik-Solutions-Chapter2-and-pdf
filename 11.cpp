#include<iostream>
using namespace std;
int main()
{
	double capacity, milage, distance;

	cout << "Please enter the capacity of the fuel tank in gallons: ";
	cin >> capacity;
	cout << "Please enter the milage of the vechile in miles per gallons: ";
	cin >> milage;

	distance = capacity *milage;
	cout << "Range of vehicle is " << distance << " miles." << endl;

	cout << endl;
	system("pause");
	return 0;
}