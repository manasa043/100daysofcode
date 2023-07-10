#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of array";
    int i,n,arr[40];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"the array is declared"<<endl;
    int j,k;
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[j]+arr[k]>arr[i])
                {
                    count++;
                }
            }
        
        }
    }
    cout<<"the possible triangles  are"<<count<<endl;
      

}
