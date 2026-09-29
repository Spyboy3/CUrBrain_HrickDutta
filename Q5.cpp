#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>even(vector<int> num)
{
    int n=num.size();
    
    for(int i=0;i<n;i++)
    {
        if(num[i]%2==0)
            num[i]=0;
        
    }
    reverse(num.begin(),num.end());
    return num;
}
int main()
{
    int n;
   
    cout<<"Enter the value of n\n";
    cin>>n;
    vector<int>num;
    int rem;
    while(n!=0)
    {
        rem=n%10;
        num.push_back(rem);
        n=n/10;
    }
    vector<int>ans=even(num);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i];
    
    cout<<"\n";
}