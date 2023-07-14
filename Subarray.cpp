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
    cout<<"Enter the sum value"<<endl;
    cin>>sum;
    int j;
    int currentsum;
    for(i=0;i<n;i++)
    {
       currentsum=arr[i];
        if(currentsum==sum)
        {
            cout<<"idexes at"<<i<<endl;
            return 0;
        
        }
        for(j=i+1;j<n;j++)
        {
            currentsum=currentsum+arr[j];
            if(currentsum==sum)
            {
                cout<<"indexes are "<<i<<" "<<j<<endl;
                return 0;
            
            }

        }
    }
    cout<<"subarray not found"<<endl;
}
