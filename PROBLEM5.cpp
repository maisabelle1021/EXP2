#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int b;
	
	cout << "Counting..." << endl;
	for (b=1;b<=10;b++)
	{
		cout << b << ", ";
	}
	
	for (b=10; b<=26;)
	{
		b = b+2;
		cout << b << ", ";
	}
	
	for (b=28;b<=28;)
	{
		b = b+2;
		cout << b << " ";
	}
	
	_getch();
	return 0;

}
