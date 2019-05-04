#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//determines the largest number
	
	int A, B, C;
	
	cout << "Enter first number: "; cin >> A;
	cout << "Enter second number: "; cin >> B;
	cout << "Enter third number: "; cin >> C;
	
	if (A==B && B==C)
	{
		cout << " " << endl;
		cout << "All of the numbers are equal." << endl;
	}
	else if (A>=B && A>=C)
	{
		cout << " " << endl;
		cout << "The LARGEST of the three numbers is" << " " << A << "."<< endl;
	}	
	else if (B>=A && B>=C)
	{
		cout << " " << endl;
		cout << "the LARGEST of the three numbers is" << " " << B << "." << endl;
	}
	else
	{
		cout << " " << endl;
		cout << "the LARGEST of the three numbers is" << " " << C << "." << endl;
	}
	
	_getch();
	return 0;
}
