#include<iostream>

using namespace std;


float hmtodecval(float hrs, float min)
{
    float decvalcalc=hrs+(min/60);
    cout<<"\n"<<hrs<<" hours and "<<min<<"minutes is "<<decvalcalc;
}


float decvaltohm(float decvalpassed)
{
    float mincalc=decvalpassed*60;
    cout<<"\n"<<decvalpassed<<" is "<<mincalc<<" minutes ";
}

int main()
{
    int choice;
    float hours, minutes, dec_val;
    cout<<"Enter choice: 1. HM to Dec; 2. Dec to HM: ";
    cin>>choice;
    switch(choice)
    {
        case(1):
                cout<<"\n\nEnter Hours: ";
                cin>>hours;
                cout<<"\nEnter Minutes: ";
                cin>>minutes;
                hmtodecval(hours, minutes);
                break;
        case(2):
                cout<<"\n\nEnter decimal value (eg if 8.80 is time, enter 0.80 for getting minutes): ";
                cin>>dec_val;
                decvaltohm(dec_val);
                break;
        default:
                cout<<"\n\n\nIncorrect choice. Kindly grow a braincell. Sincere regards.";
        
    }
    
    return 0;
}
