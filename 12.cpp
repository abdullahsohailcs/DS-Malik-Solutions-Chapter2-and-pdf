#include<iostream>
using namespace std;
int main()
{
	int time_elapse, time_in_hours, time_in_minutes, time_in_seconds;
	

	cout << "Please enter the time elapse in seconds(s): ";
	cin >> time_elapse;

	time_in_seconds = time_elapse % 60;
	time_in_minutes = time_elapse / 60;
	time_in_minutes = time_in_minutes % 60;
	time_in_hours = (time_elapse-time_in_seconds-time_in_minutes);
	time_in_hours = (time_in_hours / (60 * 60));

	cout << "Time in hours, minutes and seconds is " << time_in_hours << " : " << time_in_minutes << " : " << time_in_seconds << " " << endl;

	cout << endl;
	system("pause");
	return 0;
}