#include<iostream>
#include<string>
#include<bitset>

using namespace std;

int main()
{
    string inpstring;

    cout<<"Input: ";
    getline(cin,inpstring);
    cout<<"\n";

    for(int i = 0; i<inpstring.size(); i++)
        cout<<inpstring[i]<<" "<<bitset<8>(inpstring[i])<<"\n";
    cout<<"\nIn one line: \n";
    for(int i=0; i<inpstring.size();i++)
        cout<<bitset<8>(inpstring[i]);

    return 0;
}
