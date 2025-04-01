#include<iostream>

using namespace std;

int main()
{
    int a, b, choice;
    float calval;
    
    cout<<"Enter the 2 nos: ";
    cin>>a>>b;
    cout<<"\nEnter choice. 1 sum 2 diff 3 prod 4 div: ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        {
            calval = a+b;
            cout<<"The sum is "<<calval;
            break;
        }
        case 2:
        {
            if(a>b)
            {
                calval = a-b;
                cout<<"The diff is "<<calval;
                break;
            }
            else
            {
                calval = b-a;
                cout<<"The diff is "<<calval;
                break;
            }
        }
        case 3:
        {
            calval = a*b;
            cout<<"The prod is "<<calval;
            break;
        }
        case 4:
        {
            if(b!=0)
            {
                //calval = a/b;
                //calval = (float)a/b; //C METHOD; ALSO WORKS IN CPP
                calval = static_cast<float>(a)/b; //cpp method
                //NECESSARY TO DO THIS. OTHERWISE INT DIVISION HAPPENS AND THAT DISCARDS FRACTION PART BEFORE ASSIGNING.
                //EXPLICIT TYPE CASTING!!!
                //HAPPENS IN CPP AS WELL SINCE CPP INHERITS C'S INT DIV RULES
                
                //eg of IMPLICIT method:
                //val = a/3.5; //THIS IS IMPLICIT, SINCE 1 NUM IS FLOAT, SO DIVres GETS PROMOTED TO FLOAT AUTOMATICALLY.
                cout<<"The div is "<<calval;
                break;
            }
            else
            {
                cout<<"div by  0 error";
                break;
            }
        }
    }
    
    return 0;
}
