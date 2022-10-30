//add include statements
#include "func.h"
#include <iostream>
using std::string;
using namespace std;


//add function code here
double get_gc_content(const string& dna)
{
    double str_total = (double) dna.length();
    int total_gc = 0;

    for(int i = 0; i < dna.length(); i++)
    {
        if ('C' == dna[i] || 'G' == dna[i])
        {
            total_gc++;
        }
    }
    return total_gc / str_total;
}

string get_dna_complement(string dna)
{
    dna = reverse_string(dna);

    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'C')
        {
            dna[i] = 'G';
        }
        else if (dna[i] == 'G')
        {
            dna[i] = 'C';
        }
        else if (dna[i] == 'A')
        {
            dna[i] = 'T';
        }
        else if (dna[i] == 'T')
        {
            dna[i] = 'A';
        }
    }
    return dna;
}

string reverse_string(string dna)
{
    string reverse_dna = dna;

    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'A' || dna[i] == 'T' || dna[i] == 'G' || dna[i] == 'C')
        {
            dna[i] = reverse_dna[(dna.length()-1) - i];
        }
    }
    return dna;
}