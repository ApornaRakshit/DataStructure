#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
        if(i!=n-1){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}