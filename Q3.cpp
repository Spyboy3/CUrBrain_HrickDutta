#include<iostream>
using namespace std;

int main()
{
     int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int temp=n;
    int sum=0;
    int rem, q;
    
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(sum==n)
       cout<<"Reverse ="<<sum<<",so it is palindrome\n";
    else
        cout<<"Reverse ="<<sum<<";"<<sum<<"+"<<n<<"="<<sum+n<<"\n";
   
}