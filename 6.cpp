#include<iostream>
#include<string>
using namespace std;
int main() 
{
	string name;
	double studyHours;

	cout << "Please enter your name: ";
	cin >> name;
	cout << "Please enter the study hours: ";
	cin >> studyHours;

	cout << "Hello, " << name << "! on Saturday, you need to study " << studyHours << " hours for the exams" << endl;



	cout << endl;
	system("pause");
	return 0;
}