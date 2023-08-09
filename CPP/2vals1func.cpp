#include<iostream>

using namespace std;

class BigSmall_class
{
    public://remember this
    int big_datamember, small_datamember;
    
};

BigSmall_class bigboyfunc(int a, int b)
{
    BigSmall_class bs_classobj_func;
    
    if(a>b)
    {
        bs_classobj_func.big_datamember=a;
        bs_classobj_func.small_datamember=b;
    }
    else if(b>a)
    {
        bs_classobj_func.big_datamember=b;
        bs_classobj_func.small_datamember=a;
    }
    else
    {
        cout<<"They are the same pendejo! HOW'D A MUPPET LIKE YOU PASS SELECTION EH? :3"; 
        exit(0); //to terminate prgrm; https://www.digitalocean.com/community/tutorials/exit-function-c-plus-plus
    }
    
    return bs;
}

int main()
{
    int num1, num2;
    BigSmall_class res_classobj_main;
    
    cout<<"Enter the nos: ";
    cin>>num1>>num2;
    
    res_classobj_main = bigboyfunc(num1,num2);
    
    cout<<"The big: "<<res_classobj_main.big_datamember<<" The small: "<<res_classobj_main.small_datamember;
    return 0;
}

//https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/
//Returning multiple values using Class and Object 
