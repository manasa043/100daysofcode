#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size"<<endl;
    int i,n,arr[89];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    int sum;
    cout<<endl;
    cout<<"Enter the sum value"<<endl;
    cin>>sum;
    int j,k;
    for(i=0;i<n-2;i++)
    {
        for(j=i;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<"the element is"<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
                }
            }
        }
    }
}