#include<iostream>
using namespace std;
int main()
{
	double number;
	
	cout << "Please enter a decimal number: ";
	cin >> number;

	cout <<"Number in interger form: " <<static_cast<int>(number);

	cout << endl;
	system("pause");
	return 0;
}