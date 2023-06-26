#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the size of the Array"<<endl;
   cin>>n;
   int arr[n],i;
   cout<<"enter the elements"<<endl;
   for(i=0;i<n;i++)
   {
      cin>>arr[i];

   }
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<"right rotation.Enter the no.of rotations"<<endl;
   int d;
   cin>>d;
   int temp[n];
   int j=0;
   for(i=d;i<n;i++)
   {
    temp[j]=arr[i];
    j++;
   }
   for(i=0;i<d;i++)
   {
    temp[j]=arr[i];
    j++;
   }
   cout<<"the array is"<<endl;
   for(i=0;i<n;i++)
   {
    arr[i]=temp[i];
   }
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}
