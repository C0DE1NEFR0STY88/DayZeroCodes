#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    srand(time(0)); //If srand() is not called, the rand() seed is set as if srand(1) were called at the program start
    
    int inplen;
    char alphanumbase[]="1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int baselength=62; //length of alphanumbase[] string
    //cout<<sizeof(alphanumbase); //gives 63 as o/p
    
    char alphanumop[300];
    
    cout<<"\nEnter the length of the desired alphanumeric string (MAX 300): ";
    cin>>inplen;
    
    for(int i=0;i<inplen;i++)
        alphanumop[i]=alphanumbase[rand() % baselength]; //https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
    
    cout<<"\n\nThe generated alphanumeric string is: \n";
    cout<<alphanumop;
    
    return 0;
}
