#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number, counter;	
	cout << "Enter a number: "; cin >> number;
	cout << "Multiplication table of" << " " << number << ":"<< endl;
	
	for (counter=1;counter<=10;counter++)
	{
		cout << counter << "*" << number << "=" << counter*number << endl;
	}
	_getch();
	return 0;
}
