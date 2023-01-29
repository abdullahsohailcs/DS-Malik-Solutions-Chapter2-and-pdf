// Easier way of doing Q29
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double ordered_mixture_in_cubic_yards, thickness_in_inches, length_ratio, width_ratio;
	double ordered_mixture_in_cubic_feet, thickness_in_feets, x, length, width;

	cout << "Please entered the amount of concrete ordered in cubic yards: ";
	cin >> ordered_mixture_in_cubic_yards;
	ordered_mixture_in_cubic_feet = ordered_mixture_in_cubic_yards * 27;
	cout << "Concrete ordered in cubic feets: ";
	cout << ordered_mixture_in_cubic_feet << endl;
	cout << "Please enter the thickness of the patio in inches:";
	cin >> thickness_in_inches;
	thickness_in_feets = thickness_in_inches / 12;
	cout << "Thickness in feets: " << thickness_in_feets << endl;
	cout << "Enter the ratio of the length: ";
	cin >> length_ratio;
	cout << "Enter the ratio of the width: ";
	cin >> width_ratio;
	cout << "Length : Width = " << length_ratio << " : " << width_ratio << endl;

	
	x = length_ratio / width_ratio;
	width = (ordered_mixture_in_cubic_feet * width_ratio) / length_ratio * thickness_in_feets;
	length = ordered_mixture_in_cubic_feet / (width * thickness_in_feets);

	cout << "Length: ";
	cout << length;
	cout << endl;
	cout << "width: ";
	cout << width;
	cout << endl;


	system("pause");
	return 0;


}