#include<iostream>
using namespace std;
int main() 
{
	double number_of_students, calories_required, calories_in_each_pound_of_nuts, calories_in_one_pound_of_fruits, calories_in_mixture_of_one_pound, requied_weight;

	cout << "Please enter the number of students in the school: ";
	cin >> number_of_students;
	cout << "Please enter the amount of calories required by each student: ";
	cin >> calories_required;
	cout << "How many calories are in one pound of nuts?\nAnswere: ";
	cin >> calories_in_each_pound_of_nuts;

	calories_in_one_pound_of_fruits = calories_in_each_pound_of_nuts / 0.70;
	calories_in_mixture_of_one_pound = (calories_in_each_pound_of_nuts + calories_in_one_pound_of_fruits) / 2;
	requied_weight = calories_required / calories_in_mixture_of_one_pound;
	cout << "Number of pounds of dry fruits: "<< requied_weight <<endl;
	cout << "Number of pounds of nuts: "<< requied_weight <<endl<<endl;

	system("pause");
	return 0;
}