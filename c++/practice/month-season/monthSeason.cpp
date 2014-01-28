#include <iostream>
using namespace std;

int main() {
	string month="January";

	cout << "Enter a month (ex: January): ";
	cin >> month;

	if ((month == "December") || (month == "January") || (month == "February"))
		cout << month << " is in Winter" << endl;
	else if ((month == "March") || (month == "April") || (month == "May"))
		cout << month << " is in Spring" << endl;
	else if ((month == "June") || (month == "July") || (month == "August"))
		cout << month << " is in Summer" << endl;
	else if ((month == "September") || (month == "October") || (month == "November"))
		cout << month << " is in Fall" << endl;
	else
		cout << "Please enter a valid month" << endl;

return 0;
}