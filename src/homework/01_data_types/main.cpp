//write include statements

#include "data_types.h"
#include <iostream>

//write namespace using statement for cout

using std::cin;
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;

	int result;
	result = multiply_numbers(num);
	cout<<"The multiplied equals to: " <<result <<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Four time  five is: " <<result <<"\n";

	return 0;
}
