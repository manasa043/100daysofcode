//not dumped
#include<iostream>
using namespace std;
int main()
{
    int i,n,arr[20];
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"the last three large elements are"<<endl;
    cout<<arr[n-1]<<endl;
    cout<<arr[n-2]<<endl;
    cout<<arr[n-3]<<endl;
    
}