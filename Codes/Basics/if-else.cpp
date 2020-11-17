#include <iostream>
using namespace std;

int main() 
{
    int savings;
    cin>>savings;

    //if-else statement
    if(savings>5000) {
        cout<<"Neha\n";
    } else {
        cout<<"Rashmi\n";
    }

    //nested if-else statement

    if(savings>5000) {
        if (savings>10000)
        {
            cout<<"Shoping with Neha\n";
        }
        else
        {
            cout<<"RoadTrip with Neha\n";
        }
        
    } else if(savings>2000) {
        cout<<"Rashmi\n";
    } else {
        cout<<"Friends\n";
    }
    
    return 0;
}