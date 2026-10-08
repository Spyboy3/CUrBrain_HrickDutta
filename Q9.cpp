#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int next(int n)
{
    int i=n;
    while (true)
    {
        i++;
        int count = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                if (i / j != j)
                    count++;
            }
        }
        if (count == 2)      
            return i;
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int prime=next(n);
    cout<<prime<<"\n";
}