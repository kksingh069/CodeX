// C++ program to normalize the given
// time into standard form
#include <conio.h>
#include <iostream>
using namespace std;

// Time class
class Time {
private:
	// Instance variables
	int HR, MIN, SEC;

public:
	void setTime(int, int, int);
	void showTime();
	void normalize();
};

// Function that sets the given time
void Time::setTime(int h, int m, int s)
{
	HR = h;
	MIN = m;
	SEC = s;
}

// Function to show the given time
void Time::showTime()
{
	cout << endl
		<< HR << ":"
		<< MIN << ":" << SEC;
}

// Function to normalize the given
// time into standard form
void Time::normalize()
{
	// Convert the time into the
	// specific format
	MIN = MIN + SEC / 60;
	SEC = SEC % 60;
	HR = HR + MIN / 60;
	MIN = MIN % 60;
}

// Driver Code
int main()
{
	// Object of class Time
	Time t1;

	t1.setTime(5, 125, 130);
	t1.showTime();

	// Normalize the time
	t1.normalize();
	t1.showTime();

	return 0;
}
