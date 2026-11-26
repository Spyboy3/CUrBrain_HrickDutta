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
    int left=0,right=n-1;
    int min_diff=INT_MAX;
    int ans1,ans2;
    while(left<right)
    {
        int sum=num[left]+num[right];
        int diff=abs(sum-target);
        if(diff<min_diff)
        {
            min_diff=diff;
            ans1=num[left];
            ans2=num[right];
        }
        if(sum>target)
            right--;
        else if(sum<target)
            left++;
        else
            break;
    }
    cout<<ans1<<","<<ans2;
}