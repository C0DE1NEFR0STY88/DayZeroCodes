#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;


void sortedthatone(double arrrec[], int noelerec)
{
    sort(arrrec,arrrec+noelerec);
    
    cout<<"\n\nThe sorted build is: \n";
    for(int i=0;i<noelerec;i++)
        cout<<arrrec[i]<<" ";
    
}


int main()
{
    auto start=high_resolution_clock::now();
    
    srand(time(0));
    
    int noele, randomman=rand()%1000, randomflipper;
    double arr[randomman];

    //using i here for random strain isn't smart; as it will make the arr generation predictable (since depends entirely on pos)
    //better use another random variable spawn/mutation for if conditions.
    //used randomflipper var for mutation.
    for(int i=0;i<randomman;i++)
    {
        randomflipper=rand()%1111;
        
        if((randomflipper%2==0)&&(randomflipper%5==0))
            arr[i]=float(rand()%1000);
        else if((randomflipper%2==0)&&(randomflipper%3==0))
            arr[i]=float(rand()%1000)*float(rand()%8);
        else if((randomflipper%11==0))
            arr[i]=float(rand()%100)/(float(11)+1);
        else if((randomflipper%3==0)&&(randomflipper%5==0))
            arr[i]=(float(rand()%64))*(rand()%4);
        else if((randomflipper%2)==0)
            arr[i]=float(rand()%1000)/(float(rand()%10)+1);
        else
            arr[i]=rand()%10000;
    }
    
    noele=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"\n\nThere are "<<noele<<" elements in the array; with each element taking "<<sizeof(arr[0])<<" bytes.";
    cout<<"\nThe array takes "<<sizeof(arr)<<" bytes as a whole.";
    
    cout<<"\n\nThe current build is: \n";
    for(int i=0;i<noele;i++)
        cout<<arr[i]<<" ";
    
    auto startsorter=high_resolution_clock::now();
    
    sortedthatone(arr,noele);
    
    auto stop=high_resolution_clock::now();
    
    auto duration=duration_cast<microseconds>(stop-start); //start stop and cast duration parameter
    
    auto durationsorter=duration_cast<microseconds>(stop-startsorter);
    
    cout<<"\n\nThe prgrm took: "<<duration.count()<<" microseconds";
    cout<<"\n\nThe () took: "<<durationsorter.count()<<" microseconds";
    
    return 0;
}
