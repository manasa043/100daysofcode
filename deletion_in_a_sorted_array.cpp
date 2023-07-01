/*#include<iostream>
using namespace std;
int main()
{
    int n,arr[20],i;
    cout<<"Enter the no.of elements in an array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int key,j;
    for(i=1;i<=n;i++)
    {
      key=arr[i];
      j=j-1;
      while(j>=0 && arr[j]>key)
      {
        arr[j+1]=arr[i];
        j=j-1;
      }
      arr[j+1]=key;
    }
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

}*/
#include<iostream>
using namespace std;
int main()
{
    int n,arr[20],i;
    cout<<"enter the no.of elements"<<endl;
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
            j=j-1;
        }
        arr[j+1]=key;

    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int val;
    int flag=0;
    cout<<"Enter the key value to delete the value"<<endl;
    cin>>val;
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"the given key is present at index"<<i<<endl;
    }
    else{
        cout<<"the element is not found"<<endl;

    }
    int pos=i;
    
    for(j=pos;j<n;j++)
     {
        arr[j]=arr[j+1];

     }
     n--;
     cout<<"After deletion"<<endl;
     for(i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }


}