#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double base, perpendicular, hyp;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"\nEnter perpendicular: ";
    cin>>perpendicular;
    hyp=(sqrt((base*base)+(perpendicular*perpendicular)));
    cout<<"\n\nThe hypotenuse is: "<<hyp;
    
    return 0;
}
