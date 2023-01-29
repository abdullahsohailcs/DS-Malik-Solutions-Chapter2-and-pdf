#include<iostream>
using namespace std;
int main()
{
	double initial_size, GB, original_size;
	cout << "Please enter the size of the hard disk printed by the manufacturer in GB: ";
	cin >> initial_size;

	GB = initial_size * 1000000000;
	cout << "Number of bytes according to the manufacturer: " << GB << endl;

	double bytes_kb, KB_MG, MG_GB;
	bytes_kb = GB/1024;
	KB_MG = (bytes_kb / 1024);
	MG_GB = (KB_MG / 1024);
	original_size=MG_GB;
	cout << "Original size of the disk is " << original_size << endl;


	system("pause");
	return 0;
}