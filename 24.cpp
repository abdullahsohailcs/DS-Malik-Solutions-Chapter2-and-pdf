#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
	double total_length, length, width;

	cout << "Please enter the total length of the wire: ";
	cin >> total_length;

	length = (float(75/100) * total_length);
	width = (0.25  * total_length);

	cout << "Length of the frame: " << length << endl;
	cout << "Width of the frame: " << width << endl;

	system("pause");
	return 0;
}