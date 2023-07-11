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
    for(i=0;i<n;i++)
    {
        int j=0;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
                break;
            
        }
    
        if(i==j)
        {
            cout<<arr[i]<<" ";
        }
    }
    

}