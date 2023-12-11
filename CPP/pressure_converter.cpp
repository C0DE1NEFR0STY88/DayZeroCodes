//need to add psi

#include<iostream>
#include<conio.h>

using namespace std;

int gv_var=420;
double atmtemp, bartemp, pastemp, psitemp;

//https://www.oreilly.com/library/view/high-performance-javascript/9781449382308/ch04.html#:~:text=Figure%C3%82%C2%A04%2D1.%C3%82%C2%A0Array%20item%20lookup%20versus%20using%20if%2Delse%20or%20switch
//the same soltn can be built using if-else exclusively, 
//and then the execution time can be compared for same i/p vals
void choicemaster(int choicerec)
{
    int choiceinternal;
    
    switch(choicerec)
    {
        case 1:
                cout<<"\nYou have selected Bar and Pascal; please specify";
                cout<<"\n1. Bar to Pascal, 2. Pascal to Bar";
                cout<<"\nEnter choice: ";
                cin>>choiceinternal;
                switch(choiceinternal)
                {
                    case 1: 
                            cout<<"\n\nYou have selected Bar to Pascal.";
                            bar2pascal();
                            break;
                    case 2: 
                            cout<<"\n\nYou have selected Pascal to Bar.";
                            pascal2bar();
                            break;
                    default:
                            cout<<"\n\n\nINCORRECT Input.";
                            break;
                }
                break;
        case 2:
                cout<<"\nYou have selected ATM and Pascal; please specify";
                cout<<"\n1. ATM to Pascal, 2. Pascal to ATM";
                cout<<"\nEnter choice: ";
                cin>>choiceinternal;
                switch(choiceinternal)
                {
                    case 1: 
                            cout<<"\n\nYou have selected ATM to Pascal.";
                            atm2pascal();
                            break;
                    case 2: 
                            cout<<"\n\nYou have selected Pascal to ATM.";
                            pascal2atm();
                            break;
                    default:
                            cout<<"\n\n\nINCORRECT Input.";
                            break;
                }
                break;
        case 3:
                cout<<"\nYou have selected ATM and Bar; please specify";
                cout<<"\n1. ATM to Bar, 2. Bar to ATM";
                cout<<"\nEnter choice: ";
                cin>>choiceinternal;
                switch(choiceinternal)
                {
                    case 1: 
                            cout<<"\n\nYou have selected ATM to Bar.";
                            atm2bar();
                            break;
                    case 2: 
                            cout<<"\n\nYou have selected Bar to ATM.";
                            bar2atm();
                            break;
                    default:
                            cout<<"\n\n\nINCORRECT Input.";
                            break;
                }
                break;
        default:
                cout<<"\n\n\nINCORRECT Input.";
                break;
    }
    
}


void bar2pascal()
{
    clrscr();
    
    cout<<"\nConverting Bar to Pascal::\n";
    cout<<"\nEnter the Bar temp val: ";
    cin>>bartemp;
    
    pastemp=bartemp*100000;
    
    cout<<"\nThe Pascal temp val is: "<<pastemp;
}

void pascal2bar()
{
    clrscr();
    
    cout<<"\nConverting Pascal to Bar::\n";
    cout<<"\nEnter the Pascal temp val: ";
    cin>>pastemp;
    
    bartemp=pastemp/100000;
    
    cout<<"\nThe Bar temp val is: "<<bartemp;
}

void atm2pascal()
{
    
}

void pascal2atm()
{
    
}

void atm2bar()
{
    
}

void bar2atm()
{
    
}


//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void globallocalvariable()
{
    int gv_var=69;
    cout<<"The val of global var is: "<<::gv_var;
    cout<<"The val of local var is: "<<gv_var;
}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main()
{
    clrscr();
    cout<<"!!!!PRESSURE CONVERTER!!!!";
    choicemaster();
    return 0;
}
