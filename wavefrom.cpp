#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter th size of array"<<endl;
    int i,n,arr[40];
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
    int key,j;
    for(i=1;i<=n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;
        
    }
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int temp;
    for(i=1;i<=n;i+2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i]=temp;
        
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

    
}
