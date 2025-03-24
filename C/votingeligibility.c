#include<stdio.h>
#include<conio.h>

void main()
{
    //clrscr();
    
    int age;
    
    printf("Enter the age: ");
    scanf("%d", &age);
    
    if(age>=18)
        printf("Eligible to vote");
    else
        printf("Not Eligible to vote");
    
    //getch();
}
