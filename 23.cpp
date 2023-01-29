#include<iostream>
using namespace std;
int main() {

	double stock_amount, buying_price, selling_price, total_buying_price, total_selling_price, commission, net_profit;

	cout << "Please enter the number of shares you brought: ";
	cin >> stock_amount;
	cout << "Please enter the purchasing price of a single share: ";
	cin >> buying_price;
	cout << "Please enter the selling price of a single share: ";
	cin >> selling_price;

	total_buying_price = stock_amount * buying_price;
	cout << "Amount invested: " << total_buying_price<<endl;

	total_selling_price = stock_amount * selling_price;
	cout << "Total amount receive after selling: " << total_selling_price << endl;
	commission = (1.5 / 100 * total_selling_price);
	cout << "Firm charges: " << commission<<endl;
	net_profit = total_selling_price - total_buying_price - commission;
	cout << "Net profit: " << net_profit << endl;


	system("pause");
	return 0;
}