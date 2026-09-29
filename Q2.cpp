#include<iostream>
using namespace std;

int reverse(int n)
{
    int temp=n;
    int sum=0;
    int rem, q;
    if(n==0)
        return false;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }

    return sum*2;
}
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int revd=reverse(n);
    cout<<revd<<"\n";
}
