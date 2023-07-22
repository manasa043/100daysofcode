#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size"<<endl;
    int i,n,arr[89];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    int sub=0;
    for(i=0;i<n;i++)
    {
        sub=sub-arr[i];
    }
    cout<<"the subsraction of elements"<<sub<<endl;
}