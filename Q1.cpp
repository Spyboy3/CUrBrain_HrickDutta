#include<iostream>
using namespace std;
bool check(int n)
{
    int temp =n;
    int rem, q,c=0;
    if(n==0)
        return false;
    while(temp!=0)
    {
        rem=temp%10;
        c++;
        temp=temp/10;

    }
    if(c%2==0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout<<"Enter the value of n\n ";
    cin>>n;
    bool ch=check(n);
    if(ch==true)
        cout<<"true\n";
    else
        cout<<"false\n";
}