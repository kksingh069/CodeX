// C++ to calculate time in microseconds
#include <chrono>
#include <iostream>

using namespace std;

using namespace chrono;

// A function performing 10^7 operations
void function_performing_iterations()
{
	for (int i = 0; i < 10000000;) {
		i++;
	}
}

// Driver Code
int main()
{
	// Timer starts now
	auto start1 = high_resolution_clock::now();

	function_performing_iterations();

	// Timer ends now
	auto stop1 = high_resolution_clock::now();
	// Difference is calculated
	auto duration
		= duration_cast<microseconds>(stop1 - start1);

	// Displays time in output file in
	// microseconds
	cerr << "Time taken in microseconds : "
		<< (double)(duration.count() / 1000.0) << endl;
}
