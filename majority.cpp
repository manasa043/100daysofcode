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
    int count=0;
    int maxcount=0;
    int index=-1;
    for(i=0;i<n;i++)
    {
        int j;
        
        for(j=1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count=count+1;
            }
            if(count>maxcount)
            {
                maxcount=count;
                index=i;
            }
        }
    }
    cout<<endl;
    if(maxcount>n/2)
    {
        cout<<"majority elements is"<<arr[index]<<" ";
    }
    else
    {
        cout<<"no majority element is present"<<endl;
    }
    
}