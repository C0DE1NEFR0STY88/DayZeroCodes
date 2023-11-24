#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<double> v1; //change datatype here => can be byte, int, float, double
    
    for(double i=0;i<20;i++) //change datatype here //for block can be commented out
        v1.push_back(i);
    
    cout<<"\nSize: "<<v1.size();
    cout<<"\nCapacity: "<<v1.capacity();
    cout<<"\nMax_size: "<<v1.max_size();
    
    cout<<"\n\n"<<sizeof(v1)<<"\n\n";
    //vector max_size takes a set amount of memory, 
    //divides it by data type, then returns how many elements can be stored in it; 
    //that is why on changing vector data type, this value changes as well
    
    if(bool(v1.empty())==0)
        cout<<"\n\nnot empty "<<bool(v1.empty());
    
    return 0;
}

//active linkdump (non combatant):
/*
https://www.geeksforgeeks.org/vector-in-cpp-stl/
https://cs.android.com/android/platform/superproject/main/+/main:dalvik/opcode-gen/opcode-gen
https://www.google.com/ search string: why does max_size return different values for different vector data types
https://cplusplus.com/reference/vector/vector/max_size/
https://www.geeksforgeeks.org/cpp-sizeof-operator/
*/
