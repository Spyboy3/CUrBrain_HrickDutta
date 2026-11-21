#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0;
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    vector<int> num(n);
    cout<<"Enter the elements \n";
    for(int i=0;i<n;i++)
        cin>>num[i];
    
    for(int i=n-1;i>=0;i--)
    {
        int temp=num[i];
        num[i]=sum;
        sum+=temp;
    }

    for(int i=0;i<n;i++)
        cout<<num[i]<<" ";

    cout<<"\n";
}