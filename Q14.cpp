#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    vector<int>num(n);
    vector<int>ans;
    int t;
    cout<<"Enter the threshold value \n";
    cin>>t;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        if(num[i]>=t)
            ans.push_back(num[i]);
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";

    cout<<"\n";
    
}