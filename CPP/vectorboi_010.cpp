#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v, v1, v2;
    
    for(int i=0;i<10;i++)
        v.push_back(rand());
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<" ";
    
    cout<<"\n";
    v.clear();//wipe all; pop_back() and erase() also exist if we need to handle one at a time or a specific one
    
    for(int i=0;i<10;i++)
        v.push_back(i);
    for(int i=0;i<v.size();i++)//normal way
        cout<<v[i]<<" ";
    
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    
    cout<<"\n\nVector 1: ";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<"\nVector 2: ";
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
 
    v1.swap(v2);
    
    cout<<"\nAfter Swap \nVector 1: ";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<"\nVector 2: ";
    for (int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    
    
    if(v.empty()==false)
        cout<<"\n\nVector is not empty";
    else
        cout<<"\n\nVector is empty";
    cout<<"\nSize : "<<v.size();
    cout<<"\nCapacity : "<< v.capacity();
    cout<<"\nMax_Size : "<< v.max_size();
    cout<<"\nThe value at position 3 (0,1,2) is: "<<v.at(2); //count from zero, like array
    
    return 0;
}

//https://www.geeksforgeeks.org/vector-in-cpp-stl/
//https://www.geeksforgeeks.org/cpp-pointers/

/*
The time complexity for doing various operations on vectors is-
Random access – constant O(1)
Insertion or removal of elements at the end – constant O(1)
Insertion or removal of elements – linear in the distance to the end of the vector O(N)
Knowing the size – constant O(1)
Resizing the vector- Linear O(N)
*/
