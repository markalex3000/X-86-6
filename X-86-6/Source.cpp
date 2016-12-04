// Read 3 intergers and print them out in order

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

inline void simple_error(string s)	// write ``error: s and exit program
{
	cerr << "error: " << s << '\n';
	keep_window_open();		// for some Windows environments
	exit(1);
}

int main() {
	string val1{ 0 }, val2{ 0 }, val3{ 0 };
	cout << "initial values: " << val1 << ", " << val2 << ", " << val3 << "\n";

	cout << "please enter three white-space delimited strings:  ";
	cin >> val1;
	cin >> val2;
	cin >> val3;

	cout << "Raw Strings: " << val1 << ", " << val2 << ", " << val3 << "\n";

	string temp{  };
	if (val1 > val2)	//compare the first two numbers - swap if in wrong order
	{
		temp = val2;
		val2 = val1;
		val1 = temp;
	}

	cout << "Semi-Ordered Strings: " << val1 << ", " << val2 << ", " << val3 << "\n";
	
	if (val2 > val3)	//compare the second two numbers - swap if in wrong order
	{
		temp = val3;
		val3 = val2;
		val2 = temp;
	}

	if (val1 > val2)	//compare the first two numbers again - swap if in wrong order
	{
		temp = val2;
		val2 = val1;
		val1 = temp;
	}

	cout << "Ordered Strings: " << val1 << ", " << val2 << ", " << val3 << "\n";

	keep_window_open();
	return 0;

}
