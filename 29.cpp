#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double ordered_mixture_in_cubic_yards, thickness_in_inches, length_ratio, width_ratio;
	double ordered_mixture_in_cubic_feet, thickness_in_feets, x;

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

	//x is the common factor of the ratio. It can be found by the below expression
	x = sqrt(ordered_mixture_in_cubic_feet/length_ratio*width_ratio*thickness_in_feets);
	cout << "Common factor of the ratio: " << x<<endl;

	cout << "Length: ";
	cout <<length_ratio*x ;
	cout << endl;
	cout << "width: ";
	cout << width_ratio*x;
	cout << endl;


	system("pause");
	return 0;


}