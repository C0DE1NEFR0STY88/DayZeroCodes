#include<stdio.h>
#include<conio.h>

void main()
{
    int a=0, b=1, c, n, i=0; //c = a+b, //also valid //LONG LONG UNSIGNED INT WOULD BE %lld instead of %d
    printf("Enter the range: ");
    scanf("%d", &n);
    //printf("%d", n);
    
    printf("%d \n%d \n", a, b);
    while(i<n)
    {
        c = a+b;
        a = b;
        b = c;
        printf("%d \n", c);
        i++;
    }
}

//https://www.geeksforgeeks.org/software-engineering-cocomo-model/
//kloc
//https://www.geeksforgeeks.org/man-in-the-middle-attack-in-diffie-hellman-key-exchange/
//ssl verif shutdown will expose you to MITM attack
//https://stackoverflow.com/questions/69266522/how-ssl-certificate-prevents-man-in-the-middle-attack
//https://www.onlinegdb.com/


//LONG LONG METHOD with i COUNT:
#include<stdio.h>
#include<conio.h>

void main()
{
    //clrscr();
    long long unsigned int a=0, b=1, c=a+b, n, i=0;
    
    printf("enter range:");
    scanf("%lld",&n);
    
    printf("%lld %lld ", a, b);
    
    while(i<=n)
    {
        printf("%lld ", c);
        a=b;
        b=c;
        c=a+b;
        i++;
    }
    
    //getch();
}
