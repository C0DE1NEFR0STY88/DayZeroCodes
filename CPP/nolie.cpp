#include<iostream>

using namespace std;

int main()
{
    int a, b, c, n;
    
    a=0;
    b=1;
    c=a+b;
    cout<<"Enter the range: ";
    cin>>n;
    cout<<"\n"<<a<<" "<<b;
    while(c<=n)
    {
        cout<<" "<<c;
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
