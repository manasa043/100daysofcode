#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the size of array"<<endl;
    int i,n,arr[20];
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
    int mul=1;
    for(i=0;i<n;i++)
    {
        mul=mul*arr[i];
    }
    cout<<endl;
    cout<<"The multiplication array of elements is"<<mul<<endl;
}