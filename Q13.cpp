#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool prefix(vector<int>nums,int k)
{
    if(nums.empty())return false;
    int n=nums.size();
    
    long long sum=0;
    for(int i=-0;i<n;i++)
    {
        sum+=nums[i];
        if(sum%k==0)
            return true;

    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements \n";
    for (int i=0;i<n;i++)
        cin>>nums[i];
    
    int k;
    cout<<"Enter the value of k\n";
    cin>>k;
    k=abs(k);
    bool ans=prefix(nums,k);
    if(ans)
        cout<<"True\n";
    else
        cout<<"False\n";
}