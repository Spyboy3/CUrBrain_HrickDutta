#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rev(vector<int>&v,int start,int end)//passed vector by reference so that the changes refelect on the original vector
{
    while(start<end)
    {
        int temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    int start , end;
    cout<<"Enter the start and end value respectively\n";
    cin>>start;
    cin>>end;
    rev(v,start,end);
    cout<<"answer\n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}