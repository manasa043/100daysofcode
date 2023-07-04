//not dumped
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of elements in an array"<<endl;
    int n,arr[20],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
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
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the second largest element is"<<":"<<arr[n-2]<<endl;
}