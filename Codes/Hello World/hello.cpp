// Command to execute code:
// $ g++ -o hello hello.cc
// $ ./hello

#include <iostream>
using namespace std;

int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    cout << "Hello, World! \n";
    int a,b;
    cin>>a>>b;
    cout<<a+b<<"\n";

    return 0;
}