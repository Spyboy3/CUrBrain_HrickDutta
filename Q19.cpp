#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse_right(vector<int>&num,int k)
{
    int n=num.size();
    k = k % n;
    reverse(num.begin(),num.end());
    reverse(num.begin(),num.begin()+k);
    reverse(num.begin()+k,num.end());
}

int main()
{
    int n;
    cout<<"Enter the vaule of n\n";
    cin>>n;
    vector<int>num(n);
    cout<<"Enter the elements \n";
    for(int i=0;i<n;i++)
        cin>>num[i];
    int k;
    cout<<"Enter the value of k\n";
    cin>>k;
    reverse_right(num,k);
    cout<<"The array\n";
    for(int i=0;i<n;i++)
        cout<<num[i]<<" ";
    cout<<"\n";
    
}