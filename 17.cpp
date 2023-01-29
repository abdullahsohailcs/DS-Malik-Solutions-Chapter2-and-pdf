#include<iostream>
using namespace std;
int main()
{
	double total_milk, carton_needed, cost, profit;
	cout << "Please enter the total milk produced: ";
	cin >> total_milk;
	cout << "Please enter the cost of milk production in dollars: ";
	cin >> cost;
	cout << "Please enter the profit on each carton on dollars: ";
	cin >> profit;
	carton_needed = total_milk / 3.74;
	cout << "Number of carton needed to store the milk: " << static_cast<int>(carton_needed) << "\n";
	cout << "Total cost of producing milk in dollars: " << cost * total_milk << endl;
	cout << "Total profit in dollars: " << static_cast<int>(carton_needed) * profit << endl;


	system("pause");
	return 0;
}