#include<iostream>
using namespace std;

int reverse(int n)
{
    int temp=n;
    int sum=0,pd=1;
    int rem, q;
    int c=0;
    while(temp!=0)
    {
        rem=temp%10;
        sum+=rem;
        pd*=rem;
        c++;
        temp=temp/10;
    }
    if(c==1)
        return n;
    else
        return pd-sum;   
}

int main()
{
    int n;
    int ans;
    cout<<"Enter the value of n\n";
    cin>>n;
    if(n==0)
        cout<<"Invalid Input n should be greater than 0\n";
    else
    {
        ans=reverse(n);
        cout<<ans<<"\n";
    }
    
    
}