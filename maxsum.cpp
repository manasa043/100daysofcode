/*#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the size of array"<<endl;
    int n,i,arr[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << findMaxSum(arr, n);
	return 0;

}
// CPP program to find
// maximum equilibrium sum.

// Function to find
// maximum equilibrium sum.
int findMaxSum(int arr[], int n)
{
	int res = INT_MIN;
	for (int i = 0; i < n; i++)
	{
	int prefix_sum = arr[i];
	for (int j = 0; j < i; j++)
		prefix_sum += arr[j];

	int suffix_sum = arr[i];
	for (int j = n - 1; j > i; j--)
		suffix_sum += arr[j];

	if (prefix_sum == suffix_sum)
		res = max(res, prefix_sum);
	}
	return res;
}
*/
// Driver Code
// CPP program to find
// maximum equilibrium sum.
#include <bits/stdc++.h>
using namespace std;

// Function to find
// maximum equilibrium sum.
int findMaxSum(int arr[], int n)
{
	int res = INT_MIN;
	for (int i = 0; i < n; i++)
	{
	int prefix_sum = arr[i];
	for (int j = 0; j < i; j++)
		prefix_sum += arr[j];

	int suffix_sum = arr[i];
	for (int j = n - 1; j > i; j--)
		suffix_sum += arr[j];

	if (prefix_sum == suffix_sum)
		res = max(res, prefix_sum);
	}
	return res;
}

// Driver Code
int main()
{
	int arr[] = {-2, 5, 3, 1,
				2, 6, -4, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << findMaxSum(arr, n);
	return 0;
}


