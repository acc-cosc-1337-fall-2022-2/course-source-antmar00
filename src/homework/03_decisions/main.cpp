//write include statements
#include <iostream>
#include "decisions.h"

using std::cin, std::cout, std::string;

int main() 
{
	int selection;
	int grade;
	string letter_grade;

	cout<<"\n MAIN MENU \n";
	cout<<"\n1 - Letter grade using if\n";
	cout<<"2 - Letter grade using switch\n";
	cout<<"3 - Exit\n";

	cout<<"\nEnter Selection: ";
	cin>>selection;

	if (selection == 1)
	{
		cout<<"Enter Grade between 0 - 100: ";
		cin>>grade;
		letter_grade = get_letter_grade_using_if(grade);
		cout<<"This is the letter grade: "<<letter_grade;
		cout<<"\n";
	}
	else if (selection == 2)
	{
		cout<<"Enter Grade between 0 - 100: ";
		cin>>grade;
		letter_grade = get_letter_grade_using_switch(grade);
		cout<<"This is the letter grade: "<<letter_grade;
		cout<<"\n";
	}
	else
	{
		cout<<"\nUntil next time!";
		cout<<"\n";
	}
	return 0;
}