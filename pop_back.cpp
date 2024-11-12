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

    a.pop_back();//this func delete last index of this vector

      for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;


}

