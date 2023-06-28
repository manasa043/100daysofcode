#include<iostream>
using namespace std;
int main()
{
    int n,arr[30],i;
    cout<<"Enter the no.of elements"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    cout<<"before insertion"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int pos,key;
    cout<<"enter the position"<<endl;
    cin>>pos;
    cout<<"enter the key value"<<endl;
    cin>>key;
    n++;
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=key;
    cout<<"after insertion"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}