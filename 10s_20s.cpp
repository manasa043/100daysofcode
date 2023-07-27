#include<iostream>
using namespace std;
int main()

{

    cout<<"enter the size"<<endl;
    int i,j,k,n;
    int arr[70];
    cin>>n;
    cout<<"enter the eelemnts only 0s,1s,2s"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   /* int l=0;
    int m=0;
    int hi=n-1;
    while(m<=hi)
    {
        switch(arr[m])
        {
             case 0:
            {
                int temp=arr[l++];
                arr[l++]=arr[m++];
                arr[m++]=temp;
                break;
            }

            case 1:
            {
                m++;
                break;
            }
            case 2:
            {
                int temp=arr[m];
                arr[m]=arr[hi--];
                arr[hi--]=temp;
                break;
            }
           
        }
    }*/
    int lo = 0;
    int hi = n-1;
    int mid = 0;
     while (mid <= hi) {
        switch (arr[mid]) {
 
        // If the element is 0
        case 0:
            swap(arr[lo++], arr[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
     }

 
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}