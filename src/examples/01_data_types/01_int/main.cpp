#include "int.h"
#include <iostream>


using std::cout;

int main1()
{
    int num;//declare a variable but not assign a value to it
    num = echo_variable(5);

    cout<<"Echo value: "<<num<<"\n";

    return 0;
}