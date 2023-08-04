#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"\nEnter number 2: ";
    cin>>b;
    
    if(a>b)
        cout<<"The number "<<a<<" is greater.";
    else if(a<b)
        cout<<"The number "<<b<<" is greater.";
    else
        cout<<"Both numbers are equal.";
    
    return 0;
}
