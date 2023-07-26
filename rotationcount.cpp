#include<iostream>
using namespace std;
int main()

{

    cout<<"enter the size"<<endl;
    int i,j,k,n;
    int arr[70];
    cin>>n;
    cout<<"enter the eelemnts"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int min=arr[0];
    int pos=0;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            pos=i;
        }
    }
    cout<<"The rotation count of the array is"<<pos<<endl;

}
