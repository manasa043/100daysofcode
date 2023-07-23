#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size"<<endl;
    int i,n,arr[50];
    cin>>n;
    cout<<"enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int mul=1;
    for(i=0;i<n;i++)
    {
        mul=arr[i]*mul;
    }
    cout<<"the multiplication of given array is "<<mul<<endl;
}