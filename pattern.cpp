#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"printing the pattern"<<endl;
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}