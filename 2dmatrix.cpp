#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter the number of rows"<<endl;
	cin>>m;
	cout<<"enter the number of columns"<<endl;
	cin>>n;
	int arr[m][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
        {
			if(arr[i][j]==0)
			{
			for(int i=0;i<n;i++)
				{
                    
					arr[i][j]=0;
				}
				for(int j=0;j<m;j++)
                {
                    arr[i][j]=0;
                }
            }
		}
	}
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
	
