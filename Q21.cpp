#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    cout<<"Enter the elements\n";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cout<<"Enter the target\n";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            for(int j=i;j<n-1;j++)
                arr[j]=arr[j+1];
            n--;// reduce the size of the array if the target is found 
            break;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<"\n";
}