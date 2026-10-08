#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
set<int> fact(int a)
{
   set<int> ans;
   for (int i=1;i*i<=a;i++)
   {
      if(a%i==0)
      {
         ans.insert(i);
         if(a/i!=i)
            ans.insert(a/i);
      }
   }
   return ans;
}
int main()
{
    int n,k;
    cout<<"Enter the value of n\n";
    cin>>n;
    cout<<"Enter the value of k\n";
    cin>>k;
    set<int> s = fact(n);
    vector<int> v(s.begin(), s.end());

    if (k < 1 || k > (int)v.size())
        cout << -1;
    else
        cout << v[k - 1]<<"\n";
   
}