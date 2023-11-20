#include<iostream>

using namespace std;

int main()
{
    int arr[]={2,1,3,5,4,6,8,7,0,9},  a;
    
    a=(sizeof(arr)/sizeof(arr[0]));
    
    cout<<"Size of array is "<<sizeof(arr)<<" with each element taking "<<sizeof(arr[0])<<" bytes.\n";
    cout<<"There are "<<a<<" elements in the array.";

    //sort(arr, arr+a);
    sort(begin(arr),end(arr));
    
    cout<<"\nThe sorted array is: \n";
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

//https://www.geeksforgeeks.org/sort-c-stl/
//https://www.geeksforgeeks.org/sort-algorithms-the-c-standard-template-library-stl/
//https://www.onlinegdb.com/




/* toggle hehe just add in two slashes (try to mimic the ones at the end of this set) (spam pgup)
#include<iostream>

using namespace std;

int main()
{
    double arr[]={1,2,3,4,2,1,3,32,12,3,4,2,1,34,2,869,13,3,123,1,4,123,327,869,23,24,6,754,5675,575,57,34,24,32,242,9,87,6,65,5,234,4,65,43,3,6};
    int a;
    
    a=(sizeof(arr)/sizeof(arr[0]));
    cout<<"Size of the array is "<<sizeof(arr)<<" bytes, with each element taking "<<sizeof(arr[0])<<" bytes.";
    cout<<"\nThere are "<<a<<" elements in the array";
    
    sort(begin(arr),end(arr));
    cout<<"\n\nThe sorted array is: ";
    for(int i=0;i<a;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}
//*/





/*
//begin end v/s arr arr+a: 
//in a (), begin end doesn't work; must use arr arr+a logic path

#include<iostream>

using namespace std;

void sortedthatone(double arr[], int noele)
{
    sort(arr, arr+noele); //begin end won't work here
    for(int i=0;i<noele;i++)
        cout<<arr[i]<<" ";
}


int main()
{
    double arr[]={123,7,1,53,61,76,5,23,1,76,56,153,71,6,35,15,3};
    int noele;
    noele=(sizeof(arr)/sizeof(arr[0]));
    sortedthatone(arr,noele);
    return 0;
}

*/


//AUTO GEN VERSION!!!!!
/* 
//ACTUAL!!!!
#include<iostream>

using namespace std;

void sortedthatone(double arrrec[], int noelerec)
{
    sort(arrrec,arrrec+noelerec);
    
    cout<<"\n\nThe sorted array is: \n";
    for(int i=0;i<noelerec;i++)
        cout<<arrrec[i]<<" ";
}

int main()
{
    double randomsizer=rand()%500, arr[500];
    
    for(int k=0;k<randomsizer;k++)
        arr[k]=rand()%10000;
    //double arr[]={123,98,1,72,31,198,2,6,48,7,16,43,8,91,7,9481,23,4,7,0,192,8,3,74,91,82,37,4,98,3,749,18,36,5,892,3,7409,18,24,82,9,7,13};
    int noele=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"\nThere are "<<noele<<" elements in the array, with each element taking "<<sizeof(arr[0])<<" bytes.";
    cout<<"\nThe array takes "<<sizeof(arr)<<" bytes in total.";
    
    cout<<"\n\nThe current array structure is: \n";
    for(int j=0;j<noele;j++)
        cout<<arr[j]<<" ";
    
    sortedthatone(arr,noele);
    
    return 0;
}

//ACTUAL_END!!!!
*/
/***********************************************************************************************/
/*
//ACTUAL_FIXED!!! will continue; possibly add in a flip logic to flip b/w whole and decimal during generation
#include<iostream>

using namespace std;

void sortedthatone(double arrrec, int noelerec)
{
    
}

int main()
{
    srand(time(0)); //NEED TO SEED THE RANDOM FUNCTION AND LATCH IT TO TIME FOR CYBER-PSEUDO-RANDOMNESS TO BE STRONG
    
    int limiter=500, randomsizeman=rand()%limiter; 
    double arr[randomsizeman];
    
    for(int i=0;i<randomsizeman;i++)
        //arr[i]=rand()%100000;
        arr[i]=(float((rand()%10000))/float((rand()%808))); //https://www.geeksforgeeks.org/generate-a-random-float-number-in-cpp/
    //cout<<sizeof(arr)<<" "<<randomsizeman;
    
    cout<<""
    return 0;
}

//https://stackoverflow.com/questions/1108780/why-do-i-always-get-the-same-sequence-of-random-numbers-with-rand
//https://www.epochconverter.com/

/*
activelinkdumplog below:
https://www.google.com/search?q=unix+epoch&rlz=1C1GCEA_enIN1064IN1064&oq=unix+epoch&aqs=chrome..69i57.2362j0j1&sourceid=chrome&ie=UTF-8
https://www.epochconverter.com/
https://www.epochconverter.com/programming/c
https://en.wikipedia.org/wiki/Unix_time#:~:text=11%20External%20links-,Definition,to%20as%20the%20Unix%20epoch.
https://en.wikipedia.org/wiki/Epoch_(computing)
https://en.wikipedia.org/wiki/Year_2000_problem
https://en.wikipedia.org/wiki/Year_2000_problem#:~:text=computer%20system%20monitoring-,nuclear%20core,-rods%20at%20Peach
https://callofduty.fandom.com/wiki/Sergei_Ravenov
https://callofduty.fandom.com/wiki/Omega_Group
https://callofduty.fandom.com/wiki/Omega_Group#:~:text=and%20their%20pilot-,Raptor%20One%2C,-Omega%20Group%20began
//activelinkdumplog_end

//ACTUAL_FIXED_END!!!
*/






//FLIP_GENERATION_PATCHED_IN:
/*
#include<iostream>

using namespace std;

void sortedthatone(long double arrrec[], int numelerec)
{
    sort(arrrec,arrrec+numelerec);
    cout<<"\n\nSorted array is: \n";
    for(int i=0;i<numelerec;i++)
        cout<<arrrec[i]<<" ";
}

int main()
{
    srand(time(0));
    
    int randomman=rand()%1000, numele, randomflipper;
    long double arr[randomman];

    //using i here for random strain isn't smart; as it will make the arr generation predictable (since depends entirely on pos)
    //better to use another random variable spawn/mutation for if conditions.
    //used randomflipper for mutation.
    //see 2023 ver for actual with chrono implant.
    for(int i=0;i<randomman;i++)
    {
        randomflipper=rand()%8888;
        
        if(((randomflipper%2)==0)&&((randomflipper%7)==0))
            arr[i]=float(rand()%10000)/float(rand()%10000);
        else if((randomflipper%3)==0)
            arr[i]=rand()%1000;
        else if((randomflipper%11)==0)
            arr[i]=(rand()%10000)/randomflipper;
        else
            arr[i]=(3.1427*randomflipper)+88;
    }
    //NAN
    //https://www.lucidchart.com/techblog/2022/03/04/if-its-not-a-number-what-is-it-demystifying-nan-for-the-working-programmer/
    //was happening because of dangling else error
    
    numele=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"\nThere are "<<numele<<" elements in the array; with each element taking "<<sizeof(arr[0])<<" bytes.";
    cout<<"\nThe array takes "<<sizeof(arr)<<" bytes in total";
    
    cout<<"\n\nThe current array build structure is: \n";
    for(int i=0;i<numele;i++)
        cout<<arr[i]<<" ";
    
    sortedthatone(arr,numele);
    
    return 0;
}
*/
