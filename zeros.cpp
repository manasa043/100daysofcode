#include<iostream>
using namespace std;
int main()
{
    cout<<"ENter the number of elements in the array"<<endl;
    int n,i,arr[20];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int j=0;
    for(i=0;i<n;i++)
       {
        int temp;
        if(arr[i]==0)
        {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        

        }
       }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}