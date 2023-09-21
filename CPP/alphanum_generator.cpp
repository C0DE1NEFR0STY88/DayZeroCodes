#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    srand(time(0)); //If srand() is not called, the rand() seed is set as if srand(1) were called at the program start
    
    int inplen;
    char alphanumbase[]="1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"; //aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ1234567890
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



/*
#include<iostream>

using namespace std;

int main()
{
    char test[]={'a', 'b', 'c', 'd'}; //toggle
    //char test[]={'a', 'b', 'c', 'd', '\0'}; //toggle
    //char test[]="abcd"; //toggle
    cout<<sizeof(test)<<" "<<test;
    return 0;
}

//https://techdifferences.com/difference-between-character-array-and-string.html#:~:text=Here%2C%20%E2%80%9Cchar%E2%80%9D%20is%20a%20character%20data%20type%2C%20%E2%80%9Cname%E2%80%9D%20is%20a%20variable%20name%20of%20the%20character%20array.%20I%20had%20shown%20two%20ways%20to%20initialize%20the%20character%20array.%20In%20the%20first%20method%2C%20the%20null%20is%20explicitly%20mentioned%20and%20in%20the%20second%20method%2C%20the%20compiler%20automatically%20inserts%20the%20null.
//https://en.wikipedia.org/wiki/Null_character
*/



/* remove garbage from o/p patch
#include<iostream>

using namespace std;

int main()
{
    srand(time(0));
    
    char alphanumbase[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    int basesizesafezone=62, userlength;
    //cout<<sizeof(alphanumbase);
    cout<<"\nEnter desired length: ";
    cin>>userlength;
    
    char alphanumgen[userlength+1];
    
    for(int i=0;i<userlength;i++)
        alphanumgen[i]=alphanumbase[rand()%basesizesafezone];
    
    alphanumgen[userlength+1]='\0'; //https://www.codeproject.com/Questions/1253566/Why-am-I-getting-garbage-values-along-with-the-res
    cout<<"\nThe generated alphanumeric string is:\n";
    
    cout<<alphanumgen;
    //for(int i=0;i<userlength;i++)
    //    cout<<alphanumgen[i];
    return 0;
}
*/
