#include<bits/stdc++.h>
using namespace std;
int main()
{


    vector<int>a;
    a.push_back(22); //index  0
    a.push_back(21); //index  1
    a.push_back(40); //index  2
    a.push_back(100);//index  3

      for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    a.erase(a.begin()+2);//this func delete any index that you want

      for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    a.erase(a.begin()+2,a.end());
       for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;



}

