#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int>m;
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        m[num[i]++];
    }
    int max=0;
    int ans=INT_MAX;
    for(auto x : m)
    {
        if(x.second>max)
        {
            max=x.second;
            ans=x.first;
        }
        else if(x.second==max && x.first<ans)
        {
            ans=x.first;
        }
    }
    cout<<"Number with most frequency"<<ans<<"\n";
}