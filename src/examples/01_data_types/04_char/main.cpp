#include "char.h"
#include<iostream>

usint std::cout;

int main()
{

    char letter = 'A';
    char ascii = get_char_ascii_value(letter);

    cout<<"ASCII value for "<<leter<<" is "<<ascii<<"\n";

    return 0;
}