#JAI SHREE RAM

#calcbase
def add(n1,n2):
    n3=n1+n2
    print("The sum, ",n1,"+",n2,"=",n3)

def subt(n1,n2,ch):
    if(ch=='y' or ch=='Y'):
        if(n1>n2):
            n3=n1-n2
            print("The difference, ",n1,"-",n2,"=",n3)
        else:
            n3=n2-n1;
            print("The difference, ",n2,"-",n1,"=",n3)
    else:
        n3=n1-n2
        print("The difference, ",n1,"-",n2,"=",n3)

def mult(n1,n2):
    n3=n1*n2
    print("The product, ",n1,"*",n2,"=",n3)

def divide(n1,n2):
    if(n2==0):
        print("ZeroDiv error. Denominator cannot be zero.")
    else:
        n3=n1/n2
        print("The division, ",n1,"/",n2,"=",n3)


#mainline
n1=int(input("Enter number 1: "))
n2=int(input("Enter number 2: "))

funcchoice=int(input("Enter arith () choice: 1.Addition 2.Subtraction 3.Multiplication 4.Division :: "))

if(funcchoice==1):
    add(n1,n2)
elif(funcchoice==2):
    ch=input("Force a positive processing result? (Y/N): ")
    subt(n1,n2,ch)
elif(funcchoice==3):
    mult(n1,n2)
elif(funcchoice==4):
    divide(n1,n2)
else:
    print("Incorrect choice.")

"""
//autoarrgensorter revis_ new beginnings
#include<iostream>

using namespace std;

void sortedthatone(double arrrec[], int noelerec)
{
    sort(arrrec,arrrec+noelerec);
    
    cout<<"\n\nThe post-sort array build structure is: \n";
    for(int i=0;i<noelerec;i++)
        cout<<arrrec[i]<<" ";

}

int main()
{
    srand(time(0));
    
    int randomman=rand()%1500, noele;
    double arr[randomman];
    
    for(int i=0;i<randomman;i++)
        arr[i]=rand()%10000;
    
    cout<<"\nThere are "<<randomman<<" elements in the array, with each element taking "<<sizeof(arr[0])<<" bytes.";
    cout<<"\nThe array takes "<<sizeof(arr)<<" bytes as a whole.";
    
    cout<<"\n\nThe current array build structure is: \n";
    for(int i=0;i<randomman;i++)
        cout<<arr[i]<<" ";
    
    sortedthatone(arr,randomman);
    
    return 0;
}

===============================================================

//autoalphanumgen revis_ new beginnings
#include<iostream>

using namespace std;

int main()
{
    srand(time(0));
    
    int userlen, basesize=62;
    
    cout<<"\nEnter desired alphanum length: ";
    cin>>userlen;
    
    char alphanumbase[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890", alphanumgen[userlen];
    //cout<<sizeof(alphanumbase);
    
    for(int i=0;i<userlen;i++)
        alphanumgen[i]=alphanumbase[rand()%basesize];
    
    alphanumgen[userlen]='\0';
    cout<<alphanumgen;
    
    return 0;
}
"""
