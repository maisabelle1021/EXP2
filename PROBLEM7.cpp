#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int result, number, i, initial;
	bool end = false;

	do
	{
		cout << "Enter a number: "; cin>> number;
		
		//"end" will only become true if 0 is entered
		if (number <= 0) 
		{
			end=true;
			cout << "Thank you!" << endl;
		}
		else
		{
		//uses the formula for the sum of the first X natural numbers to find the sum of all the numbers starting from 1 to entered number
			result = number*(number+1)/2;
				
			cout << "The sum of all whole numbers from 1 to " << number << " is " << result << "." << endl;
			
			end=false;
		}
	} while (!end);
	
	return 0;
}
