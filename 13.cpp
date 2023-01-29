#include<iostream>
using namespace std;
int main()
{
	double original_price, profit_percentage, profit, tax_percentage, tax_amount, retail_price;
	cout << "Please input the price of the product: ";
	cin >> original_price;
	cout << "Please enter the percentage of the profit: ";
	cin >> profit_percentage;
	cout << "Please enter the tax percentage: ";
	cin >> tax_percentage;
	
	cout << "\n \nOriginal Price: " << original_price << endl;
	
	profit = (profit_percentage / 100) * original_price;
	cout << "Profit percentage: " << profit_percentage << endl;
	cout << "Profit: " << profit << endl;
	
	tax_amount = (tax_percentage / 100) * original_price;
	cout << "Tax rate: " << tax_percentage << endl;
	cout << "Tax amount: " << tax_amount << endl;

	retail_price = tax_amount + profit + original_price;
	cout << "Retail price:" << retail_price << endl;





	system("pause");
	return 0;
}