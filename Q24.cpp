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
    
    cout<<"Enter the target value\n";
    int target;
    cin>>target;
    int minlen=n+1;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=num[j];
            if(sum>=target)
            {
                if(j-i+1<minlen)
                    minlen=j-i+1;
                
                break;
            }
                
        }
    }
    if(minlen==n+1)
        cout<<"0";
    else
        cout<<minlen;
}