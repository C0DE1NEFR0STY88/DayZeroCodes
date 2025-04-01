#include<stdio.h>
#include<conio.h>

void main()
{
    //clrscr();
    
    int a, b, choice;
    float calval;
    
    printf("Enter the 2 nos: ");
    scanf("%d %d", &a, &b);
    printf("\nEnter choice. 1 sum 2 diff 3 prod 4 div: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
        {
            calval = a+b;
            printf("The sum is %f", calval);
            break;
        }
        case 2:
        {
            if(a>b)
            {
                calval = a-b;
                printf("The diff is %f", calval);
                break;
            }
            else
            {
                calval = b-a;
                printf("The diff is %f", calval);
                break;
            }
        }
        case 3:
        {
            calval = a*b;
            printf("The prod is %f", calval);
            break;
        }
        case 4:
        {
            if(b!=0)
            {
                //calval = a/b
                calval = (float)a/b; 
                //NECESSARY TO DO THIS. OTHERWISE INT DIVISION HAPPENS AND THAT DISCARDS FRACTION PART BEFORE ASSIGNING.
                //EXPLICIT TYPE CASTING!!!
                
                //eg of IMPLICIT method:
                //val = a/3.5; //THIS IS IMPLICIT, SINCE 1 NUM IS FLOAT, SO DIVres GETS PROMOTED TO FLOAT AUTOMATICALLY.
                printf("The div is %f", calval);
                break;
            }
            else
            {
                printf("div by  0 error");
                break;
            }
        }
    }
    
    //getch();
}
//https://www.geeksforgeeks.org/implicit-and-explicit-type-casting/
//https://github.com/C0DE1NEFR0STY88/DayZeroCodes/blob/main/CPP/expVimp_TypeCon_calcdiv.cpp
