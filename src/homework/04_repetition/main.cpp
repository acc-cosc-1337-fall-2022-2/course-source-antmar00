//write include statements
#include "dna.h"

//write using statements
using namespace std;



/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int selection = 0;
	int num, num1, num2;
	do
	{
		cout<<"\nSelect option \n";
		cout<<"1 - Factorial \n";
		cout<<"2 - Greatest Common Divisor \n";
		cout<<"3 - Exit \n";
		cout<<"Choose option: \n";
		cin>>selection;
		cout<<"\n";

		if(selection == 1)
		{
			cout<<"Enter a number: ";
			cin>>num;
			cout<<"\n";
			cout<<"The factorial of " << num << " is " << factorial(num) << "\n";
			selection = 0;
		}
		else if(selection == 2)
		{
			cout<<"Enter first number: ";
			cin>>num1;
			cout<<"\n";
			cout<<"Enter second number: ";
			cin>>num2;
			cout<<"\n";
			cout<<"The greatest common divisor of both numbers is " << gcd(num1, num2) << "\n";
			selection = 0;
		}
		else
		{
			cout<<"Are you sure you want to exit? (Press 3 again to exit) \n";
			cin >> selection;
			if(selection == 3)
			{
				break;
			}
			else
			{
				cout<<"Back to main menu \n";
				selection = 0;
			}
		}
	}
	while(selection == 0);

	return 0;
}