#include<iostream>
#include<bits/stdc++.h>
#include <stdexcept>
using namespace std;

long long modpow(long long base, long long power, long long mod)
{
    if(mod <=0 || power <0)
        throw invalid_argument("mod must be positive and power should be greater than zero");
    
    base %= mod;
    long long ans = 1%mod;

    for(int i=0;i<power;i++)
        ans=(ans*base)%mod;
    
    return ans;


}
int main()
{
    long long base, power,mod;
    cout<<"Enter the base \n";
    cin>>base;
    cout<<"Enter thr power\n";
    cin>>power;
    cout<<"Entert the mod\n";
    cin>>mod;
    long long ans=modpow(base,power,mod);
    cout<<ans<<"\n";
}
