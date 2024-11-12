#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(100);
    cout<<"Before Insert Number  :  ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;

int originalSize = v.size();
    v.insert(v.begin(),1);
    v.insert(v.begin()+1,2);
    v.insert(v.begin()+2,3);
    v.insert(v.begin()+3,4);
    v.insert(v.begin()+4,5);
    v.insert(v.begin()+5,6,99);

cout<<"After Insert Number  :   ";
     for(int i= originalSize;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
cout<<endl;
}
