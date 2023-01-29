#include<iostream>
using namespace std;
int main()
{
	double pounds, capacity, number_of_bags, tons, bags;

	cout << "Please enter the amount of grain in pounds: ";
	cin >> pounds;

	cout << "Please enter the capacity of a bag in pounds: ";
	cin >> capacity;

	number_of_bags = pounds / capacity;
	cout << "Number of bags needed to store all the grains: " << number_of_bags << endl;

	tons = pounds / 2205;
	cout << "Total quantity in metric tons: " << tons << endl;

	bags = (tons/ number_of_bags);
	cout << "Number of bags in one metric ton: " << bags << endl;

	system("pause");
	return 0;
}