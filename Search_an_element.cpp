#include<iostream>
using namespace std;
int main()
{
   cout<<"enter the number of elements"<<endl;
   int n;
   cin>>n;
   cout<<"enter the elements"<<endl;
   int arr[n],i;
   for(i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   cout<<"the array is"<<endl;
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   int val;
   cout<<endl;
   cout<<"enter the value you want to find"<<endl;
   cin>>val;
   int flag=0;
   for(i=0;i<n;i++)
   {
    if(arr[i]==val)
    {
        flag=1;
        break;
    }

   }
   if(flag=1)
   {
     cout<<"the element is found at"<<" "<<i+1<<endl;

   }
   else
     cout<<"element is not found"<<endl;
}