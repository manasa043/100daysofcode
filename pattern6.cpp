#include<bits/stdc++.h>
using namespace std;
void print4(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++){
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
    cout<<"enter the no.of rows to print"<<endl;
    int n;
    cin>>n;
    print4(n);
     print5(n);
}