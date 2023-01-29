#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
	const double PI = 3.1416;
	double total_length, radius, area;

	cout << "Please enter the total length of the wire: ";
	cin >> total_length;

	radius = (total_length / 2) / PI;
	cout << "Radius of the circle: " << radius<<endl;

	area = PI * radius * radius;
	cout << "Area of the circle: " << area<< endl;

	system("pause");
	return 0;
}