#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num, numcopy, x=0, temp;
    
    cout<<"Enter num: ";
    cin>>num;
    numcopy=num;
    
    while(num>0&&num!=0)
    {
        temp=num%10;
        x=x+(pow(temp,3));
        num=num/10;
    }
    
    if(numcopy==x)
        cout<<x<<" is an armstrong number";
    else
        cout<<x<<" v/s "<<numcopy<<" is not an armstrong number";
    
    return 0;
}

//a narcissistic number also known as a pluperfect digital invariant (PPDI), an Armstrong number (after Michael F. Armstrong) or a plus perfect number)
//https://en.wikipedia.org/wiki/Narcissistic_number
//sum of cubes of all digits = num
