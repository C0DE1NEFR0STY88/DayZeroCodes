//https://www.onlinegdb.com/


/*
#include<iostream>

using namespace std;

void sortedthatone(double arrrec[], int numelerec)
{
    sort(arrrec,arrrec+numelerec);
    cout<<"\n\nThe sorted array is:\n";
    for(int i=0;i<numelerec;i++)
        cout<<arrrec[i]<<" ";
}

int main()
{
    srand(time(0));
    
    int randomman=rand()%609, numele;
    double arr[randomman];
    
    for(int i=0;i<randomman;i++)
        arr[i]=rand()%10000;
    
    numele=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nThe array has "<<numele<<" elements, with each element taking "<<sizeof(arr[0])<<" bytes of storage.";
    cout<<"\nThe array takes "<<sizeof(arr)<<" bytes as a whole.";
    
    cout<<"\n\nThe current array build layout is: \n";
    for(int i=0;i<numele;i++)
        cout<<arr[i]<<" ";
    
    sortedthatone(arr, numele);
    
    return 0;
}
*/





/*
#include<iostream>

using namespace std;

int main()
{
    srand(time(0));
    char alphanumbase[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    //cout<<sizeof(alphanumbase);
    int basesize=62, userlength;
    cout<<"Enter the desired length of the alphanumeric string: ";
    cin>>userlength;
    
    char alphanumgen[userlength+1];
    
    for(int i=0;i<userlength;i++)
        alphanumgen[i]=alphanumbase[rand()%basesize];
    
    cout<<"\n\nThe generated alphanumeric string is: \n";
    alphanumgen[userlength+1]='\0';
    cout<<alphanumgen;
    return 0;
}
*/
