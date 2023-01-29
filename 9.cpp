#include<iostream>
#include<string>
using namespace std;
int main()
{
	double subject1, subject2, subject3, subject4, subject5, average ;

	cout << "Please enter the marks of first subject: ";
	cin >> subject1;
	cout << "Please enter the marks of second subject: ";
	cin >> subject2;
	cout << "Please enter the marks of third subject: ";
	cin >> subject3;
	cout << "Please enter the marks of fourth subject: ";
	cin >> subject4;
	cout << "Please enter the marks of fifth subject: ";
	cin >> subject5;

	average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;

	cout << "Average test score are " << average << endl;

	cout << endl;
	system("pause");
	return 0;
}