#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int absolute(vector<int>num)
{
    int n=num.size();
    int small=INT_MAX;
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(small>abs(num[i]))
        {
            small=abs(num[i]);
            pos=i;
        }
    }
    return num[pos];
}
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    cout<<"Enter the elements\n";
    vector<int>num(n);
    for(int i=0;i<n;i++)
        cin>>num[i];

    int ans=absolute(num);
    cout<<"Smallest value:"<<ans<<"\n";
}