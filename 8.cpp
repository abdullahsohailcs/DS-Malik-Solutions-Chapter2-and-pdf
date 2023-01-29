#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int SECRET = 11;
	const double RATE = 12.50;
	
	int num1, num2, newNum;
	string name;
	double hoursWorked, wages;

	cout << "Please enter first number: ";
	cin >> num1;
	cout << "Please enter second number: ";
	cin >> num2;

	cout << "First number= " << num1 << endl;
	cout << "Second number= " << num2 << endl;

    newNum = (num1 * 2) + num2;
	cout << "New number is " << newNum << endl;

	newNum = newNum + SECRET;
	cout << "Updated number is " << newNum << endl;

	cout << "Please enter your last name: ";
	cin >> name;

	cout << "Please enter a decimal number between 0 and 70: ";
	cin >> hoursWorked;

	wages = RATE * hoursWorked;

	cout << "Name: " << name << endl;
	cout << "Pay Rate: " << RATE<<"$"<<endl;
	cout<<"Hours Worked: "<< hoursWorked<< endl;
	cout << "Salary: " << wages << "$" << endl;



	cout << endl;
	system("pause");
	return 0;
}