#include<iostream>

using namespace std;

int main()
{
    int arr[]={2,1,3,5,4,6,8,7,0,9},  a;
    
    a=(sizeof(arr)/sizeof(arr[0]));
    
    cout<<"Size of array is "<<sizeof(arr)<<" with each element taking "<<sizeof(arr[0])<<" bytes.\n";
    cout<<"There are "<<a<<" elements in the array.";
    
    sort(begin(arr),end(arr));
    
    cout<<"\nThe sorted array is: \n";
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


//https://www.geeksforgeeks.org/sort-algorithms-the-c-standard-template-library-stl/
//https://www.onlinegdb.com/
