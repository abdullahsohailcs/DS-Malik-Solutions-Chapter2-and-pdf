#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double pay_rate, hours_you_worked, income_after_tax, tax_amount, income;
	cout << "Please enter the number of hours you have worked: ";
	cin >> hours_you_worked;
	cout << "Please enter the pay rate for one hour: ";
	cin >> pay_rate;

	income = pay_rate * hours_you_worked;
	cout << "Total amount you earned without tax reduction: " <<income << "$\n";

	tax_amount = (0.15 * income);
	income_after_tax = (income - tax_amount);
	cout << "Total amount you earned after tax reduction: " <<income_after_tax<< "$\n";

	
	cout << "Money spent on new clothes and other things: " << (0.1 * income_after_tax) << "$\n";

	cout << "Money spent on school supplies: " << (0.01 * income_after_tax) << "$\n";

	cout << "Money spent on bonds: " << (0.25 * income_after_tax) << "$\n";
	cout << "Additional money spent by parents: " << 0.50*(0.25 * income_after_tax) << "$\n";


	system("pause");
	return 0;
}