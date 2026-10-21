#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>second(vector<int>num)
{
    int n=num.size();
    int secl=INT_MIN;
    int lar=INT_MIN;
    bool check=false;
    for(int i=0;i<n;i++)
    {
        if(lar<num[i])
        {
            secl=lar;
            lar=num[i];
            
        }
        else if(secl<num[i]&&num[i]!=lar)
        {
            secl=num[i];
            check=true;
        }
    }
    vector<int>ans;
    if(check)
        ans.push_back(secl);
    else
        ans.push_back(-1);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    vector<int>num(n);
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
        cin>>num[i];
    
    vector<int>ans=second(num);
    cout<<"The second largest element\n";
    if(ans.empty()||ans[0]==-1)
        cout<<"-1\n";
    else
        cout<<ans[0]<<"\n";
}