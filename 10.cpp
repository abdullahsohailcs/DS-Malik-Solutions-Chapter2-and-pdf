#include<iostream>
using namespace std;
int main()
{
	double num1, num2, num3, num4, num5, newNum;

	cout << "Please enter first number: ";
	cin >> num1;
	cout << "Please enter second number: ";
	cin >> num2;
	cout << "Please enter third number: ";
	cin >> num3;
	cout << "Please enter fourth number: ";
	cin >> num4;
	cout << "Please enter fifth number: ";
	cin >> num5;

	newNum = num1 + num2+ num3+ num4+ num5;

	cout <<"Sum of numbers to nearest integer: " << static_cast<int>(newNum) << endl;


	cout << endl;
	system("pause");
	return 0;
}