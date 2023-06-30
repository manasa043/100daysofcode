#include<iostream>
using namespace std;
int main()
{
    int n,arr[20],i;
    cout<<"enter the no.of elements"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
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
            j=j-1;
        }
        arr[j+1]=key;

    }
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int val;
    cout<<"enter the value you need to be  insrted"<<endl;
    cin>>val;
    n++;
    for(i=n-1;(i>=0 && arr[i]>val);i--)
    {
          arr[i+1]=arr[i];
    }
    arr[i+1]=val;
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
