#include<bits/stdc++.h>
using namespace std;
void pattern7(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if(i>n)
        {
            stars=2*n-i;
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}
int main()
{
    int n;
    cout<<"enter the no. of rows to be printed";
    cin>>n;
  pattern7(n);
}