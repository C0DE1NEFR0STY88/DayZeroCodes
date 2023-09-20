#include<iostream>

using namespace std;

int main()
{
    int arr[]={2,1,3,5,4,6,8,7,0,9},  a;
    
    a=(sizeof(arr)/sizeof(arr[0]));
    
    cout<<"Size of array is "<<sizeof(arr)<<" with each element taking "<<sizeof(arr[0])<<" bytes.\n";
    cout<<"There are "<<a<<" elements in the array.";

    //sort(arr, arr+a);
    sort(begin(arr),end(arr));
    
    cout<<"\nThe sorted array is: \n";
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

//https://www.geeksforgeeks.org/sort-c-stl/
//https://www.geeksforgeeks.org/sort-algorithms-the-c-standard-template-library-stl/
//https://www.onlinegdb.com/




/* toggle hehe just add in two slashes (try to mimic the ones at the end of this set) (spam pgup)
#include<iostream>

using namespace std;

int main()
{
    double arr[]={1,2,3,4,2,1,3,32,12,3,4,2,1,34,2,869,13,3,123,1,4,123,327,869,23,24,6,754,5675,575,57,34,24,32,242,9,87,6,65,5,234,4,65,43,3,6};
    int a;
    
    a=(sizeof(arr)/sizeof(arr[0]));
    cout<<"Size of the array is "<<sizeof(arr)<<" bytes, with each element taking "<<sizeof(arr[0])<<" bytes.";
    cout<<"\nThere are "<<a<<" elements in the array";
    
    sort(begin(arr),end(arr));
    cout<<"\n\nThe sorted array is: ";
    for(int i=0;i<a;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}
//*/





/*
//begin end v/s arr arr+a: 
//in a (), begin end doesn't work; must use arr arr+a logic path

#include<iostream>

using namespace std;

void sortedthatone(double arr[], int noele)
{
    sort(arr, arr+noele); //begin end won't work here
    for(int i=0;i<noele;i++)
        cout<<arr[i]<<" ";
}


int main()
{
    double arr[]={123,7,1,53,61,76,5,23,1,76,56,153,71,6,35,15,3};
    int noele;
    noele=(sizeof(arr)/sizeof(arr[0]));
    sortedthatone(arr,noele);
    return 0;
}

*/


//AUTO GEN VERSION!!!!!
/* 
//ACTUAL!!!!
#include<iostream>

using namespace std;

void sortedthatone(double arrrec[], int noelerec)
{
    sort(arrrec,arrrec+noelerec);
    
    cout<<"\n\nThe sorted array is: \n";
    for(int i=0;i<noelerec;i++)
        cout<<arrrec[i]<<" ";
}

int main()
{
    double randomsizer=rand()%500, arr[500];
    
    for(int k=0;k<randomsizer;k++)
        arr[k]=rand()%10000;
    //double arr[]={123,98,1,72,31,198,2,6,48,7,16,43,8,91,7,9481,23,4,7,0,192,8,3,74,91,82,37,4,98,3,749,18,36,5,892,3,7409,18,24,82,9,7,13};
    int noele=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"\nThere are "<<noele<<" elements in the array, with each element taking "<<sizeof(arr[0])<<" bytes.";
    cout<<"\nThe array takes "<<sizeof(arr)<<" bytes in total.";
    
    cout<<"\n\nThe current array structure is: \n";
    for(int j=0;j<noele;j++)
        cout<<arr[j]<<" ";
    
    sortedthatone(arr,noele);
    
    return 0;
}

//ACTUAL_END!!!!
*/
/***********************************************************************************************/
/*
//ACTUAL_FIXED!!! will continue when next to td yippeeeeee
#include<iostream>

using namespace std;

void sortedthatone(double arrrec, int noelerec)
{
    
}

int main()
{
    srand(time(0)); //NEED TO SEED THE RANDOM FUNCTION AND LATCH IT TO TIME FOR CYBER-PSEUDO-RANDOMNESS TO BE STRONG
    
    int limiter=500, randomsizeman=rand()%limiter; 
    double arr[randomsizeman];
    
    for(int i=0;i<randomsizeman;i++)
        arr[i]=rand()%100000;
    //cout<<sizeof(arr)<<" "<<randomsizeman;
    
    cout<<""
    return 0;
}

//https://stackoverflow.com/questions/1108780/why-do-i-always-get-the-same-sequence-of-random-numbers-with-rand
//https://www.epochconverter.com/
//ACTUAL_FIXED_END!!!

*/
