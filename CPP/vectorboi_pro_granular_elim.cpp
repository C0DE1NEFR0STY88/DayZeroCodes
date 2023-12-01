#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<double> v;
    
    v.push_back(11);
    v.push_back(22);
    v.push_back(33);
    v.push_back(44);
    v.push_back(55);
    v.push_back(66);
    v.push_back(77);
    v.push_back(88);
    
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<" ";
    
    v.pop_back();
    
    cout<<"\n\n";
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<" ";
    cout<<"\n\n";
    
    while(v.empty()!=true)
    {
        v.pop_back();
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<"\n";
    }
    
    if(v.empty()==true)
        cout<<"Vector Eliminated.";
    
    return 0;
}
