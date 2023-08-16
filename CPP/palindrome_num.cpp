#include<iostream>

using namespace std;

int main()
{
    int num, numcopy, x=0;
    
    cout<<"Enter num: ";
    cin>>num;
    numcopy=num;
    
    while(num>0&&num!=0)
    {
        x=(x*10)+(num%10);
        num=num/10;
    }
    
    if(numcopy==x)
        cout<<x<<" is a palindrome";
    else
        cout<<x<<" v/s "<<numcopy<<" is not a palindrome";
    
    return 0;
}
//A palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number that remains the same when its digits are reversed. In other words, it has reflectional symmetry across a vertical axis.
//https://en.wikipedia.org/wiki/Palindrome
//https://en.wikipedia.org/wiki/Palindromic_number
