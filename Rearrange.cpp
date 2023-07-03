#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of an array"<<endl;
    int n,i,arr[30];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"after the rearrangement"<<endl;
    int temp;
    for(i=0;i<n-1;i+=2)
    {
        if(arr[i]<arr[i+1])
        {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}