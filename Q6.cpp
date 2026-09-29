#include<iostream>
#include <cstdlib>
using namespace std;

int reverse(int n,int a,int b)
{
    int temp=n;
    int counta=0,countb=0;
    int rem;
    
    while(temp!=0)
    {
        rem=temp%10;
        if(rem==a)
            counta++;
        if(rem==b)
            countb++;
        temp=temp/10;
    }
    return abs(counta-countb);
}
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int a,b;
    cout<<"Enter the value of a\n";
    cin>>a;
    cout<<"enter the value of b\n";
    cin>>b;
    int revd=reverse(n,a,b);
    cout<<revd<<"\n";
}