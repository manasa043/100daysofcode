#include<iostream>
using namespace std;
int main()
{
    int n,arr[30],i;
    cout<<"Enter the no.of elements"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"before insertion"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int val;
    cout<<"Enter the value you want to delete"<<endl;
    cin>>val;
    int flag=1;
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            flag=2;
            break;
        }
    }
    if(flag==2)
    {
        cout<<"the value present at index"<<i<<endl;
        
    }
    else
      cout<<"element not found"<<endl;
    int pos=i;
    n--;
    int j;
    for(j=pos;j<=n;j++)
     {
        arr[j]=arr[j+1];

     }
     cout<<"After deletion"<<endl;
     cout<<"array is"<<endl;
     for(i=0;i<n;i++)
     {
        cout<<arr[i]<<" "<<endl;
     }
}