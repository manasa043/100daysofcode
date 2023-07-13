#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the size"<<endl;
    int i,n,arr[50];
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
    for(i=0;i<n-1;i++)
    {
        int j;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                break;
            }
        }
        if(j==n)
        {
            cout<<arr[i]<<" ";
        }
    }
    
}