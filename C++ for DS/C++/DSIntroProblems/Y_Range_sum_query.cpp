#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }
    while(q--){    //O(q)
        int l, r;
        cin>>l>>r;
        l--;
        r--;
        int sum = 0;
        for(int i=l; i<=r;i++)    //O(n)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }                            //O(n*q)
    return 0;
}