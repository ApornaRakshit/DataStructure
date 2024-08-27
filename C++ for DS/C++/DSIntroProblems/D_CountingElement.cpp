#include<bits/stdc++.h>
using namespace std;
int countSuccess(const vector<int> arr){
    int count =0;
    int n = arr.size();

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> arr;
    int n;
    for(int i=0; i<n; i++)
    {
        int num;
        cin>> num;
        arr.push_back(num);
    }

    int result = countSuccess(arr);
    cout<<result<<endl;
    return 0;
}