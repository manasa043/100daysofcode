#include<iostream>
using namespace std;
int main()
{
   cout<<"enter the number of elements"<<endl;
   int n;
   cin>>n;
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
   cout<<"enter the number of positions you want to rotate right shift"<<endl;
   int d;
   cin>>d;
   int p=1;
   while(p<=d)
   {
    int last;
    last=arr[n-1];
   
   for(i=n;i>0;i--)
   {
    arr[i]=arr[i-1];
   }
   arr[0]=last;

   p=p+1;
   }
   cout<<"the rotoated array is"<<endl;
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;

}
