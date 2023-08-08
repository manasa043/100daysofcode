#include<bits/stdc++.h>
using namespace std;
void print5(int n)
{
    for(int i=4;i>=0;i--)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++)
        {
            cout<<"*";
        }
        for(int l=0;l<n-i-1;l++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"enter the number of rows to be printed"<<endl;
    int n;
    cin>>n;
    print5(n);
}
