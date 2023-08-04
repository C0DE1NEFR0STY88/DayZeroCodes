#include<stdio.h>
#include<conio.h>

void main()
{
    //clrscr();
    
    int a,b;
    
    //printf("Enter the numbers: ");
    //scanf("%d %d", &a, &b);
    
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("\nEnter number 2: ");
    scanf("%d", &b);
    
    if(a>b)
        printf("The number %d is greater.", a);
    else if(a<b)
        printf("The number %d is greater.", b);
    else
        printf("Both numbers are equal.");
    
    //getch();
}
