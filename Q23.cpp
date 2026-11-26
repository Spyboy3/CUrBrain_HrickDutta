#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    vector<int>num(n);
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
        cin>>num[i];
    
    int mini=INT_MAX;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum= min(num[i],sum+num[i]);
        mini=min(mini,sum);
    }
    cout<<mini;
}