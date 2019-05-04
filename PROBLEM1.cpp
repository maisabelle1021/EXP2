#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int choice, additional, hrs, totalBill;
	
	//Lets the customer choose which package they availed and enter hours used
	cout << "PRESS:" << endl;
	cout << "[1] for Package A" << endl;
	cout << "[2] for Package B" << endl;
	cout << "[3] for Package C" << endl;
	
	cout << " " << endl;
	cout << "Please enter package purchased: "; cin >> choice;
	cout << "Please enter hours used: "; cin >> hrs;
	
	//computing total bill
	switch (choice)
	{
		case 1:
			if (hrs <=10)
			{
				totalBill = 995;
				cout << "Total amount due:" << " " << "P" << totalBill <<endl;
			}
			else
			{
				additional = (hrs - 10) * 20;
				totalBill = 995 + additional;
				cout << "Total amount due:" << " " << "P" << totalBill << endl;
			}
			break;
		
		case 2:
			if (hrs <=20)
			{
				totalBill = 1495;
				cout << "Total amount due:" << " " << "P" << totalBill <<endl;
			}
			
			else
			{
				additional = (hrs - 20) * 10;
				totalBill = 1495 + additional;
				cout << "Total amount due:" << " " << "P" << totalBill << "." << endl;
			}
			break;
		
		case 3:
			totalBill = 1995;
			cout << "Total amount due:" << " " << "P" << totalBill << endl;
			break;
		
		
		default: cout << "Please enter a number between 1 to 3." << endl;
		
		_getch();
		return 0;
	}
}
