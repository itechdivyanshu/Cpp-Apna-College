#include <iostream>
using namespace std;

int main() 
{
    int a; //declaration
    a=12; //initialisation
    float b;
    char c;
    bool d;

    short int si;
    long int li;

    cout<<"Size of int "<<sizeof(a)<<"\n";
    cout<<"Size of short int "<<sizeof(si)<<"\n";
    cout<<"Size of long int "<<sizeof(li)<<"\n";
    cout<<"Size of float "<<sizeof(b)<<"\n";
    cout<<"Size of char "<<sizeof(c)<<"\n";
    cout<<"Size of bool "<<sizeof(d)<<"\n";

    return 0;
}