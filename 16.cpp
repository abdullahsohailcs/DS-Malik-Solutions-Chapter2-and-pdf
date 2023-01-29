#include<iostream>
using namespace std;
int main()
{
	double total_milk, carton_needed;
	cout << "Please enter the total milk produced: ";
	cin >> total_milk;
	carton_needed = total_milk / 3.74;
	cout <<"Number of carton needed to store the milk: "<< static_cast<int>(carton_needed)<<"\n";
	cout << "Total cost of producing milk in dollars: " << 0.38 * total_milk << endl;
	cout << "Total profit in dollars: " << static_cast<int>(carton_needed) * 0.27 << endl;


	system("pause");
	return 0;
}