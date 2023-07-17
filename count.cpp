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
    int count=0,j;
    for(i=0;i<n-1;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }

    }
    cout<<"the array sorting count is"<<count<<endl;
}