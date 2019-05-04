#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int X, Y, row, colm, A, B;
	bool end = false;
	char ast;
	
	
	cout << "How many rows: "; cin >> X;
	cout << "How many columns: "; cin >> Y;
	
	for (row=0; row<X; row++)
	{
		for (colm=0; colm<Y; colm++)
		{
			cout << "*";
		}
		
		cout << " " << endl;
	}
	
		
	
	return 0;
	
}
