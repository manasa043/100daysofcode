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
    int sum;
    cin>>sum;
    cout<<"the sum is"<<sum;
    int min=arr[0];
    int k;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"the minimum element is"<<min<<endl;
}