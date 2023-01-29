#include<iostream>
using namespace std;
int main()
{
	double length_of_door, width_of_door, area_of_door;

	cout << "Please enter the length of the door: ";
	cin >> length_of_door;
	cout << "Please enter the width of the door: ";
	cin >> width_of_door;
	area_of_door = width_of_door * length_of_door * 2; //I have multiplied by two because door has two sides
	cout << "Area of the door(both sides): " << area_of_door << endl;
	//----------------------------------------------------------------------------------------------------------------------------

	double length_of_window1, width_of_window1, area_of_window1;

	cout << "Please enter the length of the window#1: ";
	cin >> length_of_window1;
	cout << "Please enter the width of the window#1: ";
	cin >> width_of_window1;
	area_of_window1 = width_of_window1 * length_of_window1 * 2; //I have multiplied by two because window has two sides
	cout << "Area of window#1: " << area_of_window1 << endl;
	//----------------------------------------------------------------------------------------------------------------------------


	double length_of_window2, width_of_window2, area_of_window2;
	cout << "Please enter the length of the window#2: ";
	cin >> length_of_window2;
	cout << "Please enter the width of the window#2: ";
	cin >> width_of_window2;
	area_of_window2 = width_of_window2 * length_of_window2 * 2; //I have multiplied by two because window has two sides
	cout << "Area of window#1: " << area_of_window1 << endl;
	//----------------------------------------------------------------------------------------------------------------------------

	double length_of_bookself, width_of_bookself, area_of_bookself;
	cout << "Please enter the length of the bookself: ";
	cin >> length_of_bookself;
	cout << "Please enter the width of the bookself: ";
	cin >> width_of_bookself;
	area_of_bookself = width_of_bookself * length_of_bookself * 2; //I have multiplied by two because bookself has two sides
	cout << "Area of bookself: " << area_of_bookself << endl;
	//----------------------------------------------------------------------------------------------------------------------------

	double length_of_room, width_of_room, area_of_room, height_of_room;
	cout << "Please enter the length of the room: ";
	cin >> length_of_room;
	cout << "Please enter the width of the room: ";
	cin >> width_of_room;
	cout << "Please enter the height of the room: ";
	cin >> height_of_room;
	area_of_room = 2 * (length_of_room * width_of_room) + 2 * (length_of_room * height_of_room) + 2 * (height_of_room * width_of_room) * 2;
	//I have multiplied by two because room has two sides
	cout << "Area of room: " << area_of_room << endl;
	//----------------------------------------------------------------------------------------------------------------------------

	double total_area = area_of_door + area_of_window1 + area_of_window2 + area_of_bookself + area_of_room, paint_required;
	cout << "Total area: " << total_area << endl;
	cout << "How much area covered by one gallon paint?" << endl<<"Answere: ";
	cin >> paint_required;
	cout << "Paint required: " << total_area / paint_required << "gallons\n";


	//----------------------------------------------------------------------------------------------------------------------------
	cout << endl;
	system("pause");
	return 0;
}