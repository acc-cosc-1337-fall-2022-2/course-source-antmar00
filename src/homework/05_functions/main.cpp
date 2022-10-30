#include "func.h"
#include <vector>
#include <iostream>

using std::cin;
using std::cout;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int menu = 0;

	do
	{
		int selection;
		cout<<"1- Get GC Content \n";
		cout<<"2- Get DNA Complement \n";
		cout<<"3- Exit \n";
		cout<<"\n Choose selection: ";
		cin>>selection;

		double gc_content;
		string dna;
		string dna_complement;

		if (selection == 1)
		{
			cout<<"*ONLY UPPERCASE*";
			cout<<"Enter DNA string: \n";
			cin>>dna;
			gc_content = get_gc_content(dna);
			cout<<"The DNA content is: " <<gc_content<<"\n";
		}

		else if (selection == 2)
		{
			cout<<"*ONLY UPPERCASE*";
			cout<<"Enter DNA string: \n";
			cin>>dna;
			dna_complement = get_dna_complement(dna);
			cout<<"The DNA complement is: " <<dna_complement<<"\n";
		}

		else
		{
			cout<<"To stay, press 0, else press any number: ";
			cin>>menu;
		}
	}
	while(menu == 0);

	cout<<"Goodbye \n";

	return 0;
}