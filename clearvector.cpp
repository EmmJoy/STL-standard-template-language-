#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector declearation
    vector<int>a;
    a.push_back(22); //index  0
    a.push_back(21); //index  1
    a.push_back(40); //index  2
    a.push_back(100);//index  3

   // size of this vector

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    cout<<a.size()<<endl;

    a.clear();//clear the vector
    cout<<a.at(3)<<endl;
    cout<<a.size()<<endl;
    if(a.empty()){cout<<"Vector is  empty"<<endl;}
    else {cout<<"vector is not empty"<<endl;}



}
