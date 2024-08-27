#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>> a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]>0){
            cout<<"1";
        }
        else if(a[i]<0){
            cout<<"2";
        }
        else 
            cout<< "0";
        if(i<n-1){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}