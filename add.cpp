#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of array"<<endl;
    int n,arr[30],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<endl;
    cout<<"the sum of the elements in the array"<<endl<<sum<<endl;
    

}