#include <iostream>
using namespace std;

int main()
{
	cout << "Start\n";
	
	try
	{
		cout << "Inside try block\n";
		throw 1;
		cout << "This will not execute";
	}
	catch(int i)
	{
		cout << "Caught an exception -- value is: ";
		cout << i << "\n";
	}
	cout << "End";
	return 0;
}
