#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const double K = 6.67E-8;
	double m1, m2, d, F;

	cout << "Please enter the mass of first object: ";
	cin >> m1;
	cout << "Please enter the mass of second object: ";
	cin >> m2;
	cout << "Please enter the distance between the objects: ";
	cin >> d;

	F = K*((m1 * m2) / (d * d));
	cout << "Force = " << F << "N" << endl;

	system("pause");
	return 0;
}