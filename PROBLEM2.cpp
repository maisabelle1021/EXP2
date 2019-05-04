#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	float waterDemand, galUsed, consumeCharge, lateCharge, unpaidBal, TotalBill;
	
	cout << "Gallons used: "; cin >> galUsed;
	cout << "Unpaid balance: "; cin >> unpaidBal;
	
	waterDemand = 35;
	consumeCharge = 1.10;
	lateCharge = 20;
	
	if (unpaidBal==0)
	{
		TotalBill = waterDemand + (galUsed * consumeCharge);
		cout << " " << endl;
		cout << "Total bill is" << " " << "P" << TotalBill << endl;
	}
	else
	{
		TotalBill = waterDemand + (galUsed * consumeCharge) + unpaidBal +lateCharge;
		cout << " " << endl;
		cout << "Total bill is" << " " << "P" << TotalBill << "." << endl;
	}
	
	_getch();
	return 0;
}
