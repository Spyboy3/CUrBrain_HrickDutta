#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

long long moduloadd(vector<long long>num)
{
    long long sum=0;
    for(int i=0;i<num.size();i++)
    {
        sum=(sum+num[i]% mod) % mod;

    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the size of n";
    cin>>n;
    vector<long long> num(n);
    for(int i=0;i<n;i++)
        cin>>num[i];
    
    long long ans=moduloadd(num);
    cout<<ans<<"\n";
}