#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main ()
{
	float X,Y, Z, V;
	char value;
	
	Z = 2.5;
	

	//Allows user to choose the value of X
	cout << "Choose value of X:" << endl;
	cout << "[A] X=1 and 1<y<5"<< endl;
	cout << "[B] X=1 and y>=5" << endl;
	cout << "[C] X=2 and y<=5" << endl;
	cout << "[D] X=2 and y>5" <<endl;
	cout << "[E] Other values (please specify)" << endl;
	cout << " " << endl;
	cout << "Enter choice: "; cin >> value;
	cout << " " << endl;
	

	// Program will refuse to calculate if the entered Y value is not within the specified parameters of the choice
	switch (value)
	{
		case 'A':
		case 'a':
			X = 1;
			cout << "Y= "; cin >> Y;
			if (1<Y && Y<5)
			{
				V= X*Y*Z;
				cout << "V= " << V << endl;
			}
			else
			{
				cout << " " << endl;
				cout << "Invalid Y value for option selected." << endl;
			}
			break;
			
		case 'B':
		case 'b':
			X = 1;
			cout << "Y= "; cin >> Y;
			if (Y>=5)
			{
				V= X + Y/Z;
				cout << "V= " << V << endl;
			}
			else
			{
				cout << " " << endl;
				cout << "Invalid Y value for option selected." << endl;
			}
			break;
			
		case 'C':
		case 'c':
			X = 2;
			cout << "Y= "; cin >> Y;
			if (Y<=5)
			{
				V= ((X-Y)/Z)*(-1);
				cout << "V= " << V << endl;
			}
			else
			{
				cout << " " << endl;
				cout << "Invalid Y value for option selected." << endl;
			}
			break;
			
		case 'D':
		case 'd':
			X = 2;
			cout << "Y= "; cin >> Y;
			if (Y>5)
			{
				V= X - sqrt(Y+Z);
				cout << "V= " << V << endl;
			}
			else
			{
				cout << " " << endl;
				cout << "Invalid Y value for option selected." << endl;
			}
			break;
			
		case 'E':
		case 'e':
			cout << "Enter X value: "; cin >> X;
			cout << "Enter Y value: "; cin >> Y;
			cout << " " << endl;
			
			V= X+Y+Z;
			cout << "V= " << V << endl;
			break;
			
			default: cout << "Please choose a letter between A to E." << endl;
	}
	_getch();
	return 0;
}
