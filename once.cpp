#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size"<<endl;
    int i,n,arr[50];
    cin>>n;
    cout<<"Enter the elemnts"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(i=0;i<n;i++)
    {
        int count=0;
        int j;
        for(j=0;j<n;j++)
        {
           if(arr[i]==arr[j])
           {
            count++;
           }
        }
        if(count==1)
        {
            cout<<"the element is"<<arr[i]<<endl;
            return i;
            
        }
        


        

    } 
}
