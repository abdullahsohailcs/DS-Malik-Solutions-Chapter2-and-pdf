#include<iostream>
using namespace std;
int main() {

	double radius, price_per_inch, area;
	cout << "Please enter the price per inche: ";
	cin >> price_per_inch;
	cout << "Please enter the radius of the pizza: ";
	cin >> radius;

	area = 3.14 * radius * radius;
	cout << "Area of the pizza is " << area << " square inche" << endl;
	cout << "Price of per square inche of pizza is " << (area/price_per_inch)<<endl;


	system("pause");
	return 0;
}