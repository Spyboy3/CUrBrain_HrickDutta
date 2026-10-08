#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    vector<int>p(n+1);
    for(int i=2;i<n;i++)
    {
        p[i]=1;
    }
    for(int i=2;i*i<n;i++)
    {
        if(p[i]==1)
        {
            for(int j=i*i;j<n;j+=i)
            {
                p[j]=0;
            }
        }
    }
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(p[i]==1)
            count++;
    }
 return count;
}
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    int ans=prime(n);
    cout<<ans<<"\n";
}