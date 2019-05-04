#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int A, B, C, Num, seq;
	bool end = false;
	
	Num = 20;
	A = 0;
	B = 1;
	
	cout << "Fibonacci numbers:" << endl;
	
	cout << A << "," << B <<",";
	
	for (seq=0; seq<Num; seq++)
	{
		C= A+B;
		A = B;
		B = C;
		cout << C << ",";
		
		if (C==6765)
			cout << C << " ";
	}
	
	_getch();
	return 0;
}
