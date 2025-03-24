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
    else if(a<b) //this has to be else if, otherwise 2 -4 (and where 1st is larger) would print else statement as well since 1st if is dangling, else gets attached to 2nd if
        printf("The number %d is greater.", b);
    else
        printf("Both numbers are equal.");
    
    /*
    if(a>b)
        printf("The first num %d is larger", a);
    if(b>a) //this has to be else if, otherwise 2 -4 (and where 1st is larger) would print else statement as well since 1st if is dangling, else gets attached to 2nd
        printf("The second num %d is larger",b);
    else
        printf("The nos %d and %d are equal", a, b);
    */
    
    //getch();
}
