#include<iostream>

using namespace std;

int main()
{
    char a;
    int b;
    float c;
    double d;
    cout<<typeid(a).name()<<" "<<typeid(b).name()<<" "<<typeid(c).name()<<" "<<typeid(d).name()<<" ";
    //c i f d
    //https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
    return 0;
}

//https://www.isro.gov.in/Chandrayaan3.html
