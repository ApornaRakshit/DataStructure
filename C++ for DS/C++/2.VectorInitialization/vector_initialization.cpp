#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int> v;   type 1
    //vector<int>v(5);   type 2
    //vector<int>v(5,10);   type 3
    int n;
    cin>>n;
    vector<int> numbers;
    for(int i=1; i<n;i++)
    {
        numbers.push_back(i);
    }
    for(int i=0; i<numbers.size();i++)
    {
        
    }
    cout<<endl;
    cout<<numbers<<" "<<endl;
   // cout<<v.size()<<endl;
    return 0;
}