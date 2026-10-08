#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (b !=0)
    {
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
    
}
int main()
{
    int n;
    cout<<"Enter the no of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    int x;
    cin>>x;
    int g=x;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        g=gcd(x,g);
    }
    cout<<"GCD = "<<g<<"\n";
}