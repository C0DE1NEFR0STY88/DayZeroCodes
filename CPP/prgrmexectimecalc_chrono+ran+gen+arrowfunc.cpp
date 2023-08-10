#include<iostream>
#include<vector>
#include<chrono> //new library

using namespace std;
using namespace std::chrono; //add this in

int main()
{
    vector <int> v(10000);
    
    auto randomnospack = []()-> int{return rand() % 10000;}; //spawn random nos with a specific amount ++ "arrow funtion" ++ auto data type
    
    generate(v.begin(), v.end(), randomnospack); //fill up a vector from a pool of random nos previously generated
    
    auto start=high_resolution_clock::now();
    
    sort(v.begin(), v.end());
    
    auto stop=high_resolution_clock::now();
    
    auto duration=duration_cast<microseconds>(stop-start); //start stop and cast duration parameter
    
    cout<<"The sort () took: "<<duration.count()<<" microseconds"; //.count here
    return 0;
}

//https://www.geeksforgeeks.org/stdgenerate-in-c/
//https://www.geeksforgeeks.org/measure-execution-time-function-cpp/
//https://www.geeksforgeeks.org/measure-execution-time-with-high-precision-in-c-c/
//https://en.cppreference.com/w/cpp/chrono/duration/duration_cast
